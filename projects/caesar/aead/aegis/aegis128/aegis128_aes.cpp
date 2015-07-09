namespace Aegis128_raw {

typedef unsigned int U32;

unsigned char TE0[1024] = {
0xc6,0x63,0x63,0xa5,  0xf8,0x7c,0x7c,0x84,  0xee,0x77,0x77,0x99,  0xf6,0x7b,0x7b,0x8d,
0xff,0xf2,0xf2,0xd,   0xd6,0x6b,0x6b,0xbd,  0xde,0x6f,0x6f,0xb1,  0x91,0xc5,0xc5,0x54,
0x60,0x30,0x30,0x50,  0x2,0x1,0x1,0x3,      0xce,0x67,0x67,0xa9,  0x56,0x2b,0x2b,0x7d,
0xe7,0xfe,0xfe,0x19,  0xb5,0xd7,0xd7,0x62,  0x4d,0xab,0xab,0xe6,  0xec,0x76,0x76,0x9a,
0x8f,0xca,0xca,0x45,  0x1f,0x82,0x82,0x9d,  0x89,0xc9,0xc9,0x40,  0xfa,0x7d,0x7d,0x87,
0xef,0xfa,0xfa,0x15,  0xb2,0x59,0x59,0xeb,  0x8e,0x47,0x47,0xc9,  0xfb,0xf0,0xf0,0xb,
0x41,0xad,0xad,0xec,  0xb3,0xd4,0xd4,0x67,  0x5f,0xa2,0xa2,0xfd,  0x45,0xaf,0xaf,0xea,
0x23,0x9c,0x9c,0xbf,  0x53,0xa4,0xa4,0xf7,  0xe4,0x72,0x72,0x96,  0x9b,0xc0,0xc0,0x5b,
0x75,0xb7,0xb7,0xc2,  0xe1,0xfd,0xfd,0x1c,  0x3d,0x93,0x93,0xae,  0x4c,0x26,0x26,0x6a,
0x6c,0x36,0x36,0x5a,  0x7e,0x3f,0x3f,0x41,  0xf5,0xf7,0xf7,0x2,   0x83,0xcc,0xcc,0x4f,
0x68,0x34,0x34,0x5c,  0x51,0xa5,0xa5,0xf4,  0xd1,0xe5,0xe5,0x34,  0xf9,0xf1,0xf1,0x8,
0xe2,0x71,0x71,0x93,  0xab,0xd8,0xd8,0x73,  0x62,0x31,0x31,0x53,  0x2a,0x15,0x15,0x3f,
0x8,0x4,0x4,0xc,      0x95,0xc7,0xc7,0x52,  0x46,0x23,0x23,0x65,  0x9d,0xc3,0xc3,0x5e,
0x30,0x18,0x18,0x28,  0x37,0x96,0x96,0xa1,  0xa,0x5,0x5,0xf,      0x2f,0x9a,0x9a,0xb5,
0xe,0x7,0x7,0x9,      0x24,0x12,0x12,0x36,  0x1b,0x80,0x80,0x9b,  0xdf,0xe2,0xe2,0x3d,
0xcd,0xeb,0xeb,0x26,  0x4e,0x27,0x27,0x69,  0x7f,0xb2,0xb2,0xcd,  0xea,0x75,0x75,0x9f,
0x12,0x9,0x9,0x1b,    0x1d,0x83,0x83,0x9e,  0x58,0x2c,0x2c,0x74,  0x34,0x1a,0x1a,0x2e,
0x36,0x1b,0x1b,0x2d,  0xdc,0x6e,0x6e,0xb2,  0xb4,0x5a,0x5a,0xee,  0x5b,0xa0,0xa0,0xfb,
0xa4,0x52,0x52,0xf6,  0x76,0x3b,0x3b,0x4d,  0xb7,0xd6,0xd6,0x61,  0x7d,0xb3,0xb3,0xce,
0x52,0x29,0x29,0x7b,  0xdd,0xe3,0xe3,0x3e,  0x5e,0x2f,0x2f,0x71,  0x13,0x84,0x84,0x97,
0xa6,0x53,0x53,0xf5,  0xb9,0xd1,0xd1,0x68,  0x0,0x0,0x0,0x0,      0xc1,0xed,0xed,0x2c,
0x40,0x20,0x20,0x60,  0xe3,0xfc,0xfc,0x1f,  0x79,0xb1,0xb1,0xc8,  0xb6,0x5b,0x5b,0xed,
0xd4,0x6a,0x6a,0xbe,  0x8d,0xcb,0xcb,0x46,  0x67,0xbe,0xbe,0xd9,  0x72,0x39,0x39,0x4b,
0x94,0x4a,0x4a,0xde,  0x98,0x4c,0x4c,0xd4,  0xb0,0x58,0x58,0xe8,  0x85,0xcf,0xcf,0x4a,
0xbb,0xd0,0xd0,0x6b,  0xc5,0xef,0xef,0x2a,  0x4f,0xaa,0xaa,0xe5,  0xed,0xfb,0xfb,0x16,
0x86,0x43,0x43,0xc5,  0x9a,0x4d,0x4d,0xd7,  0x66,0x33,0x33,0x55,  0x11,0x85,0x85,0x94,
0x8a,0x45,0x45,0xcf,  0xe9,0xf9,0xf9,0x10,  0x4,0x2,0x2,0x6,      0xfe,0x7f,0x7f,0x81,
0xa0,0x50,0x50,0xf0,  0x78,0x3c,0x3c,0x44,  0x25,0x9f,0x9f,0xba,  0x4b,0xa8,0xa8,0xe3,
0xa2,0x51,0x51,0xf3,  0x5d,0xa3,0xa3,0xfe,  0x80,0x40,0x40,0xc0,  0x5,0x8f,0x8f,0x8a,
0x3f,0x92,0x92,0xad,  0x21,0x9d,0x9d,0xbc,  0x70,0x38,0x38,0x48,  0xf1,0xf5,0xf5,0x4,
0x63,0xbc,0xbc,0xdf,  0x77,0xb6,0xb6,0xc1,  0xaf,0xda,0xda,0x75,  0x42,0x21,0x21,0x63,
0x20,0x10,0x10,0x30,  0xe5,0xff,0xff,0x1a,  0xfd,0xf3,0xf3,0xe,   0xbf,0xd2,0xd2,0x6d,
0x81,0xcd,0xcd,0x4c,  0x18,0xc,0xc,0x14,    0x26,0x13,0x13,0x35,  0xc3,0xec,0xec,0x2f,
0xbe,0x5f,0x5f,0xe1,  0x35,0x97,0x97,0xa2,  0x88,0x44,0x44,0xcc,  0x2e,0x17,0x17,0x39,
0x93,0xc4,0xc4,0x57,  0x55,0xa7,0xa7,0xf2,  0xfc,0x7e,0x7e,0x82,  0x7a,0x3d,0x3d,0x47,
0xc8,0x64,0x64,0xac,  0xba,0x5d,0x5d,0xe7,  0x32,0x19,0x19,0x2b,  0xe6,0x73,0x73,0x95,
0xc0,0x60,0x60,0xa0,  0x19,0x81,0x81,0x98,  0x9e,0x4f,0x4f,0xd1,  0xa3,0xdc,0xdc,0x7f,
0x44,0x22,0x22,0x66,  0x54,0x2a,0x2a,0x7e,  0x3b,0x90,0x90,0xab,  0xb,0x88,0x88,0x83,
0x8c,0x46,0x46,0xca,  0xc7,0xee,0xee,0x29,  0x6b,0xb8,0xb8,0xd3,  0x28,0x14,0x14,0x3c,
0xa7,0xde,0xde,0x79,  0xbc,0x5e,0x5e,0xe2,  0x16,0xb,0xb,0x1d,    0xad,0xdb,0xdb,0x76,
0xdb,0xe0,0xe0,0x3b,  0x64,0x32,0x32,0x56,  0x74,0x3a,0x3a,0x4e,  0x14,0xa,0xa,0x1e,
0x92,0x49,0x49,0xdb,  0xc,0x6,0x6,0xa,      0x48,0x24,0x24,0x6c,  0xb8,0x5c,0x5c,0xe4,
0x9f,0xc2,0xc2,0x5d,  0xbd,0xd3,0xd3,0x6e,  0x43,0xac,0xac,0xef,  0xc4,0x62,0x62,0xa6,
0x39,0x91,0x91,0xa8,  0x31,0x95,0x95,0xa4,  0xd3,0xe4,0xe4,0x37,  0xf2,0x79,0x79,0x8b,
0xd5,0xe7,0xe7,0x32,  0x8b,0xc8,0xc8,0x43,  0x6e,0x37,0x37,0x59,  0xda,0x6d,0x6d,0xb7,
0x1,0x8d,0x8d,0x8c,   0xb1,0xd5,0xd5,0x64,  0x9c,0x4e,0x4e,0xd2,  0x49,0xa9,0xa9,0xe0,
0xd8,0x6c,0x6c,0xb4,  0xac,0x56,0x56,0xfa,  0xf3,0xf4,0xf4,0x7,   0xcf,0xea,0xea,0x25,
0xca,0x65,0x65,0xaf,  0xf4,0x7a,0x7a,0x8e,  0x47,0xae,0xae,0xe9,  0x10,0x8,0x8,0x18,
0x6f,0xba,0xba,0xd5,  0xf0,0x78,0x78,0x88,  0x4a,0x25,0x25,0x6f,  0x5c,0x2e,0x2e,0x72,
0x38,0x1c,0x1c,0x24,  0x57,0xa6,0xa6,0xf1,  0x73,0xb4,0xb4,0xc7,  0x97,0xc6,0xc6,0x51,
0xcb,0xe8,0xe8,0x23,  0xa1,0xdd,0xdd,0x7c,  0xe8,0x74,0x74,0x9c,  0x3e,0x1f,0x1f,0x21,
0x96,0x4b,0x4b,0xdd,  0x61,0xbd,0xbd,0xdc,  0xd,0x8b,0x8b,0x86,   0xf,0x8a,0x8a,0x85,
0xe0,0x70,0x70,0x90,  0x7c,0x3e,0x3e,0x42,  0x71,0xb5,0xb5,0xc4,  0xcc,0x66,0x66,0xaa,
0x90,0x48,0x48,0xd8,  0x6,0x3,0x3,0x5,      0xf7,0xf6,0xf6,0x1,   0x1c,0xe,0xe,0x12,
0xc2,0x61,0x61,0xa3,  0x6a,0x35,0x35,0x5f,  0xae,0x57,0x57,0xf9,  0x69,0xb9,0xb9,0xd0,
0x17,0x86,0x86,0x91,  0x99,0xc1,0xc1,0x58,  0x3a,0x1d,0x1d,0x27,  0x27,0x9e,0x9e,0xb9,
0xd9,0xe1,0xe1,0x38,  0xeb,0xf8,0xf8,0x13,  0x2b,0x98,0x98,0xb3,  0x22,0x11,0x11,0x33,
0xd2,0x69,0x69,0xbb,  0xa9,0xd9,0xd9,0x70,  0x7,0x8e,0x8e,0x89,   0x33,0x94,0x94,0xa7,
0x2d,0x9b,0x9b,0xb6,  0x3c,0x1e,0x1e,0x22,  0x15,0x87,0x87,0x92,  0xc9,0xe9,0xe9,0x20,
0x87,0xce,0xce,0x49,  0xaa,0x55,0x55,0xff,  0x50,0x28,0x28,0x78,  0xa5,0xdf,0xdf,0x7a,
0x3,0x8c,0x8c,0x8f,   0x59,0xa1,0xa1,0xf8,  0x9,0x89,0x89,0x80,   0x1a,0xd,0xd,0x17,
0x65,0xbf,0xbf,0xda,  0xd7,0xe6,0xe6,0x31,  0x84,0x42,0x42,0xc6,  0xd0,0x68,0x68,0xb8,
0x82,0x41,0x41,0xc3,  0x29,0x99,0x99,0xb0,  0x5a,0x2d,0x2d,0x77,  0x1e,0xf,0xf,0x11,
0x7b,0xb0,0xb0,0xcb,  0xa8,0x54,0x54,0xfc,  0x6d,0xbb,0xbb,0xd6,  0x2c,0x16,0x16,0x3a};


unsigned char TE1[1024] = {
0xa5,0xc6,0x63,0x63,  0x84,0xf8,0x7c,0x7c,  0x99,0xee,0x77,0x77,  0x8d,0xf6,0x7b,0x7b,
0xd,0xff,0xf2,0xf2,   0xbd,0xd6,0x6b,0x6b,  0xb1,0xde,0x6f,0x6f,  0x54,0x91,0xc5,0xc5,
0x50,0x60,0x30,0x30,  0x3,0x2,0x1,0x1,      0xa9,0xce,0x67,0x67,  0x7d,0x56,0x2b,0x2b,
0x19,0xe7,0xfe,0xfe,  0x62,0xb5,0xd7,0xd7,  0xe6,0x4d,0xab,0xab,  0x9a,0xec,0x76,0x76,
0x45,0x8f,0xca,0xca,  0x9d,0x1f,0x82,0x82,  0x40,0x89,0xc9,0xc9,  0x87,0xfa,0x7d,0x7d,
0x15,0xef,0xfa,0xfa,  0xeb,0xb2,0x59,0x59,  0xc9,0x8e,0x47,0x47,  0xb,0xfb,0xf0,0xf0,
0xec,0x41,0xad,0xad,  0x67,0xb3,0xd4,0xd4,  0xfd,0x5f,0xa2,0xa2,  0xea,0x45,0xaf,0xaf,
0xbf,0x23,0x9c,0x9c,  0xf7,0x53,0xa4,0xa4,  0x96,0xe4,0x72,0x72,  0x5b,0x9b,0xc0,0xc0,
0xc2,0x75,0xb7,0xb7,  0x1c,0xe1,0xfd,0xfd,  0xae,0x3d,0x93,0x93,  0x6a,0x4c,0x26,0x26,
0x5a,0x6c,0x36,0x36,  0x41,0x7e,0x3f,0x3f,  0x2,0xf5,0xf7,0xf7,   0x4f,0x83,0xcc,0xcc,
0x5c,0x68,0x34,0x34,  0xf4,0x51,0xa5,0xa5,  0x34,0xd1,0xe5,0xe5,  0x8,0xf9,0xf1,0xf1,
0x93,0xe2,0x71,0x71,  0x73,0xab,0xd8,0xd8,  0x53,0x62,0x31,0x31,  0x3f,0x2a,0x15,0x15,
0xc,0x8,0x4,0x4,      0x52,0x95,0xc7,0xc7,  0x65,0x46,0x23,0x23,  0x5e,0x9d,0xc3,0xc3,
0x28,0x30,0x18,0x18,  0xa1,0x37,0x96,0x96,  0xf,0xa,0x5,0x5,      0xb5,0x2f,0x9a,0x9a,
0x9,0xe,0x7,0x7,      0x36,0x24,0x12,0x12,  0x9b,0x1b,0x80,0x80,  0x3d,0xdf,0xe2,0xe2,
0x26,0xcd,0xeb,0xeb,  0x69,0x4e,0x27,0x27,  0xcd,0x7f,0xb2,0xb2,  0x9f,0xea,0x75,0x75,
0x1b,0x12,0x9,0x9,    0x9e,0x1d,0x83,0x83,  0x74,0x58,0x2c,0x2c,  0x2e,0x34,0x1a,0x1a,
0x2d,0x36,0x1b,0x1b,  0xb2,0xdc,0x6e,0x6e,  0xee,0xb4,0x5a,0x5a,  0xfb,0x5b,0xa0,0xa0,
0xf6,0xa4,0x52,0x52,  0x4d,0x76,0x3b,0x3b,  0x61,0xb7,0xd6,0xd6,  0xce,0x7d,0xb3,0xb3,
0x7b,0x52,0x29,0x29,  0x3e,0xdd,0xe3,0xe3,  0x71,0x5e,0x2f,0x2f,  0x97,0x13,0x84,0x84,
0xf5,0xa6,0x53,0x53,  0x68,0xb9,0xd1,0xd1,  0x0,0x0,0x0,0x0,      0x2c,0xc1,0xed,0xed,
0x60,0x40,0x20,0x20,  0x1f,0xe3,0xfc,0xfc,  0xc8,0x79,0xb1,0xb1,  0xed,0xb6,0x5b,0x5b,
0xbe,0xd4,0x6a,0x6a,  0x46,0x8d,0xcb,0xcb,  0xd9,0x67,0xbe,0xbe,  0x4b,0x72,0x39,0x39,
0xde,0x94,0x4a,0x4a,  0xd4,0x98,0x4c,0x4c,  0xe8,0xb0,0x58,0x58,  0x4a,0x85,0xcf,0xcf,
0x6b,0xbb,0xd0,0xd0,  0x2a,0xc5,0xef,0xef,  0xe5,0x4f,0xaa,0xaa,  0x16,0xed,0xfb,0xfb,
0xc5,0x86,0x43,0x43,  0xd7,0x9a,0x4d,0x4d,  0x55,0x66,0x33,0x33,  0x94,0x11,0x85,0x85,
0xcf,0x8a,0x45,0x45,  0x10,0xe9,0xf9,0xf9,  0x6,0x4,0x2,0x2,      0x81,0xfe,0x7f,0x7f,
0xf0,0xa0,0x50,0x50,  0x44,0x78,0x3c,0x3c,  0xba,0x25,0x9f,0x9f,  0xe3,0x4b,0xa8,0xa8,
0xf3,0xa2,0x51,0x51,  0xfe,0x5d,0xa3,0xa3,  0xc0,0x80,0x40,0x40,  0x8a,0x5,0x8f,0x8f,
0xad,0x3f,0x92,0x92,  0xbc,0x21,0x9d,0x9d,  0x48,0x70,0x38,0x38,  0x4,0xf1,0xf5,0xf5,
0xdf,0x63,0xbc,0xbc,  0xc1,0x77,0xb6,0xb6,  0x75,0xaf,0xda,0xda,  0x63,0x42,0x21,0x21,
0x30,0x20,0x10,0x10,  0x1a,0xe5,0xff,0xff,  0xe,0xfd,0xf3,0xf3,   0x6d,0xbf,0xd2,0xd2,
0x4c,0x81,0xcd,0xcd,  0x14,0x18,0xc,0xc,    0x35,0x26,0x13,0x13,  0x2f,0xc3,0xec,0xec,
0xe1,0xbe,0x5f,0x5f,  0xa2,0x35,0x97,0x97,  0xcc,0x88,0x44,0x44,  0x39,0x2e,0x17,0x17,
0x57,0x93,0xc4,0xc4,  0xf2,0x55,0xa7,0xa7,  0x82,0xfc,0x7e,0x7e,  0x47,0x7a,0x3d,0x3d,
0xac,0xc8,0x64,0x64,  0xe7,0xba,0x5d,0x5d,  0x2b,0x32,0x19,0x19,  0x95,0xe6,0x73,0x73,
0xa0,0xc0,0x60,0x60,  0x98,0x19,0x81,0x81,  0xd1,0x9e,0x4f,0x4f,  0x7f,0xa3,0xdc,0xdc,
0x66,0x44,0x22,0x22,  0x7e,0x54,0x2a,0x2a,  0xab,0x3b,0x90,0x90,  0x83,0xb,0x88,0x88,
0xca,0x8c,0x46,0x46,  0x29,0xc7,0xee,0xee,  0xd3,0x6b,0xb8,0xb8,  0x3c,0x28,0x14,0x14,
0x79,0xa7,0xde,0xde,  0xe2,0xbc,0x5e,0x5e,  0x1d,0x16,0xb,0xb,    0x76,0xad,0xdb,0xdb,
0x3b,0xdb,0xe0,0xe0,  0x56,0x64,0x32,0x32,  0x4e,0x74,0x3a,0x3a,  0x1e,0x14,0xa,0xa,
0xdb,0x92,0x49,0x49,  0xa,0xc,0x6,0x6,      0x6c,0x48,0x24,0x24,  0xe4,0xb8,0x5c,0x5c,
0x5d,0x9f,0xc2,0xc2,  0x6e,0xbd,0xd3,0xd3,  0xef,0x43,0xac,0xac,  0xa6,0xc4,0x62,0x62,
0xa8,0x39,0x91,0x91,  0xa4,0x31,0x95,0x95,  0x37,0xd3,0xe4,0xe4,  0x8b,0xf2,0x79,0x79,
0x32,0xd5,0xe7,0xe7,  0x43,0x8b,0xc8,0xc8,  0x59,0x6e,0x37,0x37,  0xb7,0xda,0x6d,0x6d,
0x8c,0x1,0x8d,0x8d,   0x64,0xb1,0xd5,0xd5,  0xd2,0x9c,0x4e,0x4e,  0xe0,0x49,0xa9,0xa9,
0xb4,0xd8,0x6c,0x6c,  0xfa,0xac,0x56,0x56,  0x7,0xf3,0xf4,0xf4,   0x25,0xcf,0xea,0xea,
0xaf,0xca,0x65,0x65,  0x8e,0xf4,0x7a,0x7a,  0xe9,0x47,0xae,0xae,  0x18,0x10,0x8,0x8,
0xd5,0x6f,0xba,0xba,  0x88,0xf0,0x78,0x78,  0x6f,0x4a,0x25,0x25,  0x72,0x5c,0x2e,0x2e,
0x24,0x38,0x1c,0x1c,  0xf1,0x57,0xa6,0xa6,  0xc7,0x73,0xb4,0xb4,  0x51,0x97,0xc6,0xc6,
0x23,0xcb,0xe8,0xe8,  0x7c,0xa1,0xdd,0xdd,  0x9c,0xe8,0x74,0x74,  0x21,0x3e,0x1f,0x1f,
0xdd,0x96,0x4b,0x4b,  0xdc,0x61,0xbd,0xbd,  0x86,0xd,0x8b,0x8b,   0x85,0xf,0x8a,0x8a,
0x90,0xe0,0x70,0x70,  0x42,0x7c,0x3e,0x3e,  0xc4,0x71,0xb5,0xb5,  0xaa,0xcc,0x66,0x66,
0xd8,0x90,0x48,0x48,  0x5,0x6,0x3,0x3,      0x1,0xf7,0xf6,0xf6,   0x12,0x1c,0xe,0xe,
0xa3,0xc2,0x61,0x61,  0x5f,0x6a,0x35,0x35,  0xf9,0xae,0x57,0x57,  0xd0,0x69,0xb9,0xb9,
0x91,0x17,0x86,0x86,  0x58,0x99,0xc1,0xc1,  0x27,0x3a,0x1d,0x1d,  0xb9,0x27,0x9e,0x9e,
0x38,0xd9,0xe1,0xe1,  0x13,0xeb,0xf8,0xf8,  0xb3,0x2b,0x98,0x98,  0x33,0x22,0x11,0x11,
0xbb,0xd2,0x69,0x69,  0x70,0xa9,0xd9,0xd9,  0x89,0x7,0x8e,0x8e,   0xa7,0x33,0x94,0x94,
0xb6,0x2d,0x9b,0x9b,  0x22,0x3c,0x1e,0x1e,  0x92,0x15,0x87,0x87,  0x20,0xc9,0xe9,0xe9,
0x49,0x87,0xce,0xce,  0xff,0xaa,0x55,0x55,  0x78,0x50,0x28,0x28,  0x7a,0xa5,0xdf,0xdf,
0x8f,0x3,0x8c,0x8c,   0xf8,0x59,0xa1,0xa1,  0x80,0x9,0x89,0x89,   0x17,0x1a,0xd,0xd,
0xda,0x65,0xbf,0xbf,  0x31,0xd7,0xe6,0xe6,  0xc6,0x84,0x42,0x42,  0xb8,0xd0,0x68,0x68,
0xc3,0x82,0x41,0x41,  0xb0,0x29,0x99,0x99,  0x77,0x5a,0x2d,0x2d,  0x11,0x1e,0xf,0xf,
0xcb,0x7b,0xb0,0xb0,  0xfc,0xa8,0x54,0x54,  0xd6,0x6d,0xbb,0xbb,  0x3a,0x2c,0x16,0x16};


unsigned char TE2[1024] = {
0x63,0xa5,0xc6,0x63,  0x7c,0x84,0xf8,0x7c,  0x77,0x99,0xee,0x77,  0x7b,0x8d,0xf6,0x7b,
0xf2,0xd,0xff,0xf2,   0x6b,0xbd,0xd6,0x6b,  0x6f,0xb1,0xde,0x6f,  0xc5,0x54,0x91,0xc5,
0x30,0x50,0x60,0x30,  0x1,0x3,0x2,0x1,      0x67,0xa9,0xce,0x67,  0x2b,0x7d,0x56,0x2b,
0xfe,0x19,0xe7,0xfe,  0xd7,0x62,0xb5,0xd7,  0xab,0xe6,0x4d,0xab,  0x76,0x9a,0xec,0x76,
0xca,0x45,0x8f,0xca,  0x82,0x9d,0x1f,0x82,  0xc9,0x40,0x89,0xc9,  0x7d,0x87,0xfa,0x7d,
0xfa,0x15,0xef,0xfa,  0x59,0xeb,0xb2,0x59,  0x47,0xc9,0x8e,0x47,  0xf0,0xb,0xfb,0xf0,
0xad,0xec,0x41,0xad,  0xd4,0x67,0xb3,0xd4,  0xa2,0xfd,0x5f,0xa2,  0xaf,0xea,0x45,0xaf,
0x9c,0xbf,0x23,0x9c,  0xa4,0xf7,0x53,0xa4,  0x72,0x96,0xe4,0x72,  0xc0,0x5b,0x9b,0xc0,
0xb7,0xc2,0x75,0xb7,  0xfd,0x1c,0xe1,0xfd,  0x93,0xae,0x3d,0x93,  0x26,0x6a,0x4c,0x26,
0x36,0x5a,0x6c,0x36,  0x3f,0x41,0x7e,0x3f,  0xf7,0x2,0xf5,0xf7,   0xcc,0x4f,0x83,0xcc,
0x34,0x5c,0x68,0x34,  0xa5,0xf4,0x51,0xa5,  0xe5,0x34,0xd1,0xe5,  0xf1,0x8,0xf9,0xf1,
0x71,0x93,0xe2,0x71,  0xd8,0x73,0xab,0xd8,  0x31,0x53,0x62,0x31,  0x15,0x3f,0x2a,0x15,
0x4,0xc,0x8,0x4,      0xc7,0x52,0x95,0xc7,  0x23,0x65,0x46,0x23,  0xc3,0x5e,0x9d,0xc3,
0x18,0x28,0x30,0x18,  0x96,0xa1,0x37,0x96,  0x5,0xf,0xa,0x5,      0x9a,0xb5,0x2f,0x9a,
0x7,0x9,0xe,0x7,      0x12,0x36,0x24,0x12,  0x80,0x9b,0x1b,0x80,  0xe2,0x3d,0xdf,0xe2,
0xeb,0x26,0xcd,0xeb,  0x27,0x69,0x4e,0x27,  0xb2,0xcd,0x7f,0xb2,  0x75,0x9f,0xea,0x75,
0x9,0x1b,0x12,0x9,    0x83,0x9e,0x1d,0x83,  0x2c,0x74,0x58,0x2c,  0x1a,0x2e,0x34,0x1a,
0x1b,0x2d,0x36,0x1b,  0x6e,0xb2,0xdc,0x6e,  0x5a,0xee,0xb4,0x5a,  0xa0,0xfb,0x5b,0xa0,
0x52,0xf6,0xa4,0x52,  0x3b,0x4d,0x76,0x3b,  0xd6,0x61,0xb7,0xd6,  0xb3,0xce,0x7d,0xb3,
0x29,0x7b,0x52,0x29,  0xe3,0x3e,0xdd,0xe3,  0x2f,0x71,0x5e,0x2f,  0x84,0x97,0x13,0x84,
0x53,0xf5,0xa6,0x53,  0xd1,0x68,0xb9,0xd1,  0x0,0x0,0x0,0x0,      0xed,0x2c,0xc1,0xed,
0x20,0x60,0x40,0x20,  0xfc,0x1f,0xe3,0xfc,  0xb1,0xc8,0x79,0xb1,  0x5b,0xed,0xb6,0x5b,
0x6a,0xbe,0xd4,0x6a,  0xcb,0x46,0x8d,0xcb,  0xbe,0xd9,0x67,0xbe,  0x39,0x4b,0x72,0x39,
0x4a,0xde,0x94,0x4a,  0x4c,0xd4,0x98,0x4c,  0x58,0xe8,0xb0,0x58,  0xcf,0x4a,0x85,0xcf,
0xd0,0x6b,0xbb,0xd0,  0xef,0x2a,0xc5,0xef,  0xaa,0xe5,0x4f,0xaa,  0xfb,0x16,0xed,0xfb,
0x43,0xc5,0x86,0x43,  0x4d,0xd7,0x9a,0x4d,  0x33,0x55,0x66,0x33,  0x85,0x94,0x11,0x85,
0x45,0xcf,0x8a,0x45,  0xf9,0x10,0xe9,0xf9,  0x2,0x6,0x4,0x2,      0x7f,0x81,0xfe,0x7f,
0x50,0xf0,0xa0,0x50,  0x3c,0x44,0x78,0x3c,  0x9f,0xba,0x25,0x9f,  0xa8,0xe3,0x4b,0xa8,
0x51,0xf3,0xa2,0x51,  0xa3,0xfe,0x5d,0xa3,  0x40,0xc0,0x80,0x40,  0x8f,0x8a,0x5,0x8f,
0x92,0xad,0x3f,0x92,  0x9d,0xbc,0x21,0x9d,  0x38,0x48,0x70,0x38,  0xf5,0x4,0xf1,0xf5,
0xbc,0xdf,0x63,0xbc,  0xb6,0xc1,0x77,0xb6,  0xda,0x75,0xaf,0xda,  0x21,0x63,0x42,0x21,
0x10,0x30,0x20,0x10,  0xff,0x1a,0xe5,0xff,  0xf3,0xe,0xfd,0xf3,   0xd2,0x6d,0xbf,0xd2,
0xcd,0x4c,0x81,0xcd,  0xc,0x14,0x18,0xc,    0x13,0x35,0x26,0x13,  0xec,0x2f,0xc3,0xec,
0x5f,0xe1,0xbe,0x5f,  0x97,0xa2,0x35,0x97,  0x44,0xcc,0x88,0x44,  0x17,0x39,0x2e,0x17,
0xc4,0x57,0x93,0xc4,  0xa7,0xf2,0x55,0xa7,  0x7e,0x82,0xfc,0x7e,  0x3d,0x47,0x7a,0x3d,
0x64,0xac,0xc8,0x64,  0x5d,0xe7,0xba,0x5d,  0x19,0x2b,0x32,0x19,  0x73,0x95,0xe6,0x73,
0x60,0xa0,0xc0,0x60,  0x81,0x98,0x19,0x81,  0x4f,0xd1,0x9e,0x4f,  0xdc,0x7f,0xa3,0xdc,
0x22,0x66,0x44,0x22,  0x2a,0x7e,0x54,0x2a,  0x90,0xab,0x3b,0x90,  0x88,0x83,0xb,0x88,
0x46,0xca,0x8c,0x46,  0xee,0x29,0xc7,0xee,  0xb8,0xd3,0x6b,0xb8,  0x14,0x3c,0x28,0x14,
0xde,0x79,0xa7,0xde,  0x5e,0xe2,0xbc,0x5e,  0xb,0x1d,0x16,0xb,    0xdb,0x76,0xad,0xdb,
0xe0,0x3b,0xdb,0xe0,  0x32,0x56,0x64,0x32,  0x3a,0x4e,0x74,0x3a,  0xa,0x1e,0x14,0xa,
0x49,0xdb,0x92,0x49,  0x6,0xa,0xc,0x6,      0x24,0x6c,0x48,0x24,  0x5c,0xe4,0xb8,0x5c,
0xc2,0x5d,0x9f,0xc2,  0xd3,0x6e,0xbd,0xd3,  0xac,0xef,0x43,0xac,  0x62,0xa6,0xc4,0x62,
0x91,0xa8,0x39,0x91,  0x95,0xa4,0x31,0x95,  0xe4,0x37,0xd3,0xe4,  0x79,0x8b,0xf2,0x79,
0xe7,0x32,0xd5,0xe7,  0xc8,0x43,0x8b,0xc8,  0x37,0x59,0x6e,0x37,  0x6d,0xb7,0xda,0x6d,
0x8d,0x8c,0x1,0x8d,   0xd5,0x64,0xb1,0xd5,  0x4e,0xd2,0x9c,0x4e,  0xa9,0xe0,0x49,0xa9,
0x6c,0xb4,0xd8,0x6c,  0x56,0xfa,0xac,0x56,  0xf4,0x7,0xf3,0xf4,   0xea,0x25,0xcf,0xea,
0x65,0xaf,0xca,0x65,  0x7a,0x8e,0xf4,0x7a,  0xae,0xe9,0x47,0xae,  0x8,0x18,0x10,0x8,
0xba,0xd5,0x6f,0xba,  0x78,0x88,0xf0,0x78,  0x25,0x6f,0x4a,0x25,  0x2e,0x72,0x5c,0x2e,
0x1c,0x24,0x38,0x1c,  0xa6,0xf1,0x57,0xa6,  0xb4,0xc7,0x73,0xb4,  0xc6,0x51,0x97,0xc6,
0xe8,0x23,0xcb,0xe8,  0xdd,0x7c,0xa1,0xdd,  0x74,0x9c,0xe8,0x74,  0x1f,0x21,0x3e,0x1f,
0x4b,0xdd,0x96,0x4b,  0xbd,0xdc,0x61,0xbd,  0x8b,0x86,0xd,0x8b,   0x8a,0x85,0xf,0x8a,
0x70,0x90,0xe0,0x70,  0x3e,0x42,0x7c,0x3e,  0xb5,0xc4,0x71,0xb5,  0x66,0xaa,0xcc,0x66,
0x48,0xd8,0x90,0x48,  0x3,0x5,0x6,0x3,      0xf6,0x1,0xf7,0xf6,   0xe,0x12,0x1c,0xe,
0x61,0xa3,0xc2,0x61,  0x35,0x5f,0x6a,0x35,  0x57,0xf9,0xae,0x57,  0xb9,0xd0,0x69,0xb9,
0x86,0x91,0x17,0x86,  0xc1,0x58,0x99,0xc1,  0x1d,0x27,0x3a,0x1d,  0x9e,0xb9,0x27,0x9e,
0xe1,0x38,0xd9,0xe1,  0xf8,0x13,0xeb,0xf8,  0x98,0xb3,0x2b,0x98,  0x11,0x33,0x22,0x11,
0x69,0xbb,0xd2,0x69,  0xd9,0x70,0xa9,0xd9,  0x8e,0x89,0x7,0x8e,   0x94,0xa7,0x33,0x94,
0x9b,0xb6,0x2d,0x9b,  0x1e,0x22,0x3c,0x1e,  0x87,0x92,0x15,0x87,  0xe9,0x20,0xc9,0xe9,
0xce,0x49,0x87,0xce,  0x55,0xff,0xaa,0x55,  0x28,0x78,0x50,0x28,  0xdf,0x7a,0xa5,0xdf,
0x8c,0x8f,0x3,0x8c,   0xa1,0xf8,0x59,0xa1,  0x89,0x80,0x9,0x89,   0xd,0x17,0x1a,0xd,
0xbf,0xda,0x65,0xbf,  0xe6,0x31,0xd7,0xe6,  0x42,0xc6,0x84,0x42,  0x68,0xb8,0xd0,0x68,
0x41,0xc3,0x82,0x41,  0x99,0xb0,0x29,0x99,  0x2d,0x77,0x5a,0x2d,  0xf,0x11,0x1e,0xf,
0xb0,0xcb,0x7b,0xb0,  0x54,0xfc,0xa8,0x54,  0xbb,0xd6,0x6d,0xbb,  0x16,0x3a,0x2c,0x16};


unsigned char TE3[1024] = {
0x63,0x63,0xa5,0xc6,  0x7c,0x7c,0x84,0xf8,  0x77,0x77,0x99,0xee,  0x7b,0x7b,0x8d,0xf6,
0xf2,0xf2,0xd,0xff,   0x6b,0x6b,0xbd,0xd6,  0x6f,0x6f,0xb1,0xde,  0xc5,0xc5,0x54,0x91,
0x30,0x30,0x50,0x60,  0x1,0x1,0x3,0x2,      0x67,0x67,0xa9,0xce,  0x2b,0x2b,0x7d,0x56,
0xfe,0xfe,0x19,0xe7,  0xd7,0xd7,0x62,0xb5,  0xab,0xab,0xe6,0x4d,  0x76,0x76,0x9a,0xec,
0xca,0xca,0x45,0x8f,  0x82,0x82,0x9d,0x1f,  0xc9,0xc9,0x40,0x89,  0x7d,0x7d,0x87,0xfa,
0xfa,0xfa,0x15,0xef,  0x59,0x59,0xeb,0xb2,  0x47,0x47,0xc9,0x8e,  0xf0,0xf0,0xb,0xfb,
0xad,0xad,0xec,0x41,  0xd4,0xd4,0x67,0xb3,  0xa2,0xa2,0xfd,0x5f,  0xaf,0xaf,0xea,0x45,
0x9c,0x9c,0xbf,0x23,  0xa4,0xa4,0xf7,0x53,  0x72,0x72,0x96,0xe4,  0xc0,0xc0,0x5b,0x9b,
0xb7,0xb7,0xc2,0x75,  0xfd,0xfd,0x1c,0xe1,  0x93,0x93,0xae,0x3d,  0x26,0x26,0x6a,0x4c,
0x36,0x36,0x5a,0x6c,  0x3f,0x3f,0x41,0x7e,  0xf7,0xf7,0x2,0xf5,   0xcc,0xcc,0x4f,0x83,
0x34,0x34,0x5c,0x68,  0xa5,0xa5,0xf4,0x51,  0xe5,0xe5,0x34,0xd1,  0xf1,0xf1,0x8,0xf9,
0x71,0x71,0x93,0xe2,  0xd8,0xd8,0x73,0xab,  0x31,0x31,0x53,0x62,  0x15,0x15,0x3f,0x2a,
0x4,0x4,0xc,0x8,      0xc7,0xc7,0x52,0x95,  0x23,0x23,0x65,0x46,  0xc3,0xc3,0x5e,0x9d,
0x18,0x18,0x28,0x30,  0x96,0x96,0xa1,0x37,  0x5,0x5,0xf,0xa,      0x9a,0x9a,0xb5,0x2f,
0x7,0x7,0x9,0xe,      0x12,0x12,0x36,0x24,  0x80,0x80,0x9b,0x1b,  0xe2,0xe2,0x3d,0xdf,
0xeb,0xeb,0x26,0xcd,  0x27,0x27,0x69,0x4e,  0xb2,0xb2,0xcd,0x7f,  0x75,0x75,0x9f,0xea,
0x9,0x9,0x1b,0x12,    0x83,0x83,0x9e,0x1d,  0x2c,0x2c,0x74,0x58,  0x1a,0x1a,0x2e,0x34,
0x1b,0x1b,0x2d,0x36,  0x6e,0x6e,0xb2,0xdc,  0x5a,0x5a,0xee,0xb4,  0xa0,0xa0,0xfb,0x5b,
0x52,0x52,0xf6,0xa4,  0x3b,0x3b,0x4d,0x76,  0xd6,0xd6,0x61,0xb7,  0xb3,0xb3,0xce,0x7d,
0x29,0x29,0x7b,0x52,  0xe3,0xe3,0x3e,0xdd,  0x2f,0x2f,0x71,0x5e,  0x84,0x84,0x97,0x13,
0x53,0x53,0xf5,0xa6,  0xd1,0xd1,0x68,0xb9,  0x0,0x0,0x0,0x0,      0xed,0xed,0x2c,0xc1,
0x20,0x20,0x60,0x40,  0xfc,0xfc,0x1f,0xe3,  0xb1,0xb1,0xc8,0x79,  0x5b,0x5b,0xed,0xb6,
0x6a,0x6a,0xbe,0xd4,  0xcb,0xcb,0x46,0x8d,  0xbe,0xbe,0xd9,0x67,  0x39,0x39,0x4b,0x72,
0x4a,0x4a,0xde,0x94,  0x4c,0x4c,0xd4,0x98,  0x58,0x58,0xe8,0xb0,  0xcf,0xcf,0x4a,0x85,
0xd0,0xd0,0x6b,0xbb,  0xef,0xef,0x2a,0xc5,  0xaa,0xaa,0xe5,0x4f,  0xfb,0xfb,0x16,0xed,
0x43,0x43,0xc5,0x86,  0x4d,0x4d,0xd7,0x9a,  0x33,0x33,0x55,0x66,  0x85,0x85,0x94,0x11,
0x45,0x45,0xcf,0x8a,  0xf9,0xf9,0x10,0xe9,  0x2,0x2,0x6,0x4,      0x7f,0x7f,0x81,0xfe,
0x50,0x50,0xf0,0xa0,  0x3c,0x3c,0x44,0x78,  0x9f,0x9f,0xba,0x25,  0xa8,0xa8,0xe3,0x4b,
0x51,0x51,0xf3,0xa2,  0xa3,0xa3,0xfe,0x5d,  0x40,0x40,0xc0,0x80,  0x8f,0x8f,0x8a,0x5,
0x92,0x92,0xad,0x3f,  0x9d,0x9d,0xbc,0x21,  0x38,0x38,0x48,0x70,  0xf5,0xf5,0x4,0xf1,
0xbc,0xbc,0xdf,0x63,  0xb6,0xb6,0xc1,0x77,  0xda,0xda,0x75,0xaf,  0x21,0x21,0x63,0x42,
0x10,0x10,0x30,0x20,  0xff,0xff,0x1a,0xe5,  0xf3,0xf3,0xe,0xfd,   0xd2,0xd2,0x6d,0xbf,
0xcd,0xcd,0x4c,0x81,  0xc,0xc,0x14,0x18,    0x13,0x13,0x35,0x26,  0xec,0xec,0x2f,0xc3,
0x5f,0x5f,0xe1,0xbe,  0x97,0x97,0xa2,0x35,  0x44,0x44,0xcc,0x88,  0x17,0x17,0x39,0x2e,
0xc4,0xc4,0x57,0x93,  0xa7,0xa7,0xf2,0x55,  0x7e,0x7e,0x82,0xfc,  0x3d,0x3d,0x47,0x7a,
0x64,0x64,0xac,0xc8,  0x5d,0x5d,0xe7,0xba,  0x19,0x19,0x2b,0x32,  0x73,0x73,0x95,0xe6,
0x60,0x60,0xa0,0xc0,  0x81,0x81,0x98,0x19,  0x4f,0x4f,0xd1,0x9e,  0xdc,0xdc,0x7f,0xa3,
0x22,0x22,0x66,0x44,  0x2a,0x2a,0x7e,0x54,  0x90,0x90,0xab,0x3b,  0x88,0x88,0x83,0xb,
0x46,0x46,0xca,0x8c,  0xee,0xee,0x29,0xc7,  0xb8,0xb8,0xd3,0x6b,  0x14,0x14,0x3c,0x28,
0xde,0xde,0x79,0xa7,  0x5e,0x5e,0xe2,0xbc,  0xb,0xb,0x1d,0x16,    0xdb,0xdb,0x76,0xad,
0xe0,0xe0,0x3b,0xdb,  0x32,0x32,0x56,0x64,  0x3a,0x3a,0x4e,0x74,  0xa,0xa,0x1e,0x14,
0x49,0x49,0xdb,0x92,  0x6,0x6,0xa,0xc,      0x24,0x24,0x6c,0x48,  0x5c,0x5c,0xe4,0xb8,
0xc2,0xc2,0x5d,0x9f,  0xd3,0xd3,0x6e,0xbd,  0xac,0xac,0xef,0x43,  0x62,0x62,0xa6,0xc4,
0x91,0x91,0xa8,0x39,  0x95,0x95,0xa4,0x31,  0xe4,0xe4,0x37,0xd3,  0x79,0x79,0x8b,0xf2,
0xe7,0xe7,0x32,0xd5,  0xc8,0xc8,0x43,0x8b,  0x37,0x37,0x59,0x6e,  0x6d,0x6d,0xb7,0xda,
0x8d,0x8d,0x8c,0x1,   0xd5,0xd5,0x64,0xb1,  0x4e,0x4e,0xd2,0x9c,  0xa9,0xa9,0xe0,0x49,
0x6c,0x6c,0xb4,0xd8,  0x56,0x56,0xfa,0xac,  0xf4,0xf4,0x7,0xf3,   0xea,0xea,0x25,0xcf,
0x65,0x65,0xaf,0xca,  0x7a,0x7a,0x8e,0xf4,  0xae,0xae,0xe9,0x47,  0x8,0x8,0x18,0x10,
0xba,0xba,0xd5,0x6f,  0x78,0x78,0x88,0xf0,  0x25,0x25,0x6f,0x4a,  0x2e,0x2e,0x72,0x5c,
0x1c,0x1c,0x24,0x38,  0xa6,0xa6,0xf1,0x57,  0xb4,0xb4,0xc7,0x73,  0xc6,0xc6,0x51,0x97,
0xe8,0xe8,0x23,0xcb,  0xdd,0xdd,0x7c,0xa1,  0x74,0x74,0x9c,0xe8,  0x1f,0x1f,0x21,0x3e,
0x4b,0x4b,0xdd,0x96,  0xbd,0xbd,0xdc,0x61,  0x8b,0x8b,0x86,0xd,   0x8a,0x8a,0x85,0xf,
0x70,0x70,0x90,0xe0,  0x3e,0x3e,0x42,0x7c,  0xb5,0xb5,0xc4,0x71,  0x66,0x66,0xaa,0xcc,
0x48,0x48,0xd8,0x90,  0x3,0x3,0x5,0x6,      0xf6,0xf6,0x1,0xf7,   0xe,0xe,0x12,0x1c,
0x61,0x61,0xa3,0xc2,  0x35,0x35,0x5f,0x6a,  0x57,0x57,0xf9,0xae,  0xb9,0xb9,0xd0,0x69,
0x86,0x86,0x91,0x17,  0xc1,0xc1,0x58,0x99,  0x1d,0x1d,0x27,0x3a,  0x9e,0x9e,0xb9,0x27,
0xe1,0xe1,0x38,0xd9,  0xf8,0xf8,0x13,0xeb,  0x98,0x98,0xb3,0x2b,  0x11,0x11,0x33,0x22,
0x69,0x69,0xbb,0xd2,  0xd9,0xd9,0x70,0xa9,  0x8e,0x8e,0x89,0x7,   0x94,0x94,0xa7,0x33,
0x9b,0x9b,0xb6,0x2d,  0x1e,0x1e,0x22,0x3c,  0x87,0x87,0x92,0x15,  0xe9,0xe9,0x20,0xc9,
0xce,0xce,0x49,0x87,  0x55,0x55,0xff,0xaa,  0x28,0x28,0x78,0x50,  0xdf,0xdf,0x7a,0xa5,
0x8c,0x8c,0x8f,0x3,   0xa1,0xa1,0xf8,0x59,  0x89,0x89,0x80,0x9,   0xd,0xd,0x17,0x1a,
0xbf,0xbf,0xda,0x65,  0xe6,0xe6,0x31,0xd7,  0x42,0x42,0xc6,0x84,  0x68,0x68,0xb8,0xd0,
0x41,0x41,0xc3,0x82,  0x99,0x99,0xb0,0x29,  0x2d,0x2d,0x77,0x5a,  0xf,0xf,0x11,0x1e,
0xb0,0xb0,0xcb,0x7b,  0x54,0x54,0xfc,0xa8,  0xbb,0xbb,0xd6,0x6d,  0x16,0x16,0x3a,0x2c};


void AESROUND(unsigned char *out, unsigned char *in, unsigned char *rk)
{
      ((U32*)out)[0] = ((U32*)TE0)[*(in+0)]  ^ ((U32*)TE1)[*(in+5)]  ^ ((U32*)TE2)[*(in+10)] ^ ((U32*)TE3)[*(in+15)] ^ ((U32*)rk)[0];
      ((U32*)out)[1] = ((U32*)TE0)[*(in+4)]  ^ ((U32*)TE1)[*(in+9)]  ^ ((U32*)TE2)[*(in+14)] ^ ((U32*)TE3)[*(in+3)]  ^ ((U32*)rk)[1];
      ((U32*)out)[2] = ((U32*)TE0)[*(in+8)]  ^ ((U32*)TE1)[*(in+13)] ^ ((U32*)TE2)[*(in+2)]  ^ ((U32*)TE3)[*(in+7)]  ^ ((U32*)rk)[2];
      ((U32*)out)[3] = ((U32*)TE0)[*(in+12)] ^ ((U32*)TE1)[*(in+1)]  ^ ((U32*)TE2)[*(in+6)]  ^ ((U32*)TE3)[*(in+11)] ^ ((U32*)rk)[3];
}

} // namespace Aegis128_raw
