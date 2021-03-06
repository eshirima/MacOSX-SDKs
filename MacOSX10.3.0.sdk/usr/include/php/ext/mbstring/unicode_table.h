/* charactor property table */
#define MBFL_CHP_CTL		0x01
#define MBFL_CHP_DIGIT		0x02
#define MBFL_CHP_UALPHA		0x04
#define MBFL_CHP_LALPHA		0x08
#define MBFL_CHP_MMHQENC	0x10	/* must Q-encoding in MIME Header encoded-word */
#define MBFL_CHP_MSPECIAL	0x20	/* RFC822 Special characters */

/*
 * Unicode table
 */


/* Windows CodePage 1252 - it's the same as iso-8859-1 but
 * defines extra symbols in the range 0x80-0x9f.
 * This table differs from the rest of the unicode tables below
 * as it only covers this range, while the rest cover 0xa0 onwards */
static const unsigned short cp1252_ucs_table[] = {
 0x20ac,0xfffe,0x201a,0x0192,0x201e,0x2026,0x2020,0x2021,
 0x02c6,0x2030,0x0160,0x2039,0x0152,0xfffe,0x017d,0xfffe,
 0xfffe,0x2018,0x2019,0x201c,0x201d,0x2022,0x2013,0x2014,
 0x02dc,0x2122,0x0161,0x203a,0x0153,0xfffe,0x017e,0x0178
};


static const unsigned short iso8859_2_ucs_table[] = {
 0x00A0,0x0104,0x02D8,0x0141,0x00A4,0x013D,0x015A,0x00A7,
 0x00A8,0x0160,0x015E,0x0164,0x0179,0x00AD,0x017D,0x017B,
 0x00B0,0x0105,0x02DB,0x0142,0x00B4,0x013E,0x015B,0x02C7,
 0x00B8,0x0161,0x015F,0x0165,0x017A,0x02DD,0x017E,0x017C,
 0x0154,0x00C1,0x00C2,0x0102,0x00C4,0x0139,0x0106,0x00C7,
 0x010C,0x00C9,0x0118,0x00CB,0x011A,0x00CD,0x00CE,0x010E,
 0x0110,0x0143,0x0147,0x00D3,0x00D4,0x0150,0x00D6,0x00D7,
 0x0158,0x016E,0x00DA,0x0170,0x00DC,0x00DD,0x0162,0x00DF,
 0x0155,0x00E1,0x00E2,0x0103,0x00E4,0x013A,0x0107,0x00E7,
 0x010D,0x00E9,0x0119,0x00EB,0x011B,0x00ED,0x00EE,0x010F,
 0x0111,0x0144,0x0148,0x00F3,0x00F4,0x0151,0x00F6,0x00F7,
 0x0159,0x016F,0x00FA,0x0171,0x00FC,0x00FD,0x0163,0x02D9
};


static const unsigned short iso8859_3_ucs_table[] = {
 0x00A0,0x0126,0x02D8,0x00A3,0x00A4,0x0000,0x0124,0x00A7,
 0x00A8,0x0130,0x015E,0x011E,0x0134,0x00AD,0x0000,0x017B,
 0x00B0,0x0127,0x00B2,0x00B3,0x00B4,0x00B5,0x0125,0x00B7,
 0x00B8,0x0131,0x015F,0x011F,0x0135,0x00BD,0x0000,0x017C,
 0x00C0,0x00C1,0x00C2,0x0000,0x00C4,0x010A,0x0108,0x00C7,
 0x00C8,0x00C9,0x00CA,0x00CB,0x00CC,0x00CD,0x00CE,0x00CF,
 0x0000,0x00D1,0x00D2,0x00D3,0x00D4,0x0120,0x00D6,0x00D7,
 0x011C,0x00D9,0x00DA,0x00DB,0x00DC,0x016C,0x015C,0x00DF,
 0x00E0,0x00E1,0x00E2,0x0000,0x00E4,0x010B,0x0109,0x00E7,
 0x00E8,0x00E9,0x00EA,0x00EB,0x00EC,0x00ED,0x00EE,0x00EF,
 0x0000,0x00F1,0x00F2,0x00F3,0x00F4,0x0121,0x00F6,0x00F7,
 0x011D,0x00F9,0x00FA,0x00FB,0x00FC,0x016D,0x015D,0x02D9
};


