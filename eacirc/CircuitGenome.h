#ifndef CIRCUIT_GENOME_H
#define CIRCUIT_GENOME_H

#include <GA1DArrayGenome.h>
#include "EACglobals.h"
#include <tinyxml.h>

/*
	INPUTS
	IN_SELECTOR_LAYER (full interconnection, up to circuit)	
	FUNCTION_LAYER_1 (functions)			

	CONNECTOR_LAYER_2 (number of connectors limited to SETTINGS_CIRCUIT::numConnectors)
	FUNCTION_LAYER_2			
	...
	CONNECTOR_LAYER_N  (number of connectors limited to SETTINGS_CIRCUIT::numConnectors)
	FUNCTION_LAYER_N			

	OUT_SELECTOR_LAYER (full interconnection)	
	OUTPUTS
*/

class CircuitGenome {
public:
    /** reads genome in binary fromat from string
      * genome parameters (number of layers, genome size, etc.) are taken from main settings
      * @param textCircuit  string to read circuit from
      * @param genome       read genome (contents overwritten)
      * @return status
      */
//    static int readGenomeFromBinary(string textCircuit, GA1DArrayGenome<GENOME_ITEM_TYPE>* genome);
    static int readGenomeFromText(string textCircuit, GA1DArrayGenome<GENOME_ITEM_TYPE>* genome);

    static int PrintCircuit(GAGenome &g, string filePath = "", unsigned char* usePredictorMask = NULL, int bPruneCircuit = FALSE);
    static int PrintCircuitMemory(GAGenome &g, string filePath = "", unsigned char* usePredictorMask = NULL, int bPruneCircuit = FALSE);
    static int PrintCircuitMemory_DOT(GAGenome &g, string filePath, unsigned char* displayNodes);
//    static int PrintCircuitMemory_TXT(GAGenome &g, string filePath, unsigned char* displayNodes);
//    static int PrintCircuitMemory_C(GAGenome &g, string filePath, unsigned char* displayNodes);

    static int GetFunctionLabel(GENOME_ITEM_TYPE functionID, GENOME_ITEM_TYPE connections, string* pLabel);
	static int PruneCircuit(GAGenome &g, GAGenome &prunnedG);
	static int PruneCircuitNew(GAGenome &g, GAGenome &prunnedG);
    static int GetUsedNodes(GAGenome &g, unsigned char* usePredictorMask, unsigned char displayNodes[]);
    static int HasConnection(GENOME_ITEM_TYPE functionID, GENOME_ITEM_TYPE connectionMask, int fncSlot, int connectionOffset, int bit);
    static int FilterEffectiveConnections(GENOME_ITEM_TYPE functionID, GENOME_ITEM_TYPE connectionMask, int numLayerConnectors, GENOME_ITEM_TYPE* pEffectiveConnectionMask);
	
	//static int HasImplicitConnection(GENOM_ITEM_TYPE functionID);
    static int IsOperand(GENOME_ITEM_TYPE functionID, GENOME_ITEM_TYPE connectionMask, int fncSlot, int connectionOffset, int bit, string* pOperand);
    static int GetNeutralValue(GENOME_ITEM_TYPE functionID, string* pOperand);
//    static void executeCircuit(GA1DArrayGenome<GENOME_ITEM_TYPE>* pGenome, unsigned char* inputs, unsigned char* outputs);

    /** saves genome to string in binary format
      * @param genome       genome to print
      * @param textCircuit  printed genome (original contents overwritten)
      * @return status
      */
//    static int writeGenome(const GA1DArrayGenome<GENOME_ITEM_TYPE>& genome, string& textCircuit);

    /** allocate XML structure for header in population file
      * @param populationSize       size of the population (info in the header)
      * @return pointer to root element "eacirc_population"
      */
//    static TiXmlElement* populationHeader(int populationSize);

public:
    /** saves circuit as generation with size 1
      * - CAREFUL: code duplicity with Eacirc.cpp!
      * @param genome       genome to save
      * @param filemane     destination filename
      * @return status
      */
//    static int saveCircuitAsPopulation(const GA1DArrayGenome<GENOME_ITEM_TYPE> &genome, const string filename);

/*
    static unsigned char GET_FNC_TYPE(GENOME_ITEM_TYPE fncValue) {
		return fncValue & 0xff;
	}
    static unsigned char GET_FNC_ARGUMENT1(GENOME_ITEM_TYPE fncValue) {
		return ((fncValue & 0xff000000) >> 24)  & 0xff;
	}
    static void SET_FNC_TYPE(GENOME_ITEM_TYPE* fncValue, unsigned char fncType) {
		*fncValue = *fncValue & 0xffffffff00;
		*fncValue |= fncType;
	}
    static void SET_FNC_ARGUMENT1(GENOME_ITEM_TYPE* fncValue, unsigned char arg1) {
		*fncValue = *fncValue & 0x00ffffffff;
		*fncValue |= arg1 << 24;
	}
    */

    /** Converts relative connector mask into absolute one (relative centers on slot, absolute directly address inputs) 
      * @param relativeMask mask with relative connectors
      * @param slot			current slot to which relative connectors are applied
	  * @param numLayerConnectors	number of effective layer connectors assumed (= number of bits from mask intepreted as connectors)
	  * @param numLayerInputs		number of inputs to current layer
	  * @param pAbsoluteMask		return argument for converted absolute mask
      * @return nothing
      */
    static void convertRelative2AbsolutConnectorMask(GENOME_ITEM_TYPE relativeMask, int slot, int numLayerConnectors, int numLayerInputs, GENOME_ITEM_TYPE* pAbsoluteMask) {
		int	halfConnectors = (numLayerConnectors - 1) / 2;
		int connectOffset = slot - halfConnectors;	// connectors are relative, centered on current slot
		int stopBit = numLayerConnectors;
		*pAbsoluteMask = 0;
        for (int bit = 0; bit < stopBit; bit++) {
            if (relativeMask & (GENOME_ITEM_TYPE) pGlobals->precompPow[bit]) {
				int targetSlot = getTargetSlot(connectOffset, bit, numLayerInputs);
				*pAbsoluteMask += pGlobals->precompPow[targetSlot];
            }
        }
	}
	static int getTargetSlot(int connectOffset, int bit, int numLayerInputs) {
		int targetSlot = connectOffset + bit;
		if (connectOffset + bit < 0) targetSlot = numLayerInputs + connectOffset + bit;
		if (connectOffset + bit >= numLayerInputs) targetSlot = connectOffset + bit - numLayerInputs;
		assert(targetSlot >= 0 && targetSlot < numLayerInputs);

		return targetSlot;
	}

};
#endif
