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

        unsigned char VAR_1_0_CONST_189 = 189 ;
        unsigned char VAR_1_1_XOR = VAR_IN_1 ^ 0;
        unsigned char VAR_1_2_DIV = ((VAR_IN_2 != 0) ? VAR_IN_2 : 1) / ((VAR_IN_4 != 0) ? VAR_IN_4 : 1) / ((VAR_IN_7 != 0) ? VAR_IN_7 : 1) / ((VAR_IN_10 != 0) ? VAR_IN_10 : 1) / 1;
        unsigned char VAR_1_3_XOR = VAR_IN_3 ^ 0;
        unsigned char VAR_1_4_NOR = 0 | ~ VAR_IN_4 | ~ VAR_IN_6 | ~ VAR_IN_12 | ~ 0xff;
        unsigned char VAR_1_5_MUL = VAR_IN_15 * VAR_IN_17 * VAR_IN_5 * VAR_IN_10 * 1;
        unsigned char VAR_1_6_CONST_0 = 0 ;
        unsigned char VAR_1_7_XOR = VAR_IN_18 ^ VAR_IN_0 ^ VAR_IN_7 ^ 0;
        unsigned char VAR_1_8_CONST_95 = 95 ;
        unsigned char VAR_1_9_NOP = VAR_IN_9  ;
        unsigned char VAR_1_10_NOR = 0 | ~ VAR_IN_10 | ~ VAR_IN_18 | ~ 0xff;
        unsigned char VAR_1_11_SUB = VAR_IN_11 - 0;
        unsigned char VAR_1_12_BSL_7 = VAR_IN_12  & 191 ;
        unsigned char VAR_1_13_OR_ = VAR_IN_13 | VAR_IN_1 | 0;
        unsigned char VAR_1_14_OR_ = VAR_IN_6 | VAR_IN_14 | 0;
        unsigned char VAR_1_15_CONST_239 = 239 ;
        unsigned char VAR_1_16_MUL = VAR_IN_16 * VAR_IN_18 * 1;
        unsigned char VAR_1_17_OR_ = VAR_IN_13 | VAR_IN_14 | VAR_IN_17 | VAR_IN_7 | 0;
        unsigned char VAR_1_18_MUL = VAR_IN_18 * VAR_IN_3 * VAR_IN_8 * 1;
        unsigned char VAR_1_19_DIV = ((VAR_IN_0 != 0) ? VAR_IN_0 : 1) / 1;
        unsigned char VAR_2_0_CONST_126 = 126 ;
        unsigned char VAR_2_1_OR_ = VAR_1_1_XOR | VAR_1_3_XOR | 0;
        unsigned char VAR_2_2_ROL_0 = 0;
        unsigned char VAR_2_3_NAN = 0xff & ~  VAR_1_3_XOR & ~ VAR_1_5_MUL & ~ 0;
        unsigned char VAR_2_4_NOR = 0 | ~ VAR_1_5_MUL | ~ 0xff;
        unsigned char VAR_2_5_ROL_0 = VAR_1_4_NOR << 0 ;
        unsigned char VAR_2_6_NOP = VAR_1_7_XOR  ;
        unsigned char VAR_2_7_BSL_5 = VAR_1_8_CONST_95  & 173 ;
        unsigned char VAR_2_8_NAN = 0xff & ~  VAR_1_7_XOR & ~ VAR_1_9_NOP & ~ VAR_1_10_NOR & ~ 0;
        unsigned char VAR_2_9_OR_ = VAR_1_8_CONST_95 | VAR_1_10_NOR | 0;
        unsigned char VAR_2_10_NAN = 0xff & ~  VAR_1_9_NOP & ~ VAR_1_10_NOR & ~ 0;
        unsigned char VAR_2_11_SUM = VAR_1_11_SUB + 0;
        unsigned char VAR_2_12_ADD = VAR_1_11_SUB + VAR_1_12_BSL_7 + VAR_1_13_OR_ + 0;
        unsigned char VAR_2_13_NAN = 0xff & ~  VAR_1_13_OR_ & ~ 0;
        unsigned char VAR_2_14_SUB = VAR_1_13_OR_ - VAR_1_15_CONST_239 - VAR_1_16_MUL - 0;
        unsigned char VAR_2_15_CONST_215 = 215 ;
        unsigned char VAR_2_16_OR_ = VAR_1_15_CONST_239 | VAR_1_16_MUL | VAR_1_17_OR_ | VAR_1_18_MUL | 0;
        unsigned char VAR_2_17_MUL = VAR_1_16_MUL * VAR_1_17_OR_ * VAR_1_19_DIV * 1;
        unsigned char VAR_2_18_ROL_0 = VAR_1_17_OR_ << 0 ;
        unsigned char VAR_2_19_BSL_3 = VAR_1_18_MUL  & 251 ;
        unsigned char VAR_3_0_NAN = 0xff & ~  VAR_2_1_OR_ & ~ 0;
        unsigned char VAR_3_1_ROR_0 = VAR_2_1_OR_ >> 0 ;
        unsigned char VAR_3_2_NOP = VAR_2_4_NOR  ;
        unsigned char VAR_3_3_NOR = 0 | ~ VAR_2_2_ROL_0 | ~ 0xff;
        unsigned char VAR_3_4_NAN = 0xff & ~  VAR_2_6_NOP & ~ 0;
        unsigned char VAR_3_5_ROL_7 = VAR_2_7_BSL_5 << 7 ;
        unsigned char VAR_3_6_NAN = 0xff & ~  VAR_2_5_ROL_0 & ~ VAR_2_7_BSL_5 & ~ 0;
        unsigned char VAR_3_7_SUB = VAR_2_6_NOP - VAR_2_7_BSL_5 - VAR_2_8_NAN - VAR_2_9_OR_ - 0;
        unsigned char VAR_3_8_SUM = VAR_2_10_NAN + 0;
        unsigned char VAR_3_9_XOR = VAR_2_8_NAN ^ VAR_2_9_OR_ ^ 0;
        unsigned char VAR_3_10_NOP = VAR_2_9_OR_  ;
        unsigned char VAR_3_11_XOR = VAR_2_11_SUM ^ 0;
        unsigned char VAR_3_12_MUL = VAR_2_12_ADD * 1;
        unsigned char VAR_3_13_SUM = VAR_2_12_ADD + VAR_2_14_SUB + 0;
        unsigned char VAR_3_14_ADD = VAR_2_15_CONST_215 + VAR_2_16_OR_ + 0;
        unsigned char VAR_3_15_OR_ = VAR_2_17_MUL | 0;
        unsigned char VAR_3_16_MUL = VAR_2_17_MUL * VAR_2_18_ROL_0 * 1;
        unsigned char VAR_3_17_ROL_1 = VAR_2_16_OR_ << 1 ;
        unsigned char VAR_3_18_ROL_3 = VAR_2_17_MUL << 3 ;
        unsigned char VAR_3_19_ROL_0 = VAR_2_18_ROL_0 << 0 ;
        unsigned char VAR_4_0_DIV = ((VAR_3_0_NAN != 0) ? VAR_3_0_NAN : 1) / ((VAR_3_1_ROR_0 != 0) ? VAR_3_1_ROR_0 : 1) / ((VAR_3_2_NOP != 0) ? VAR_3_2_NOP : 1) / 1;
        unsigned char VAR_4_1_ROL_3 = VAR_3_3_NOR << 3 ;
        unsigned char VAR_4_2_CONST_0 = 0 ;
        unsigned char VAR_4_3_ROR_7 = VAR_3_4_NAN >> 7 ;
        unsigned char VAR_4_4_DIV = ((VAR_3_3_NOR != 0) ? VAR_3_3_NOR : 1) / ((VAR_3_5_ROL_7 != 0) ? VAR_3_5_ROL_7 : 1) / 1;
        unsigned char VAR_4_5_OR_ = VAR_3_4_NAN | VAR_3_5_ROL_7 | VAR_3_6_NAN | VAR_3_7_SUB | 0;
        unsigned char VAR_4_6_NOP = VAR_3_5_ROL_7  ;
        unsigned char VAR_4_7_DIV = ((VAR_3_6_NAN != 0) ? VAR_3_6_NAN : 1) / ((VAR_3_7_SUB != 0) ? VAR_3_7_SUB : 1) / ((VAR_3_8_SUM != 0) ? VAR_3_8_SUM : 1) / ((VAR_3_9_XOR != 0) ? VAR_3_9_XOR : 1) / 1;
        unsigned char VAR_4_8_NAN = 0xff & ~  VAR_3_7_SUB & ~ VAR_3_9_XOR & ~ 0;
        unsigned char VAR_4_9_ADD = VAR_3_11_XOR + 0;
        unsigned char VAR_4_10_MUL = VAR_3_9_XOR * VAR_3_11_XOR * VAR_3_12_MUL * 1;
        unsigned char VAR_4_11_SUM = VAR_3_12_MUL + 0;
        unsigned char VAR_4_12_CONST_178 = 178 ;
        unsigned char VAR_4_13_NOR = 0 | ~ VAR_3_12_MUL | ~ VAR_3_13_SUM | ~ 0xff;
        unsigned char VAR_4_14_NOP = VAR_3_13_SUM  ;
        unsigned char VAR_4_15_OR_ = VAR_3_16_MUL | VAR_3_17_ROL_1 | 0;
        unsigned char VAR_4_16_NOR = 0 | ~ VAR_3_16_MUL | ~ 0xff;
        unsigned char VAR_4_17_CONST_119 = 119 ;
        unsigned char VAR_4_18_AND = VAR_3_17_ROL_1 & 0xff;
        unsigned char VAR_4_19_ROL_5 = VAR_3_19_ROL_0 << 5 ;
        unsigned char VAR_5_0_NOR = 0 | ~ VAR_4_11_SUM | ~ VAR_4_13_NOR | ~ VAR_4_14_NOP | ~ VAR_4_6_NOP | ~ 0xff;
        unsigned char VAR_5_1_ROL_6 = VAR_4_13_NOR << 6 ;
        unsigned char VAR_5_2_MUL = VAR_4_15_OR_ * VAR_4_18_AND * 1;
        unsigned char VAR_5_3_DIV = ((VAR_4_15_OR_ != 0) ? VAR_4_15_OR_ : 1) / 1;
        unsigned char VAR_5_4_SUM = VAR_4_18_AND + VAR_4_12_CONST_178 + 0;

        VAR_IN_0 = VAR_5_0_NOR;
        VAR_IN_1 = VAR_5_1_ROL_6;
        VAR_IN_2 = VAR_5_2_MUL;
        outputs[0] = VAR_5_3_DIV;
        outputs[1] = VAR_5_4_SUM;
    }

}