static const unsigned short iso8859_4_ucs_table[] = {
 0x00A0,0x0104,0x0138,0x0156,0x00A4,0x0128,0x013B,0x00A7,
 0x00A8,0x0160,0x0112,0x0122,0x0166,0x00AD,0x017D,0x00AF,
 0x00B0,0x0105,0x02DB,0x0157,0x00B4,0x0129,0x013C,0x02C7,
 0x00B8,0x0161,0x0113,0x0123,0x0167,0x014A,0x017E,0x014B,
 0x0100,0x00C1,0x00C2,0x00C3,0x00C4,0x00C5,0x00C6,0x012E,
 0x010C,0x00C9,0x0118,0x00CB,0x0116,0x00CD,0x00CE,0x012A,
 0x0110,0x0145,0x014C,0x0136,0x00D4,0x00D5,0x00D6,0x00D7,
 0x00D8,0x0172,0x00DA,0x00DB,0x00DC,0x0168,0x016A,0x00DF,
 0x0101,0x00E1,0x00E2,0x00E3,0x00E4,0x00E5,0x00E6,0x012F,
 0x010D,0x00E9,0x0119,0x00EB,0x0117,0x00ED,0x00EE,0x012B,
 0x0111,0x0146,0x014D,0x0137,0x00F4,0x00F5,0x00F6,0x00F7,
 0x00F8,0x0173,0x00FA,0x00FB,0x00FC,0x0169,0x016B,0x02D9
};


static const unsigned short iso8859_5_ucs_table[] = {
 0x00A0,0x0401,0x0402,0x0403,0x0404,0x0405,0x0406,0x0407,
 0x0408,0x0409,0x040A,0x040B,0x040C,0x00AD,0x040E,0x040F,
 0x0410,0x0411,0x0412,0x0413,0x0414,0x0415,0x0416,0x0417,
 0x0418,0x0419,0x041A,0x041B,0x041C,0x041D,0x041E,0x041F,
 0x0420,0x0421,0x0422,0x0423,0x0424,0x0425,0x0426,0x0427,
 0x0428,0x0429,0x042A,0x042B,0x042C,0x042D,0x042E,0x042F,
 0x0430,0x0431,0x0432,0x0433,0x0434,0x0435,0x0436,0x0437,
 0x0438,0x0439,0x043A,0x043B,0x043C,0x043D,0x043E,0x043F,
 0x0440,0x0441,0x0442,0x0443,0x0444,0x0445,0x0446,0x0447,
 0x0448,0x0449,0x044A,0x044B,0x044C,0x044D,0x044E,0x044F,
 0x2116,0x0451,0x0452,0x0453,0x0454,0x0455,0x0456,0x0457,
 0x0458,0x0459,0x045A,0x045B,0x045C,0x00A7,0x045E,0x045F
};


static const unsigned short iso8859_6_ucs_table[] = {
 0x00A0,0x0000,0x0000,0x0000,0x00A4,0x0000,0x0000,0x0000,
 0x0000,0x0000,0x0000,0x0000,0x060C,0x00AD,0x0000,0x0000,
 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
 0x0000,0x0000,0x0000,0x061B,0x0000,0x0000,0x0000,0x061F,
 0x0000,0x0621,0x0622,0x0623,0x0624,0x0625,0x0626,0x0627,
 0x0628,0x0629,0x062A,0x062B,0x062C,0x062D,0x062E,0x062F,
 0x0630,0x0631,0x0632,0x0633,0x0634,0x0635,0x0636,0x0637,
 0x0638,0x0639,0x063A,0x0000,0x0000,0x0000,0x0000,0x0000,
 0x0640,0x0641,0x0642,0x0643,0x0644,0x0645,0x0646,0x0647,
 0x0648,0x0649,0x064A,0x064B,0x064C,0x064D,0x064E,0x064F,
 0x0650,0x0651,0x0652,0x0000,0x0000,0x0000,0x0000,0x0000,
 0x0000,0x0000,0x0000,0x0000,0x060C,0x00AD,0x0000,0x0000
};


