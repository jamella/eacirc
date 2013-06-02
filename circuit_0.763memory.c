int headerCircuit_inputLayerSize = 19;
int headerCircuit_outputLayerSize = 5;

static void circuit(unsigned char inputs[64], unsigned char outputs[2]) {
    const int SECTOR_SIZE = 16;
    const int NUM_SECTORS = 4;

    unsigned char VAR_IN_0 = 0;
    unsigned char VAR_IN_1 = 0;
    unsigned char VAR_IN_2 = 0;
    unsigned char VAR_IN_3 = 0;
    unsigned char VAR_IN_4 = 0;
    unsigned char VAR_IN_5 = 0;
    unsigned char VAR_IN_6 = 0;
    unsigned char VAR_IN_7 = 0;
    unsigned char VAR_IN_8 = 0;
    unsigned char VAR_IN_9 = 0;
    unsigned char VAR_IN_10 = 0;
    unsigned char VAR_IN_11 = 0;
    unsigned char VAR_IN_12 = 0;
    unsigned char VAR_IN_13 = 0;
    unsigned char VAR_IN_14 = 0;
    unsigned char VAR_IN_15 = 0;
    unsigned char VAR_IN_16 = 0;
    unsigned char VAR_IN_17 = 0;
    unsigned char VAR_IN_18 = 0;

    for (int sector = 0; sector < NUM_SECTORS; sector++) {
        VAR_IN_3 = inputs[sector * SECTOR_SIZE + 0];
        VAR_IN_4 = inputs[sector * SECTOR_SIZE + 1];
        VAR_IN_5 = inputs[sector * SECTOR_SIZE + 2];
        VAR_IN_6 = inputs[sector * SECTOR_SIZE + 3];
        VAR_IN_7 = inputs[sector * SECTOR_SIZE + 4];
        VAR_IN_8 = inputs[sector * SECTOR_SIZE + 5];
        VAR_IN_9 = inputs[sector * SECTOR_SIZE + 6];
        VAR_IN_10 = inputs[sector * SECTOR_SIZE + 7];
        VAR_IN_11 = inputs[sector * SECTOR_SIZE + 8];
        VAR_IN_12 = inputs[sector * SECTOR_SIZE + 9];
        VAR_IN_13 = inputs[sector * SECTOR_SIZE + 10];
        VAR_IN_14 = inputs[sector * SECTOR_SIZE + 11];
        VAR_IN_15 = inputs[sector * SECTOR_SIZE + 12];
        VAR_IN_16 = inputs[sector * SECTOR_SIZE + 13];
        VAR_IN_17 = inputs[sector * SECTOR_SIZE + 14];
        VAR_IN_18 = inputs[sector * SECTOR_SIZE + 15];

        unsigned char VAR_1_0_XOR = VAR_IN_0 ^ 0;
        unsigned char VAR_1_1_XOR = VAR_IN_1 ^ 0;
        unsigned char VAR_1_2_BSL_0 = VAR_IN_2  & 0 ;
        unsigned char VAR_1_3_XOR = VAR_IN_3 ^ 0;
        unsigned char VAR_1_4_XOR = VAR_IN_4 ^ 0;
        unsigned char VAR_1_5_XOR = VAR_IN_5 ^ 0;
        unsigned char VAR_1_6_XOR = VAR_IN_6 ^ 0;
        unsigned char VAR_1_7_XOR = VAR_IN_7 ^ 0;
        unsigned char VAR_1_8_ADD = VAR_IN_8 + 0;
        unsigned char VAR_1_9_XOR = VAR_IN_9 ^ 0;
        unsigned char VAR_1_10_XOR = VAR_IN_10 ^ 0;
        unsigned char VAR_1_11_XOR = VAR_IN_11 ^ 0;
        unsigned char VAR_1_12_XOR = VAR_IN_12 ^ 0;
        unsigned char VAR_1_13_XOR = VAR_IN_13 ^ 0;
        unsigned char VAR_1_14_XOR = VAR_IN_14 ^ 0;
        unsigned char VAR_1_15_ROR_0 = VAR_IN_15 >> 0 ;
        unsigned char VAR_1_16_XOR = VAR_IN_16 ^ 0;
        unsigned char VAR_1_17_XOR = VAR_IN_17 ^ 0;
        unsigned char VAR_1_18_XOR = VAR_IN_18 ^ 0;
        unsigned char VAR_1_19_XOR = VAR_IN_0 ^ 0;
        unsigned char VAR_2_0_ADD = VAR_1_19_XOR + VAR_1_0_XOR + VAR_1_2_BSL_0 + 0;
        unsigned char VAR_2_1_AND = VAR_1_0_XOR & VAR_1_1_XOR & VAR_1_2_BSL_0 & 0xff;
        unsigned char VAR_2_2_MUL = VAR_1_4_XOR * 1;
        unsigned char VAR_2_3_BSL_0 = VAR_1_2_BSL_0  & 0 ;
        unsigned char VAR_2_4_SUB = VAR_1_3_XOR - VAR_1_6_XOR - 0;
        unsigned char VAR_2_5_NOR = 0 | ~ VAR_1_5_XOR | ~ VAR_1_6_XOR | ~ 0xff;
        unsigned char VAR_2_6_DIV = ((VAR_1_5_XOR != 0) ? VAR_1_5_XOR : 1) / ((VAR_1_7_XOR != 0) ? VAR_1_7_XOR : 1) / 1;
        unsigned char VAR_2_7_XOR = VAR_1_6_XOR ^ VAR_1_9_XOR ^ 0;
        unsigned char VAR_2_8_ROL_0 = VAR_1_7_XOR << 0 ;
        unsigned char VAR_2_9_ROL_0 = VAR_1_9_XOR << 0 ;
        unsigned char VAR_2_10_NOP = VAR_1_9_XOR  ;
        unsigned char VAR_2_11_BSL_0 = VAR_1_10_XOR  & 0 ;
        unsigned char VAR_2_12_BSL_0 = VAR_1_11_XOR  & 0 ;
        unsigned char VAR_2_13_DIV = ((VAR_1_12_XOR != 0) ? VAR_1_12_XOR : 1) / ((VAR_1_14_XOR != 0) ? VAR_1_14_XOR : 1) / 1;
        unsigned char VAR_2_14_NOR = 0 | ~ VAR_1_16_XOR | ~ 0xff;
        unsigned char VAR_2_15_SUM = VAR_1_14_XOR + VAR_1_15_ROR_0 + VAR_1_16_XOR + 0;
        unsigned char VAR_2_16_NOP = VAR_1_16_XOR  ;
        unsigned char VAR_2_17_SUM = VAR_1_16_XOR + 0;
        unsigned char VAR_2_18_XOR = VAR_1_17_XOR ^ VAR_1_19_XOR ^ 0;
        unsigned char VAR_2_19_MUL = VAR_1_18_XOR * VAR_1_19_XOR * VAR_1_0_XOR * 1;
        unsigned char VAR_3_0_ROL_0 = VAR_2_19_MUL << 0 ;
        unsigned char VAR_3_1_SUB = VAR_2_2_MUL - 0;
        unsigned char VAR_3_2_ADD = VAR_2_1_AND + VAR_2_2_MUL + VAR_2_3_BSL_0 + 0;
        unsigned char VAR_3_3_AND = VAR_2_5_NOR & 0xff;
        unsigned char VAR_3_4_OR_ = VAR_2_3_BSL_0 | VAR_2_4_SUB | VAR_2_6_DIV | 0;
        unsigned char VAR_3_5_DIV = 0;
        unsigned char VAR_3_6_ADD = VAR_2_5_NOR + VAR_2_8_ROL_0 + 0;
        unsigned char VAR_3_7_DIV = ((VAR_2_7_XOR != 0) ? VAR_2_7_XOR : 1) / ((VAR_2_8_ROL_0 != 0) ? VAR_2_8_ROL_0 : 1) / ((VAR_2_9_ROL_0 != 0) ? VAR_2_9_ROL_0 : 1) / 1;
        unsigned char VAR_3_8_ADD = VAR_2_8_ROL_0 + VAR_2_9_ROL_0 + 0;
        unsigned char VAR_3_9_AND = VAR_2_8_ROL_0 & VAR_2_10_NOP & VAR_2_11_BSL_0 & 0xff;
        unsigned char VAR_3_10_SUM = VAR_2_9_ROL_0 + VAR_2_10_NOP + VAR_2_11_BSL_0 + 0;
        unsigned char VAR_3_11_ROR_0 = 0;
        unsigned char VAR_3_12_SUB = VAR_2_12_BSL_0 - VAR_2_13_DIV - 0;
        unsigned char VAR_3_13_SUB = VAR_2_14_NOR - VAR_2_15_SUM - 0;
        unsigned char VAR_3_14_AND = VAR_2_15_SUM & VAR_2_16_NOP & 0xff;
        unsigned char VAR_3_15_ROR_0 = VAR_2_14_NOR >> 0 ;
        unsigned char VAR_3_16_AND = VAR_2_15_SUM & VAR_2_17_SUM & 0xff;
        unsigned char VAR_3_17_MUL = VAR_2_16_NOP * 1;
        unsigned char VAR_3_18_AND = VAR_2_19_MUL & VAR_2_0_ADD & 0xff;
        unsigned char VAR_3_19_CONST_0 = 0 ;
        unsigned char VAR_4_0_MUL = VAR_3_19_CONST_0 * VAR_3_2_ADD * 1;
        unsigned char VAR_4_1_BSL_0 = VAR_3_0_ROL_0  & 0 ;
        unsigned char VAR_4_2_AND = VAR_3_1_SUB & VAR_3_2_ADD & VAR_3_4_OR_ & 0xff;
        unsigned char VAR_4_3_ROR_4 = VAR_3_3_AND >> 4 ;
        unsigned char VAR_4_4_NOR = 0 | ~ VAR_3_5_DIV | ~ VAR_3_6_ADD | ~ 0xff;
        unsigned char VAR_4_5_ROL_0 = VAR_3_4_OR_ << 0 ;
        unsigned char VAR_4_6_MUL = VAR_3_6_ADD * VAR_3_8_ADD * 1;
        unsigned char VAR_4_7_ADD = VAR_3_8_ADD + VAR_3_9_AND + 0;
        unsigned char VAR_4_8_MUL = VAR_3_7_DIV * VAR_3_8_ADD * VAR_3_9_AND * 1;
        unsigned char VAR_4_9_AND = VAR_3_9_AND & VAR_3_10_SUM & VAR_3_11_ROR_0 & 0xff;
        unsigned char VAR_4_10_SUB = VAR_3_9_AND - VAR_3_11_ROR_0 - 0;
        unsigned char VAR_4_11_NOP = VAR_3_12_SUB  ;
        unsigned char VAR_4_12_MUL = VAR_3_12_SUB * VAR_3_14_AND * 1;
        unsigned char VAR_4_13_ROL_0 = VAR_3_12_SUB << 0 ;
        unsigned char VAR_4_14_BSL_0 = VAR_3_13_SUB  & 0 ;
        unsigned char VAR_4_15_NOP = VAR_3_14_AND  ;
        unsigned char VAR_4_16_SUB = VAR_3_16_AND - VAR_3_18_AND - 0;
        unsigned char VAR_4_17_ROL_0 = VAR_3_17_MUL << 0 ;
        unsigned char VAR_4_18_BSL_4 = VAR_3_17_MUL  & 228 ;
        unsigned char VAR_4_19_SUB = VAR_3_1_SUB - 0;
        unsigned char VAR_5_0_DIV = ((VAR_4_11_NOP != 0) ? VAR_4_11_NOP : 1) / ((VAR_4_14_BSL_0 != 0) ? VAR_4_14_BSL_0 : 1) / 1;
        unsigned char VAR_5_1_NOR = 0 | ~ VAR_4_14_BSL_0 | ~ VAR_4_15_NOP | ~ 0xff;
        unsigned char VAR_5_2_SUM = VAR_4_13_ROL_0 + VAR_4_14_BSL_0 + 0;
        unsigned char VAR_5_3_SUM = VAR_4_15_NOP + VAR_4_16_SUB + VAR_4_17_ROL_0 + 0;
        unsigned char VAR_5_4_ADD = VAR_4_17_ROL_0 + 0;

        VAR_IN_0 = VAR_5_0_DIV;
        VAR_IN_1 = VAR_5_1_NOR;
        VAR_IN_2 = VAR_5_2_SUM;
        outputs[0] = VAR_5_3_SUM;
        outputs[1] = VAR_5_4_ADD;
    }

}