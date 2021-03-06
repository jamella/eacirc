#include "LUTRndGen.h"
#include "EACglobals.h"
#include "XMLProcessor.h"
#include "generators/QuantumRndGen.h"
#include<iostream>

LUTRndGen::LUTRndGen(unsigned long seed, int m_LevelOfRandomness)
: IRndGen(GENERATOR_LUT, seed) {
	
	this->m_LevelOfRandomness = m_LevelOfRandomness;
	
	
	if (mainGenerator == NULL) {
		
		// most likely this is about to become main generator
		// must create initial state deterministicly
		minstd_rand systemGenerator(m_seed);
		LUTSetRfunc(&S, 0, m_LevelOfRandomness);
		for (unsigned char i = 0; i < 16; i++) {
			S.stateBytes[i] = systemGenerator();
		}
	}
	else {
		// if main generator was already initialized, use it to get new random accumulator
		LUTSetRfunc(&S, 0, m_LevelOfRandomness);
		for (unsigned char i = 0; i < 16; i++) {
			mainGenerator->getRandomFromInterval((unsigned char)UCHAR_MAX, S.stateBytes + i);
		}
	}
}

LUTRndGen::LUTRndGen(TiXmlNode *pRoot)
: IRndGen(GENERATOR_LUT, 1) {  // cannot call IRndGen with seed 0, warning would be issued
	if (atoi(getXMLElementValue(pRoot, "@type").c_str()) != m_type) {
		mainLogger.out(LOGGER_ERROR) << "Incompatible generator types." << endl;
		return;
	}
	m_LevelOfRandomness = atoi(getXMLElementValue(pRoot, "level_of_randomness").c_str());
	LUTSetRfunc(&S, 0, m_LevelOfRandomness);
	istringstream(getXMLElementValue(pRoot, "original_seed")) >> m_seed;

	if (atol(getXMLElementValue(pRoot, "accumulator_state/@length").c_str()) != LUT_STATE_LENGTH) {
		mainLogger.out(LOGGER_ERROR) << "Incompatible accumulator length - state not loaded." << endl;
		mainLogger.out() << "       required: " << LUT_STATE_LENGTH << endl;
		mainLogger.out() << "          found: " << getXMLElementValue(pRoot, "accumulator_state/@length") << endl;
	}
	else {
		istringstream ss(getXMLElementValue(pRoot, "accumulator_state"));
		unsigned char value;
		for (int i = 0; i < LUT_STATE_LENGTH; i++) {
			ss >> value;
			S.stateBytes[i] = value;
		}
		
	}
}

LUTRndGen::~LUTRndGen() {
	
}
int LUTRndGen::getRandomFromInterval(unsigned long highBound, unsigned long* pRandom) {
	int status = STAT_OK;

	// UPDATE ACCUMULATOR
	status = UpdateAccumulator();

	// GET FIRST ULONG FROM ACCUMULATOR
	unsigned long random;
	memcpy(&random, S.stateBytes, sizeof(unsigned long));
	if (pRandom) *pRandom = (unsigned long)(((float)random / ULONG_MAX) *  highBound);

	return status;
}

int LUTRndGen::getRandomFromInterval(unsigned char highBound, unsigned char* pRandom) {
	int     status = STAT_OK;
	unsigned long rand = 0;

	status = getRandomFromInterval(highBound, &rand);
	*pRandom = (unsigned char)rand;

	return status;
}

int LUTRndGen::getRandomFromInterval(unsigned int highBound, unsigned int* pRandom) {
	int     status = STAT_OK;
	unsigned long rand = 0;

	status = getRandomFromInterval(highBound, &rand);
	*pRandom = (unsigned int)rand;

	return status;
}

int LUTRndGen::getRandomFromInterval(int highBound, int* pRandom) {
	int status = STAT_OK;

	// UPDATE ACCUMULATOR
	status = UpdateAccumulator();

	// GET FIRST 2 bytes FROM ACCUMULATOR
	int random;
	memcpy(&random, S.stateBytes, sizeof(int));
	// SUPRESS NEGATIVE VALUES
	random = abs(random);
	if (pRandom) *pRandom = (int)(((float)random / INT_MAX) *  highBound);

	return status;
}

int LUTRndGen::getRandomFromInterval(float highBound, float *pRandom) {
	int status = STAT_OK;

	// UPDATE ACCUMULATOR
	status = UpdateAccumulator();

	// GET FIRST 2 bytes FROM ACCUMULATOR
	unsigned long random;
	memcpy(&random, S.stateBytes, sizeof(unsigned long));
	if (pRandom) *pRandom = (float)(((float)random / ULONG_MAX) *  highBound);

	return status;
}

int LUTRndGen::UpdateAccumulator() {

	LUTUpdate(&S);
	return STAT_OK;
}

int LUTRndGen::discartValue() {
	return UpdateAccumulator();
}


void LUTRndGen::setLevelOfRandomness(int HW) {
	m_LevelOfRandomness = HW;
}

string LUTRndGen::shortDescription() const {
	string mes = "lut generetor ";
	stringstream out;
	out << m_LevelOfRandomness;
	mes += out.str();
	mes += "of ones";
	return mes;
}

TiXmlNode* LUTRndGen::exportGenerator() const {
	TiXmlElement* pRoot = new TiXmlElement("generator");
	pRoot->SetAttribute("type", CommonFnc::toString(m_type).c_str());
	pRoot->SetAttribute("description", shortDescription().c_str());

	TiXmlElement* levelOfRandomness = new TiXmlElement("level_of_randomness");
	stringstream slevelOfRandomness;
	slevelOfRandomness << m_LevelOfRandomness;
	levelOfRandomness->LinkEndChild(new TiXmlText(slevelOfRandomness.str().c_str()));
	pRoot->LinkEndChild(levelOfRandomness);

	TiXmlElement* originalSeed = new TiXmlElement("original_seed");
	stringstream sSeed;
	sSeed << m_seed;
	originalSeed->LinkEndChild(new TiXmlText(sSeed.str().c_str()));
	pRoot->LinkEndChild(originalSeed);
	
	TiXmlElement* accumulatorState = new TiXmlElement("accumulator_state");
	accumulatorState->SetAttribute("length", LUT_STATE_LENGTH);
	stringstream sAccValue;
	sAccValue << left << dec;
	for (unsigned char i = 0; i < LUT_STATE_LENGTH; i++) {
		sAccValue << (unsigned char)S.stateBytes[i] << " ";
	}
	accumulatorState->LinkEndChild(new TiXmlText(sAccValue.str().c_str()));
	
	pRoot->LinkEndChild(accumulatorState);
	
	return pRoot;
}