static const unsigned short iso8859_7_ucs_table[] = {
 0x00A0,0x2018,0x2019,0x00A3,0x0000,0x0000,0x00A6,0x00A7,
 0x00A8,0x00A9,0x0000,0x00AB,0x00AC,0x00AD,0x0000,0x2015,
 0x00B0,0x00B1,0x00B2,0x00B3,0x0384,0x0385,0x0386,0x00B7,
 0x0388,0x0389,0x038A,0x00BB,0x038C,0x00BD,0x038E,0x038F,
 0x0390,0x0391,0x0392,0x0393,0x0394,0x0395,0x0396,0x0397,
 0x0398,0x0399,0x039A,0x039B,0x039C,0x039D,0x039E,0x039F,
 0x03A0,0x03A1,0x0000,0x03A3,0x03A4,0x03A5,0x03A6,0x03A7,
 0x03A8,0x03A9,0x03AA,0x03AB,0x03AC,0x03AD,0x03AE,0x03AF,
 0x03B0,0x03B1,0x03B2,0x03B3,0x03B4,0x03B5,0x03B6,0x03B7,
 0x03B8,0x03B9,0x03BA,0x03BB,0x03BC,0x03BD,0x03BE,0x03BF,
 0x03C0,0x03C1,0x03C2,0x03C3,0x03C4,0x03C5,0x03C6,0x03C7,
 0x03C8,0x03C9,0x03CA,0x03CB,0x03CC,0x03CD,0x03CE,0x0000
};


static const unsigned short iso8859_8_ucs_table[] = {
 0x00A0,0x0000,0x00A2,0x00A3,0x00A4,0x00A5,0x00A6,0x00A7,
 0x00A8,0x00A9,0x00D7,0x00AB,0x00AC,0x00AD,0x00AE,0x203E,
 0x00B0,0x00B1,0x00B2,0x00B3,0x00B4,0x00B5,0x00B6,0x00B7,
 0x00B8,0x00B9,0x00F7,0x00BB,0x00BC,0x00BD,0x00BE,0x0000,
 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x2017,
 0x05D0,0x05D1,0x05D2,0x05D3,0x05D4,0x05D5,0x05D6,0x05D7,
 0x05D8,0x05D9,0x05DA,0x05DB,0x05DC,0x05DD,0x05DE,0x05DF,
 0x05E0,0x05E1,0x05E2,0x05E3,0x05E4,0x05E5,0x05E6,0x05E7,
 0x05E8,0x05E9,0x05EA,0x0000,0x0000,0x0000,0x0000,0x0000
};


static const unsigned short iso8859_9_ucs_table[] = {
 0x00A0,0x00A1,0x00A2,0x00A3,0x00A4,0x00A5,0x00A6,0x00A7,
 0x00A8,0x00A9,0x00AA,0x00AB,0x00AC,0x00AD,0x00AE,0x00AF,
 0x00B0,0x00B1,0x00B2,0x00B3,0x00B4,0x00B5,0x00B6,0x00B7,
 0x00B8,0x00B9,0x00BA,0x00BB,0x00BC,0x00BD,0x00BE,0x00BF,
 0x00C0,0x00C1,0x00C2,0x00C3,0x00C4,0x00C5,0x00C6,0x00C7,
 0x00C8,0x00C9,0x00CA,0x00CB,0x00CC,0x00CD,0x00CE,0x00CF,
 0x011E,0x00D1,0x00D2,0x00D3,0x00D4,0x00D5,0x00D6,0x00D7,
 0x00D8,0x00D9,0x00DA,0x00DB,0x00DC,0x0130,0x015E,0x00DF,
 0x00E0,0x00E1,0x00E2,0x00E3,0x00E4,0x00E5,0x00E6,0x00E7,
 0x00E8,0x00E9,0x00EA,0x00EB,0x00EC,0x00ED,0x00EE,0x00EF,
 0x011F,0x00F1,0x00F2,0x00F3,0x00F4,0x00F5,0x00F6,0x00F7,
 0x00F8,0x00F9,0x00FA,0x00FB,0x00FC,0x0131,0x015F,0x00FF
};


