
#include "peg.hpp"
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/

ROMDATA UCHAR uctraimBitmap[3440] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x07,0xff,0xff,0xcf,0xff,0xff,0x9f,0xff,0xff,0x3f,0xff,
0xfe,0x7f,0xff,0xfc,0xff,0xff,0xf8,0x00,0x00,0x07,0xff,0xff,0xcf,0xff,0xff,0x9f,
0xff,0xff,0x3f,0xff,0xfe,0x7f,0xff,0xfc,0xff,0xff,0xf8,0x00,0x00,0x07,0xfc,0x7f,
0xcf,0xe2,0x3f,0x9f,0xfb,0xff,0x3f,0xe3,0xfe,0x7f,0xc7,0xfc,0xff,0xef,0xf8,0x00,
0x00,0x07,0xfe,0xff,0xcf,0xf7,0x7f,0x9f,0xf3,0xff,0x3f,0xdd,0xfe,0x7f,0xbb,0xfc,
0xff,0xcf,0xf8,0x00,0x00,0x07,0xfe,0xff,0xcf,0xf7,0x7f,0x9f,0xfb,0xff,0x3f,0xfd,
0xfe,0x7f,0xfb,0xfc,0xff,0xaf,0xf8,0x00,0x00,0x07,0xfe,0xff,0xcf,0xf7,0x7f,0x9f,
0xfb,0xff,0x3f,0xfb,0xfe,0x7f,0xe7,0xfc,0xff,0x6f,0xf8,0x00,0x00,0x07,0xfe,0xff,
0xcf,0xf7,0x7f,0x9f,0xfb,0xff,0x3f,0xf7,0xfe,0x7f,0xfb,0xfc,0xff,0x07,0xf8,0x00,
0x00,0x07,0xfe,0xff,0xcf,0xf7,0x7f,0x9f,0xfb,0xff,0x3f,0xef,0xfe,0x7f,0xbb,0xfc,
0xff,0xef,0xf8,0x00,0x00,0x07,0xfc,0x7f,0xcf,0xe2,0x3f,0x9f,0xf1,0xff,0x3f,0xc1,
0xfe,0x7f,0xc7,0xfc,0xff,0xef,0xf8,0x00,0x00,0x07,0xff,0xff,0xcf,0xff,0xff,0x9f,
0xff,0xff,0x3f,0xff,0xfe,0x7f,0xff,0xfc,0xff,0xff,0xf8,0x00,0x00,0x07,0xff,0xff,
0xcf,0xff,0xff,0x9f,0xff,0xff,0x3f,0xff,0xfe,0x7f,0xff,0xfc,0xff,0xff,0xf8,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x07,0xff,0xff,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xe0,0x00,0x60,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7f,0xf7,0xe0,0x02,
0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x7f,0xf7,0xe0,0x06,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x7f,0xf7,0xe0,0x02,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7f,0xf7,0xe0,0x02,0x60,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7d,0xf4,0x00,0x07,
0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x79,0xf4,0x00,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x7d,0xf5,0x10,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7d,0xf5,0x10,0x00,0x60,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7d,0xf5,0x10,0x00,
0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x7d,0xf5,0xf0,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x78,0xf5,0x10,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7f,0xf5,0x10,0x00,0x60,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7f,0xf5,0x10,0x00,
0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x7f,0xf4,0x00,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x7f,0xf4,0x00,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xff,0xff,0xe0,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xff,0xff,
0xe0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x07,0xff,0xff,0xcf,0xff,0xff,0x80,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x68,0x00,0x00,0xc0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7f,0xf4,0x00,0x07,
0x68,0x00,0x02,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x7f,0xf4,0x00,0x01,0x68,0x00,0x06,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x7f,0xf4,0x00,0x03,0x68,0x00,0x0a,0xc0,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7f,0xf4,0x00,0x01,0x68,0x00,0x0e,0xc0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0xf4,0x00,0x07,
0x68,0x00,0x02,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x77,0x74,0x00,0x00,0x68,0x00,0x00,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x7f,0x75,0x04,0x00,0x6b,0xc0,0x00,0xc0,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7e,0xf5,0x00,0x00,0x6a,0x20,0x00,0xc0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7d,0xf5,0x04,0x00,
0x6a,0x27,0x00,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x7b,0xf5,0x04,0x00,0x6b,0xc8,0x80,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x70,0x75,0x04,0x00,0x6a,0x2f,0x80,0xc0,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7f,0xf5,0x04,0x00,0x6a,0x28,0x00,0xc0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7f,0xf5,0xf4,0x00,
0x6b,0xc7,0x00,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x7f,0xf4,0x00,0x00,0x68,0x00,0x00,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x7f,0xf4,0x00,0x00,0x68,0x00,0x00,0xc0,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xff,0xff,0xef,0xff,0xff,0xc0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xff,0xff,
0xe7,0xff,0xff,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x07,0xff,0xff,0xcf,0xff,0xff,0x80,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x68,0x00,0x00,0xc0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7f,0xf4,0x00,0x22,
0x68,0x00,0x4e,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x7f,0xf4,0x00,0x66,0x68,0x00,0xc2,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x7f,0xf4,0x00,0x22,0x68,0x00,0x4e,0xc0,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7f,0xf4,0x00,0x22,0x68,0x00,0x48,0xc0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0xf4,0x00,0x77,
0x68,0x00,0xee,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x77,0x74,0x00,0x00,0x68,0x00,0x00,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x7f,0x75,0x10,0x00,0x6a,0x20,0x00,0xc0,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0xf5,0x10,0x00,0x6a,0x20,0x00,0xc0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7f,0x75,0x93,0x80,
0x6b,0x67,0x80,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x77,0x75,0x50,0x40,0x6a,0xa8,0x80,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x78,0xf5,0x33,0xc0,0x6a,0x28,0x80,0xc0,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7f,0xf5,0x14,0x40,0x6a,0x27,0x80,0xc0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7f,0xf5,0x13,0xc0,
0x6a,0x20,0x80,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x7f,0xf4,0x00,0x00,0x68,0x07,0x00,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x7f,0xf4,0x00,0x00,0x68,0x00,0x00,0xc0,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xff,0xff,0xef,0xff,0xff,0xc0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xff,0xff,
0xe7,0xff,0xff,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x07,0xff,0xff,0xcf,0xff,0xff,0x9f,0xff,0xff,0x3f,0xff,
0xfe,0x7f,0xff,0xfc,0xff,0xff,0xf8,0x00,0x00,0x04,0x00,0x00,0x68,0x00,0x00,0xd0,
0x00,0x01,0xa0,0x00,0x03,0x40,0x00,0x06,0x80,0x00,0x0c,0x00,0x7f,0xf4,0x00,0x27,
0x68,0x00,0xee,0xd0,0x01,0xc9,0xa0,0x03,0xbb,0x40,0x07,0x76,0x80,0x0e,0x2c,0x00,
0x7f,0xf4,0x00,0x65,0x68,0x00,0x2a,0xd0,0x00,0x59,0xa0,0x00,0x8b,0x40,0x01,0x16,
0x80,0x02,0x6c,0x00,0x7f,0xf4,0x00,0x27,0x68,0x00,0xea,0xd0,0x01,0xc9,0xa0,0x03,
0xbb,0x40,0x07,0x76,0x80,0x0e,0xac,0x00,0x7f,0xf4,0x00,0x21,0x68,0x00,0x8a,0xd0,
0x01,0x09,0xa0,0x02,0x23,0x40,0x04,0x16,0x80,0x08,0xec,0x00,0x7e,0xf4,0x00,0x77,
0x68,0x00,0xee,0xd0,0x01,0xdd,0xa0,0x03,0xbb,0x40,0x07,0x76,0x80,0x0e,0x2c,0x00,
0x7c,0xf4,0x00,0x00,0x68,0x00,0x00,0xd0,0x00,0x01,0xa0,0x00,0x03,0x40,0x00,0x06,
0x80,0x00,0x0c,0x00,0x7a,0xf5,0x10,0x00,0x69,0xc0,0x00,0xd3,0x80,0x01,0xaf,0xa0,
0x03,0x51,0x00,0x06,0x9c,0x00,0x0c,0x00,0x76,0xf5,0x20,0x00,0x6a,0x20,0x00,0xd4,
0x40,0x01,0xa2,0x00,0x03,0x51,0x00,0x06,0xa2,0x00,0x0c,0x00,0x70,0x75,0x40,0x00,
0x6a,0x07,0x00,0xd4,0x0e,0x01,0xa2,0x20,0x03,0x51,0x00,0x06,0xa0,0xb0,0x0c,0x00,
0x7e,0xf5,0x80,0x00,0x6a,0x00,0x80,0xd3,0x90,0x01,0xa2,0x20,0x03,0x4a,0x00,0x06,
0xa0,0xc0,0x0c,0x00,0x7e,0xf5,0x40,0x00,0x6a,0x07,0x80,0xd0,0x50,0x01,0xa2,0x20,
0x03,0x4a,0x00,0x06,0xa0,0x80,0x0c,0x00,0x7f,0xf5,0x20,0x00,0x6a,0x28,0x80,0xd4,
0x51,0x01,0xa2,0x20,0x03,0x44,0x00,0x06,0xa2,0x80,0x0c,0x00,0x7f,0xf5,0x10,0x00,
0x69,0xc7,0x80,0xd3,0x8e,0x01,0xa2,0x20,0x03,0x44,0x00,0x06,0x9c,0x80,0x0c,0x00,
0x7f,0xf4,0x00,0x00,0x68,0x00,0x00,0xd0,0x00,0x01,0xa0,0x00,0x03,0x40,0x00,0x06,
0x80,0x00,0x0c,0x00,0x7f,0xf4,0x00,0x00,0x68,0x00,0x00,0xd0,0x00,0x01,0xa0,0x00,
0x03,0x40,0x00,0x06,0x80,0x00,0x0c,0x00,0x00,0x07,0xff,0xff,0xef,0xff,0xff,0xdf,
0xff,0xff,0xbf,0xff,0xff,0x7f,0xff,0xfe,0xff,0xff,0xfc,0x00,0x00,0x03,0xff,0xff,
0xe7,0xff,0xff,0xcf,0xff,0xff,0x9f,0xff,0xff,0x3f,0xff,0xfe,0x7f,0xff,0xfc,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x07,0xff,0xff,0xcf,0xff,0xff,0x9f,0xff,0xff,0x3f,0xff,
0xfe,0x7f,0xff,0xfc,0xff,0xff,0xf8,0x00,0x00,0x04,0x00,0x00,0x68,0x00,0x00,0xd0,
0x00,0x01,0xa0,0x00,0x03,0x40,0x00,0x06,0x80,0x00,0x0c,0x00,0x7f,0xf4,0x00,0x77,
0x68,0x00,0xee,0xd0,0x01,0xdd,0xa0,0x00,0xbb,0x40,0x01,0x26,0x80,0x02,0xec,0x00,
0x7f,0xf4,0x00,0x11,0x68,0x00,0x2a,0xd0,0x01,0x05,0xa0,0x01,0xab,0x40,0x03,0x66,
0x80,0x06,0x2c,0x00,0x7f,0xf4,0x00,0x32,0x68,0x00,0x6e,0xd0,0x01,0xc9,0xa0,0x02,
0xab,0x40,0x05,0x26,0x80,0x0a,0xec,0x00,0x7f,0xf4,0x00,0x12,0x68,0x00,0x2a,0xd0,
0x00,0x49,0xa0,0x03,0xab,0x40,0x07,0x26,0x80,0x0e,0x8c,0x00,0x70,0x74,0x00,0x72,
0x68,0x00,0xee,0xd0,0x01,0xc9,0xa0,0x00,0xbb,0x40,0x01,0x76,0x80,0x02,0xec,0x00,
0x77,0xf4,0x00,0x00,0x68,0x00,0x00,0xd0,0x00,0x01,0xa0,0x00,0x03,0x40,0x00,0x06,
0x80,0x00,0x0c,0x00,0x70,0xf5,0xe4,0x00,0x69,0xc0,0x00,0xd4,0x40,0x01,0xaf,0x80,
0x03,0x51,0x40,0x06,0xa2,0x00,0x0c,0x00,0x7f,0x75,0x14,0x00,0x6a,0x20,0x00,0xd4,
0x40,0x01,0xa0,0x80,0x03,0x51,0x40,0x06,0xb6,0x00,0x0c,0x00,0x7f,0x75,0x17,0x80,
0x6a,0x0b,0x00,0xd2,0x80,0x01,0xa1,0x2c,0x03,0x59,0x40,0x06,0xaa,0x70,0x0c,0x00,
0x77,0x75,0xe4,0x40,0x69,0xcc,0x00,0xd2,0x80,0x01,0xa2,0x30,0x03,0x55,0x78,0x06,
0xaa,0x88,0x0c,0x00,0x78,0xf5,0x24,0x40,0x68,0x28,0x00,0xd1,0x00,0x01,0xa4,0x20,
0x03,0x53,0x44,0x06,0xa2,0x88,0x0c,0x00,0x7f,0xf5,0x14,0x40,0x6a,0x28,0x00,0xd1,
0x00,0x01,0xa8,0x20,0x03,0x51,0x44,0x06,0xa2,0x88,0x0c,0x00,0x7f,0xf5,0x17,0x80,
0x69,0xc8,0x00,0xd1,0x00,0x01,0xaf,0xa0,0x03,0x51,0x78,0x06,0xa2,0x70,0x0c,0x00,
0x7f,0xf4,0x00,0x00,0x68,0x00,0x00,0xd0,0x00,0x01,0xa0,0x00,0x03,0x40,0x00,0x06,
0x80,0x00,0x0c,0x00,0x7f,0xf4,0x00,0x00,0x68,0x00,0x00,0xd0,0x00,0x01,0xa0,0x00,
0x03,0x40,0x00,0x06,0x80,0x00,0x0c,0x00,0x00,0x07,0xff,0xff,0xef,0xff,0xff,0xdf,
0xff,0xff,0xbf,0xff,0xff,0x7f,0xff,0xfe,0xff,0xff,0xfc,0x00,0x00,0x03,0xff,0xff,
0xe7,0xff,0xff,0xcf,0xff,0xff,0x9f,0xff,0xff,0x3f,0xff,0xfe,0x7f,0xff,0xfc,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x07,0xff,0xff,0xcf,0xff,0xff,0x9f,0xff,0xff,0x3f,0xff,
0xfe,0x7f,0xff,0xfc,0xff,0xff,0xf8,0x00,0x00,0x04,0x00,0x00,0x68,0x00,0x00,0xd0,
0x00,0x01,0xa0,0x00,0x03,0x40,0x00,0x06,0x80,0x00,0x0c,0x00,0x7f,0xf4,0x00,0x77,
0x68,0x00,0xee,0xd0,0x01,0xdd,0xa0,0x03,0xbb,0x40,0x07,0x76,0x80,0x0e,0x2c,0x00,
0x7f,0xf4,0x00,0x44,0x68,0x00,0x88,0xd0,0x01,0x05,0xa0,0x00,0x8b,0x40,0x01,0x16,
0x80,0x02,0x6c,0x00,0x7f,0xf4,0x00,0x77,0x68,0x00,0xee,0xd0,0x01,0xc9,0xa0,0x01,
0x3b,0x40,0x02,0x76,0x80,0x04,0xac,0x00,0x7f,0xf4,0x00,0x11,0x68,0x00,0x2a,0xd0,
0x00,0x49,0xa0,0x01,0x23,0x40,0x02,0x16,0x80,0x04,0xec,0x00,0x7c,0xf4,0x00,0x77,
0x68,0x00,0xee,0xd0,0x01,0xc9,0xa0,0x01,0x3b,0x40,0x02,0x76,0x80,0x04,0x2c,0x00,
0x7b,0xf4,0x00,0x00,0x68,0x00,0x00,0xd0,0x00,0x01,0xa0,0x00,0x03,0x40,0x00,0x06,
0x80,0x00,0x0c,0x00,0x77,0xf4,0xe0,0x00,0x6b,0xc0,0x00,0xd4,0x04,0x01,0xa8,0x8c,
0x03,0x5f,0x00,0x06,0xa2,0x00,0x0c,0x00,0x70,0xf5,0x10,0x00,0x6a,0x20,0x00,0xd4,
0x15,0x01,0xa8,0x90,0x03,0x44,0x00,0x06,0xa2,0x00,0x0c,0x00,0x77,0x75,0x03,0xc0,
0x6a,0x27,0x00,0xd4,0x0e,0x01,0xa8,0xbc,0x03,0x44,0x38,0x06,0xa2,0x00,0x0c,0x00,
0x77,0x75,0x04,0x00,0x6b,0xc0,0x80,0xd4,0x15,0x01,0xaf,0x90,0x03,0x44,0x04,0x06,
0xa2,0x00,0x0c,0x00,0x78,0xf5,0x03,0x80,0x6a,0x27,0x80,0xd4,0x04,0x01,0xa8,0x90,
0x03,0x44,0x3c,0x06,0xaa,0x00,0x0c,0x00,0x7f,0xf5,0x10,0x40,0x6a,0x28,0x80,0xd4,
0x00,0x01,0xa8,0x90,0x03,0x44,0x44,0x06,0xaa,0x00,0x0c,0x00,0x7f,0xf4,0xe7,0x80,
0x6b,0xc7,0x80,0xd7,0xc0,0x01,0xa8,0x90,0x03,0x44,0x3c,0x06,0x94,0x00,0x0c,0x00,
0x7f,0xf4,0x00,0x00,0x68,0x00,0x00,0xd0,0x00,0x01,0xa0,0x00,0x03,0x40,0x00,0x06,
0x80,0x00,0x0c,0x00,0x7f,0xf4,0x00,0x00,0x68,0x00,0x00,0xd0,0x00,0x01,0xa0,0x00,
0x03,0x40,0x00,0x06,0x80,0x00,0x0c,0x00,0x00,0x07,0xff,0xff,0xef,0xff,0xff,0xdf,
0xff,0xff,0xbf,0xff,0xff,0x7f,0xff,0xfe,0xff,0xff,0xfc,0x00,0x00,0x03,0xff,0xff,
0xe7,0xff,0xff,0xcf,0xff,0xff,0x9f,0xff,0xff,0x3f,0xff,0xfe,0x7f,0xff,0xfc,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x07,0xff,0xff,0xcf,0xff,0xff,0x9f,0xff,0xff,0x3f,0xff,
0xfe,0x7f,0xff,0xfc,0xff,0xff,0xf8,0x00,0x00,0x04,0x00,0x00,0x68,0x00,0x00,0xd0,
0x00,0x01,0xa0,0x00,0x03,0x40,0x00,0x06,0x80,0x00,0x0c,0x00,0x7f,0xf4,0x00,0x77,
0x68,0x00,0xee,0xd0,0x01,0xdd,0xa0,0x13,0x8b,0x40,0x27,0x76,0x80,0x4e,0xec,0x00,
0x7f,0xf4,0x00,0x51,0x68,0x00,0xaa,0xd0,0x01,0x55,0xa0,0x32,0x9b,0x40,0x65,0x46,
0x80,0xca,0x8c,0x00,0x7f,0xf4,0x00,0x72,0x68,0x00,0xee,0xd0,0x01,0xdd,0xa0,0x12,
0xab,0x40,0x25,0x76,0x80,0x4a,0xec,0x00,0x7f,0xf4,0x00,0x52,0x68,0x00,0xaa,0xd0,
0x01,0x45,0xa0,0x12,0xbb,0x40,0x25,0x16,0x80,0x4a,0xac,0x00,0x70,0x74,0x00,0x72,
0x68,0x00,0xee,0xd0,0x01,0xdd,0xa0,0x3b,0x8b,0x40,0x77,0x76,0x80,0xee,0xec,0x00,
0x7f,0x74,0x00,0x00,0x68,0x00,0x00,0xd0,0x00,0x01,0xa0,0x00,0x03,0x40,0x00,0x06,
0x80,0x00,0x0c,0x00,0x7e,0xf5,0xf0,0x00,0x6b,0xc0,0x00,0xd3,0x84,0x01,0xaf,0x0c,
0x03,0x5e,0x40,0x06,0x9c,0x00,0x0c,0x00,0x7e,0xf5,0x00,0x00,0x6a,0x20,0x00,0xd4,
0x55,0x01,0xa8,0x90,0x03,0x51,0x40,0x06,0xa2,0x00,0x0c,0x00,0x7d,0xf5,0x05,0x80,
0x6a,0x27,0x00,0xd4,0x4e,0x01,0xa8,0xbc,0x03,0x51,0x78,0x06,0xa0,0x78,0x0c,0x00,
0x7d,0xf5,0xc6,0x00,0x6b,0xc0,0x80,0xd7,0xd5,0x01,0xaf,0x10,0x03,0x51,0x44,0x06,
0xbc,0x88,0x0c,0x00,0x7d,0xf5,0x04,0x00,0x6a,0x47,0x80,0xd4,0x44,0x01,0xa9,0x10,
0x03,0x51,0x44,0x06,0x82,0x88,0x0c,0x00,0x7f,0xf5,0x04,0x00,0x6a,0x28,0x80,0xd4,
0x40,0x01,0xa8,0x90,0x03,0x51,0x44,0x06,0xa2,0x78,0x0c,0x00,0x7f,0xf5,0x04,0x00,
0x6a,0x27,0x80,0xd4,0x40,0x01,0xa8,0x90,0x03,0x5e,0x78,0x06,0x9c,0x08,0x0c,0x00,
0x7f,0xf4,0x00,0x00,0x68,0x00,0x00,0xd0,0x00,0x01,0xa0,0x00,0x03,0x40,0x00,0x06,
0x80,0x70,0x0c,0x00,0x7f,0xf4,0x00,0x00,0x68,0x00,0x00,0xd0,0x00,0x01,0xa0,0x00,
0x03,0x40,0x00,0x06,0x80,0x00,0x0c,0x00,0x00,0x07,0xff,0xff,0xef,0xff,0xff,0xdf,
0xff,0xff,0xbf,0xff,0xff,0x7f,0xff,0xfe,0xff,0xff,0xfc,0x00,0x00,0x03,0xff,0xff,
0xe7,0xff,0xff,0xcf,0xff,0xff,0x9f,0xff,0xff,0x3f,0xff,0xfe,0x7f,0xff,0xfc,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
PegBitmap gbtraimBitmap = { 0x00, 1, 160, 172, 0x000000ff, (UCHAR *) uctraimBitmap};