static const unsigned short iso8859_10_ucs_table[] = {
 0x00A0,0x0104,0x0112,0x0122,0x0124,0x0128,0x0136,0x00A7,
 0x013B,0x0110,0x0160,0x0166,0x017D,0x00AD,0x016A,0x014A,
 0x00B0,0x0105,0x0113,0x0123,0x012B,0x0129,0x0137,0x00B7,
 0x013C,0x0111,0x0161,0x0167,0x017E,0x2015,0x016B,0x014B,
 0x0100,0x00C1,0x00C2,0x00C3,0x00C4,0x00C5,0x00C6,0x012E,
 0x010C,0x00C9,0x0118,0x00CB,0x0116,0x00CD,0x00CE,0x00CF,
 0x00D0,0x0145,0x014C,0x00D3,0x00D4,0x00D5,0x00D6,0x0168,
 0x00D8,0x0172,0x00DA,0x00DB,0x00DC,0x00DD,0x00DE,0x00DF,
 0x0101,0x00E1,0x00E2,0x00E3,0x00E4,0x00E5,0x00E6,0x012F,
 0x010D,0x00E9,0x0119,0x00EB,0x0117,0x00ED,0x00EE,0x00EF,
 0x00F0,0x0146,0x014D,0x00F3,0x00F4,0x00F5,0x00F6,0x0169,
 0x00F8,0x0173,0x00FA,0x00FB,0x00FC,0x00FD,0x00FE,0x0138
};


static const unsigned short iso8859_13_ucs_table[] = {
 0x00A0,0x201D,0x00A2,0x00A3,0x00A4,0x201E,0x00A6,0x00A7,
 0x00D8,0x00A9,0x0156,0x00AB,0x00AC,0x00AD,0x00AE,0x00C6,
 0x00B0,0x00B1,0x00B2,0x00B3,0x201C,0x00B5,0x00B6,0x00B7,
 0x00F8,0x00B9,0x0157,0x00BB,0x00BC,0x00BD,0x00BE,0x00E6,
 0x0104,0x012E,0x0100,0x0106,0x00C4,0x00C5,0x0118,0x0112,
 0x010C,0x00C9,0x0179,0x0116,0x0122,0x0136,0x012A,0x013B,
 0x0160,0x0143,0x0145,0x00D3,0x014C,0x00D5,0x00D6,0x00D7,
 0x0172,0x0141,0x015A,0x016A,0x00DC,0x017B,0x017D,0x00DF,
 0x0105,0x012F,0x0101,0x0107,0x00E4,0x00E5,0x0119,0x0113,
 0x010D,0x00E9,0x017A,0x0117,0x0123,0x0137,0x012B,0x013C,
 0x0161,0x0144,0x0146,0x00F3,0x014D,0x00F5,0x00F6,0x00F7,
 0x0173,0x0142,0x015B,0x016B,0x00FC,0x017C,0x017E,0x2019
};


static const unsigned short iso8859_14_ucs_table[] = {
 0x00A0,0x1E02,0x1E03,0x00A3,0x010A,0x010B,0x1E0A,0x00A7,
 0x1E80,0x00A9,0x1E82,0x1E0B,0x1EF2,0x00AD,0x00AE,0x0178,
 0x1E1E,0x1E1F,0x0120,0x0121,0x1E40,0x1E41,0x00B6,0x1E56,
 0x1E81,0x1E57,0x1E83,0x1E60,0x1EF3,0x1E84,0x1E85,0x1E61,
 0x00C0,0x00C1,0x00C2,0x00C3,0x00C4,0x00C5,0x00C6,0x00C7,
 0x00C8,0x00C9,0x00CA,0x00CB,0x00CC,0x00CD,0x00CE,0x00CF,
 0x0174,0x00D1,0x00D2,0x00D3,0x00D4,0x00D5,0x00D6,0x1E6A,
 0x00D8,0x00D9,0x00DA,0x00DB,0x00DC,0x00DD,0x0176,0x00DF,
 0x00E0,0x00E1,0x00E2,0x00E3,0x00E4,0x00E5,0x00E6,0x00E7,
 0x00E8,0x00E9,0x00EA,0x00EB,0x00EC,0x00ED,0x00EE,0x00EF,
 0x0175,0x00F1,0x00F2,0x00F3,0x00F4,0x00F5,0x00F6,0x1E6B,
 0x00F8,0x00F9,0x00FA,0x00FB,0x00FC,0x00FD,0x0177,0x00FF
};


static const unsigned short iso8859_15_ucs_table[] = {
 0x00A0,0x00A1,0x00A2,0x00A3,0x20AC,0x00A5,0x0160,0x00A7,
 0x0161,0x00A9,0x00AA,0x00AB,0x00AC,0x00AD,0x00AE,0x00AF,
 0x00B0,0x00B1,0x00B2,0x00B3,0x017D,0x00B5,0x00B6,0x00B7,
 0x017E,0x00B9,0x00BA,0x00BB,0x0152,0x0153,0x0178,0x00BF,
 0x00C0,0x00C1,0x00C2,0x00C3,0x00C4,0x00C5,0x00C6,0x00C7,
 0x00C8,0x00C9,0x00CA,0x00CB,0x00CC,0x00CD,0x00CE,0x00CF,
 0x00D0,0x00D1,0x00D2,0x00D3,0x00D4,0x00D5,0x00D6,0x00D7,
 0x00D8,0x00D9,0x00DA,0x00DB,0x00DC,0x00DD,0x00DE,0x00DF,
 0x00E0,0x00E1,0x00E2,0x00E3,0x00E4,0x00E5,0x00E6,0x00E7,
 0x00E8,0x00E9,0x00EA,0x00EB,0x00EC,0x00ED,0x00EE,0x00EF,
 0x00F0,0x00F1,0x00F2,0x00F3,0x00F4,0x00F5,0x00F6,0x00F7,
 0x00F8,0x00F9,0x00FA,0x00FB,0x00FC,0x00FD,0x00FE,0x00FF
};


static const unsigned char mbfl_charprop_table[] = {
/* NUL	0 */	MBFL_CHP_CTL | MBFL_CHP_MMHQENC,
/* SCH	1 */	MBFL_CHP_CTL | MBFL_CHP_MMHQENC ,
/* SIX	2 */	MBFL_CHP_CTL | MBFL_CHP_MMHQENC ,
/* EIX	3 */	MBFL_CHP_CTL | MBFL_CHP_MMHQENC ,
/* EOT	4 */	MBFL_CHP_CTL | MBFL_CHP_MMHQENC ,
/* ENQ	5 */	MBFL_CHP_CTL | MBFL_CHP_MMHQENC ,
/* ACK	6 */	MBFL_CHP_CTL | MBFL_CHP_MMHQENC ,
/* BEL	7 */	MBFL_CHP_CTL | MBFL_CHP_MMHQENC ,
/* BS	8 */	MBFL_CHP_CTL | MBFL_CHP_MMHQENC ,
/* HI	9 */	MBFL_CHP_CTL | MBFL_CHP_MMHQENC ,
/* LF	10 */	MBFL_CHP_CTL | MBFL_CHP_MMHQENC ,
/* VI	11 */	MBFL_CHP_CTL | MBFL_CHP_MMHQENC ,
/* FF	12 */	MBFL_CHP_CTL | MBFL_CHP_MMHQENC ,
/* CR	13 */	MBFL_CHP_CTL | MBFL_CHP_MMHQENC ,
/* SO	14 */	MBFL_CHP_CTL | MBFL_CHP_MMHQENC ,
/* SI	15 */	MBFL_CHP_CTL | MBFL_CHP_MMHQENC ,
/* SLE	16 */	MBFL_CHP_CTL | MBFL_CHP_MMHQENC ,
/* CSI	17 */	MBFL_CHP_CTL | MBFL_CHP_MMHQENC ,
/* DC2	18 */	MBFL_CHP_CTL | MBFL_CHP_MMHQENC ,
/* DC3	19 */	MBFL_CHP_CTL | MBFL_CHP_MMHQENC ,
/* DC4	20 */	MBFL_CHP_CTL | MBFL_CHP_MMHQENC ,
/* NAK	21 */	MBFL_CHP_CTL | MBFL_CHP_MMHQENC ,
/* SYN	22 */	MBFL_CHP_CTL | MBFL_CHP_MMHQENC ,
/* EIB	23 */	MBFL_CHP_CTL | MBFL_CHP_MMHQENC ,
/* CAN	24 */	MBFL_CHP_CTL | MBFL_CHP_MMHQENC ,
/* EM	25 */	MBFL_CHP_CTL | MBFL_CHP_MMHQENC ,
/* SLB	26 */	MBFL_CHP_CTL | MBFL_CHP_MMHQENC ,
/* ESC	27 */	MBFL_CHP_CTL | MBFL_CHP_MMHQENC ,
/* FS	28 */	MBFL_CHP_CTL | MBFL_CHP_MMHQENC ,
/* GS	29 */	MBFL_CHP_CTL | MBFL_CHP_MMHQENC ,
/* RS	30 */	MBFL_CHP_CTL | MBFL_CHP_MMHQENC ,
/* US	31 */	MBFL_CHP_CTL | MBFL_CHP_MMHQENC ,
/* SP	32 */	MBFL_CHP_MMHQENC ,
/* !	33 */	0 ,
/* "	34 */	MBFL_CHP_MMHQENC | MBFL_CHP_MSPECIAL ,
/* #	35 */	MBFL_CHP_MMHQENC ,
/* $	36 */	MBFL_CHP_MMHQENC ,
/* %	37 */	MBFL_CHP_MMHQENC ,
/* &	38 */	MBFL_CHP_MMHQENC ,
/* '	39 */	MBFL_CHP_MMHQENC ,
/* (	40 */	MBFL_CHP_MMHQENC | MBFL_CHP_MSPECIAL ,
/* )	41 */	MBFL_CHP_MMHQENC | MBFL_CHP_MSPECIAL ,
/* *	42 */	0 ,
/* +	43 */	0 ,
/* ,	44 */	MBFL_CHP_MMHQENC | MBFL_CHP_MSPECIAL ,
/* -	45 */	0 ,
/* .	46 */	MBFL_CHP_MMHQENC | MBFL_CHP_MSPECIAL ,
/* /	47 */	0 ,
/* 0	48 */	MBFL_CHP_DIGIT | MBFL_CHP_MMHQENC ,
/* 1	49 */	MBFL_CHP_DIGIT | MBFL_CHP_MMHQENC ,
/* 2	50 */	MBFL_CHP_DIGIT | MBFL_CHP_MMHQENC ,
/* 3	51 */	MBFL_CHP_DIGIT | MBFL_CHP_MMHQENC ,
/* 4	52 */	MBFL_CHP_DIGIT | MBFL_CHP_MMHQENC ,
/* 5	53 */	MBFL_CHP_DIGIT | MBFL_CHP_MMHQENC ,
/* 6	54 */	MBFL_CHP_DIGIT | MBFL_CHP_MMHQENC ,
/* 7	55 */	MBFL_CHP_DIGIT | MBFL_CHP_MMHQENC ,
/* 8	56 */	MBFL_CHP_DIGIT | MBFL_CHP_MMHQENC ,
/* 9	57 */	MBFL_CHP_DIGIT | MBFL_CHP_MMHQENC ,
/* :	58 */	MBFL_CHP_MMHQENC | MBFL_CHP_MSPECIAL ,
/* ;	59 */	MBFL_CHP_MMHQENC | MBFL_CHP_MSPECIAL ,
/* <	60 */	MBFL_CHP_MMHQENC | MBFL_CHP_MSPECIAL ,
/* =	61 */	0 ,
/* >	62 */	MBFL_CHP_MMHQENC | MBFL_CHP_MSPECIAL ,
/* ?	63 */	MBFL_CHP_MMHQENC ,
/* @	64 */	MBFL_CHP_MMHQENC | MBFL_CHP_MSPECIAL ,
/* A	65 */	MBFL_CHP_UALPHA ,
/* B	66 */	MBFL_CHP_UALPHA ,
/* C	67 */	MBFL_CHP_UALPHA ,
/* D	68 */	MBFL_CHP_UALPHA ,
/* E	69 */	MBFL_CHP_UALPHA ,
/* F	70 */	MBFL_CHP_UALPHA ,
/* G	71 */	MBFL_CHP_UALPHA ,
/* H	72 */	MBFL_CHP_UALPHA ,
/* I	73 */	MBFL_CHP_UALPHA ,
/* J	74 */	MBFL_CHP_UALPHA ,
/* K	75 */	MBFL_CHP_UALPHA ,
/* L	76 */	MBFL_CHP_UALPHA ,
/* M	77 */	MBFL_CHP_UALPHA ,
/* N	78 */	MBFL_CHP_UALPHA ,
/* O	79 */	MBFL_CHP_UALPHA ,
/* P	80 */	MBFL_CHP_UALPHA ,
/* Q	81 */	MBFL_CHP_UALPHA ,
/* R	82 */	MBFL_CHP_UALPHA ,
/* S	83 */	MBFL_CHP_UALPHA ,
/* T	84 */	MBFL_CHP_UALPHA ,
/* U	85 */	MBFL_CHP_UALPHA ,
/* V	86 */	MBFL_CHP_UALPHA ,
/* W	87 */	MBFL_CHP_UALPHA ,
/* X	88 */	MBFL_CHP_UALPHA ,
/* Y	89 */	MBFL_CHP_UALPHA ,
/* Z	90 */	MBFL_CHP_UALPHA ,
/* [	91 */	MBFL_CHP_MMHQENC | MBFL_CHP_MSPECIAL ,
/* \	92 */	MBFL_CHP_MMHQENC | MBFL_CHP_MSPECIAL ,
/* ]	93 */	MBFL_CHP_MMHQENC | MBFL_CHP_MSPECIAL ,
/* ^	94 */	MBFL_CHP_MMHQENC ,
/* _	95 */	MBFL_CHP_MMHQENC ,
/* `	96 */	MBFL_CHP_MMHQENC ,
/* a	97 */	MBFL_CHP_LALPHA ,
/* b	98 */	MBFL_CHP_LALPHA ,
/* c	99 */	MBFL_CHP_LALPHA ,
/* d	100 */	MBFL_CHP_LALPHA ,
/* e	101 */	MBFL_CHP_LALPHA ,
/* f	102 */	MBFL_CHP_LALPHA ,
/* g	103 */	MBFL_CHP_LALPHA ,
/* h	104 */	MBFL_CHP_LALPHA ,
/* i	105 */	MBFL_CHP_LALPHA ,
/* j	106 */	MBFL_CHP_LALPHA ,
/* k	107 */	MBFL_CHP_LALPHA ,
/* l	108 */	MBFL_CHP_LALPHA ,
/* m	109 */	MBFL_CHP_LALPHA ,
/* n	110 */	MBFL_CHP_LALPHA ,
/* o	111 */	MBFL_CHP_LALPHA ,
/* p	112 */	MBFL_CHP_LALPHA ,
/* q	113 */	MBFL_CHP_LALPHA ,
/* r	114 */	MBFL_CHP_LALPHA ,
/* s	115 */	MBFL_CHP_LALPHA ,
/* t	116 */	MBFL_CHP_LALPHA ,
/* u	117 */	MBFL_CHP_LALPHA ,
/* v	118 */	MBFL_CHP_LALPHA ,
/* w	119 */	MBFL_CHP_LALPHA ,
/* x	120 */	MBFL_CHP_LALPHA ,
/* y	121 */	MBFL_CHP_LALPHA ,
/* z	122 */	MBFL_CHP_LALPHA ,
/* {	123 */	MBFL_CHP_MMHQENC ,
/* |	124 */	MBFL_CHP_MMHQENC ,
/* }	125 */	MBFL_CHP_MMHQENC ,
/* ~	126 */	MBFL_CHP_MMHQENC ,
/* DEL	127 */	MBFL_CHP_MMHQENC
};
