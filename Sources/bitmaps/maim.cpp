
#include "peg.hpp"
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/

ROMDATA UCHAR ucmaimBitmap[3440] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x07,0xff,0xff,0xcf,0xff,0xff,0x9f,0xff,0xff,0x3f,0xff,
0xfe,0x7f,0xff,0xfc,0xff,0xff,0xf8,0x00,0x00,0x07,0xff,0xff,0xcf,0xff,0xff,0x9f,
0xff,0xff,0x3f,0xff,0xfe,0x7f,0xff,0xfc,0xff,0xff,0xf8,0x00,0x00,0x07,0xc4,0x47,
0xcf,0xc5,0xdf,0x9f,0xee,0xff,0x3f,0x74,0x7e,0x7b,0xa2,0x3c,0xff,0x8f,0xf8,0x00,
0x00,0x07,0xee,0xef,0xcf,0xed,0xdf,0x9f,0xee,0xff,0x3f,0x76,0xfe,0x7b,0xb7,0x7c,
0xff,0x77,0xf8,0x00,0x00,0x07,0xee,0xef,0xcf,0xed,0xdf,0x9f,0xee,0xff,0x3f,0x76,
0xfe,0x7b,0xb7,0x7c,0xff,0x67,0xf8,0x00,0x00,0x07,0xee,0xef,0xcf,0xee,0xbf,0x9f,
0xf5,0xff,0x3f,0xae,0xfe,0x7d,0x77,0x7c,0xff,0x57,0xf8,0x00,0x00,0x07,0xee,0xef,
0xcf,0xee,0xbf,0x9f,0xf5,0xff,0x3f,0xae,0xfe,0x7d,0x77,0x7c,0xff,0x37,0xf8,0x00,
0x00,0x07,0xee,0xef,0xcf,0xef,0x7f,0x9f,0xfb,0xff,0x3f,0xde,0xfe,0x7e,0xf7,0x7c,
0xff,0x77,0xf8,0x00,0x00,0x07,0xc4,0x47,0xcf,0xc7,0x7f,0x9f,0xfb,0xff,0x3f,0xdc,
0x7e,0x7e,0xe2,0x3c,0xff,0x8f,0xf8,0x00,0x00,0x07,0xff,0xff,0xcf,0xff,0xff,0x9f,
0xff,0xff,0x3f,0xff,0xfe,0x7f,0xff,0xfc,0xff,0xff,0xf8,0x00,0x00,0x07,0xff,0xff,
0xcf,0xff,0xff,0x9f,0xff,0xff,0x3f,0xff,0xfe,0x7f,0xff,0xfc,0xff,0xff,0xf8,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xff,0xff,0xf8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfc,0x00,0x0c,0x00,0x7f,0xf0,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfc,0x00,0xec,0x00,
0x7f,0xf0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xfc,0x00,0x2c,0x00,0x7f,0xf0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xfc,0x00,0xec,0x00,0x7f,0xf0,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfc,0x00,0x8c,0x00,0x7d,0xf0,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0xec,0x00,
0x79,0xf0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x80,0x00,0x0c,0x00,0x7d,0xf0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xa2,0x00,0x0c,0x00,0x7d,0xf0,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa2,0x00,0x0c,0x00,0x7d,0xf0,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa2,0x70,0x0c,0x00,
0x7d,0xf0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xbe,0x88,0x0c,0x00,0x78,0xf0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xa2,0xf8,0x0c,0x00,0x7f,0xf0,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa2,0x80,0x0c,0x00,0x7f,0xf0,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa2,0x70,0x0c,0x00,
0x7f,0xf0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x80,0x00,0x0c,0x00,0x7f,0xf0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x80,0x00,0x0c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xfc,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7f,0xff,0xfc,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x07,0xff,0xff,0xcf,0xff,0xff,0x9f,0xff,0xff,0x3f,0xff,
0xfe,0x7f,0xff,0xfc,0xff,0xff,0xf8,0x00,0x00,0x07,0xe0,0x00,0x6f,0xc0,0x00,0xdf,
0x80,0x01,0xbf,0x00,0x03,0x7e,0x00,0x06,0xfc,0x00,0x0c,0x00,0x7f,0xf7,0xc0,0x07,
0x6f,0xc0,0x0e,0xdf,0x80,0x1d,0xbf,0x00,0x3b,0x7e,0x00,0x76,0xfc,0x04,0xec,0x00,
0x7f,0xf7,0x80,0x04,0x6f,0xc0,0x08,0xdf,0x80,0x05,0xbf,0x00,0x2b,0x7e,0x00,0x56,
0xfc,0x0c,0xac,0x00,0x7f,0xf7,0x00,0x07,0x6f,0xc0,0x0e,0xdf,0x80,0x09,0xbf,0x00,
0x3b,0x7e,0x00,0x76,0xfc,0x04,0xac,0x00,0x7f,0xf6,0x00,0x01,0x6f,0xc0,0x0a,0xdf,
0x80,0x09,0xbf,0x00,0x2b,0x7e,0x00,0x16,0xfc,0x04,0xac,0x00,0x78,0xf4,0x00,0x07,
0x68,0x00,0x0e,0xd0,0x00,0x09,0xa0,0x00,0x3b,0x40,0x00,0x76,0x80,0x0e,0xec,0x00,
0x77,0x74,0x00,0x00,0x68,0x00,0x00,0xd0,0x00,0x01,0xa0,0x00,0x03,0x40,0x00,0x06,
0x80,0x00,0x0c,0x00,0x7f,0x75,0xe0,0x00,0x69,0xc0,0x00,0xd4,0x40,0x01,0xa7,0x00,
0x03,0x5f,0x00,0x06,0xa2,0x00,0x0c,0x00,0x7e,0xf5,0x10,0x00,0x6a,0x20,0x00,0xd4,
0x40,0x01,0xa8,0x80,0x03,0x50,0x00,0x06,0xa2,0x00,0x0c,0x00,0x7d,0xf5,0x10,0x00,
0x6a,0x00,0x00,0xd6,0x40,0x01,0xa8,0x80,0x03,0x50,0x00,0x06,0xb2,0x70,0x0c,0x00,
0x7b,0xf5,0xe0,0x00,0x6a,0x00,0x00,0xd5,0x40,0x01,0xa8,0x80,0x03,0x5e,0x00,0x06,
0xaa,0x88,0x0c,0x00,0x70,0x75,0x10,0x00,0x6a,0x00,0x00,0xd4,0xc0,0x01,0xa8,0x80,
0x03,0x50,0x00,0x06,0xa6,0xf8,0x0c,0x00,0x7f,0xf5,0x10,0x00,0x6a,0x20,0x00,0xd4,
0x40,0x01,0xa8,0x80,0x03,0x50,0x00,0x06,0xa2,0x80,0x0c,0x00,0x7f,0xf5,0xe0,0x00,
0x69,0xc0,0x00,0xd4,0x40,0x01,0xa7,0x00,0x03,0x50,0x00,0x06,0xa2,0x70,0x0c,0x00,
0x7f,0xf4,0x00,0x00,0x68,0x00,0x00,0xd0,0x00,0x01,0xa0,0x00,0x03,0x40,0x00,0x06,
0x80,0x00,0x0c,0x00,0x7f,0xf4,0x00,0x00,0x68,0x00,0x00,0xd0,0x00,0x01,0xa0,0x00,
0x03,0x40,0x00,0x06,0x80,0x00,0x0c,0x00,0x00,0x07,0xff,0xff,0xef,0xff,0xff,0xdf,
0xff,0xff,0xbf,0xff,0xff,0x7f,0xff,0xfe,0xff,0xff,0xfc,0x00,0x00,0x03,0xff,0xff,
0xe7,0xff,0xff,0xcf,0xff,0xff,0x9f,0xff,0xff,0x3f,0xff,0xfe,0x7f,0xff,0xfc,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x07,0xff,0xff,0xcf,0xff,0xff,0x9f,0xff,0xff,0x3f,0xff,
0xfe,0x7f,0xff,0xfc,0xff,0xff,0xf8,0x00,0x00,0x04,0x00,0x00,0x6f,0xc0,0x00,0xdf,
0x80,0x01,0xbf,0x00,0x03,0x7e,0x00,0x06,0xfc,0x00,0x0c,0x00,0x7f,0xf4,0x00,0x27,
0x6f,0x80,0x42,0xdf,0x80,0x9d,0xbf,0x01,0x3b,0x7e,0x02,0x76,0xfc,0x04,0xec,0x00,
0x7f,0xf4,0x00,0x61,0x6f,0x00,0xc6,0xdf,0x81,0x91,0xbf,0x03,0x23,0x7e,0x06,0x16,
0xfc,0x0c,0xac,0x00,0x7f,0xf4,0x00,0x27,0x6e,0x00,0x4a,0xdf,0x80,0x9d,0xbf,0x01,
0x3b,0x7e,0x02,0x26,0xfc,0x04,0xec,0x00,0x7f,0xf4,0x00,0x21,0x6c,0x00,0x4e,0xdf,
0x80,0x85,0xbf,0x01,0x2b,0x7e,0x02,0x26,0xfc,0x04,0xac,0x00,0x78,0xf4,0x00,0x77,
0x68,0x00,0xe2,0xd0,0x01,0xdd,0xa0,0x03,0xbb,0x40,0x07,0x26,0x80,0x0e,0xec,0x00,
0x77,0x74,0x00,0x00,0x68,0x00,0x00,0xd0,0x00,0x01,0xa0,0x00,0x03,0x40,0x00,0x06,
0x80,0x00,0x0c,0x00,0x7f,0x74,0xe4,0x00,0x69,0xc8,0x00,0xd7,0x80,0x01,0xa7,0x00,
0x03,0x4e,0x60,0x06,0x9c,0x00,0x0c,0x00,0x7c,0xf5,0x14,0x00,0x6a,0x20,0x00,0xd4,
0x40,0x01,0xa8,0x80,0x03,0x51,0x20,0x06,0xa2,0x00,0x0c,0x00,0x7f,0x75,0x14,0x00,
0x6a,0x08,0x00,0xd4,0x40,0x01,0xa8,0x00,0x03,0x50,0x20,0x06,0xa2,0xb0,0x0c,0x00,
0x77,0x75,0xf4,0x00,0x69,0xc8,0x00,0xd7,0x80,0x01,0xa7,0x00,0x03,0x50,0x20,0x06,
0xbe,0xc0,0x0c,0x00,0x78,0xf5,0x14,0x00,0x68,0x28,0x00,0xd4,0x00,0x01,0xa0,0x80,
0x03,0x50,0x20,0x06,0xa2,0x80,0x0c,0x00,0x7f,0xf5,0x14,0x00,0x6a,0x28,0x00,0xd4,
0x00,0x01,0xa8,0x80,0x03,0x51,0x20,0x06,0xa2,0x80,0x0c,0x00,0x7f,0xf5,0x14,0x00,
0x69,0xc8,0x00,0xd4,0x00,0x01,0xa7,0x00,0x03,0x4e,0x70,0x06,0xa2,0x80,0x0c,0x00,
0x7f,0xf4,0x00,0x00,0x68,0x00,0x00,0xd0,0x00,0x01,0xa0,0x00,0x03,0x40,0x00,0x06,
0x80,0x00,0x0c,0x00,0x7f,0xf4,0x00,0x00,0x68,0x00,0x00,0xd0,0x00,0x01,0xa0,0x00,
0x03,0x40,0x00,0x06,0x80,0x00,0x0c,0x00,0x00,0x07,0xff,0xff,0xef,0xff,0xff,0xdf,
0xff,0xff,0xbf,0xff,0xff,0x7f,0xff,0xfe,0xff,0xff,0xfc,0x00,0x00,0x03,0xff,0xff,
0xe7,0xff,0xff,0xcf,0xff,0xff,0x9f,0xff,0xff,0x3f,0xff,0xfe,0x7f,0xff,0xfc,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x07,0xff,0xff,0xcf,0xff,0xff,0x9f,0xff,0xff,0x3f,0xff,
0xfe,0x7f,0xff,0xfc,0xff,0xff,0xf8,0x00,0x00,0x04,0x00,0x00,0x6f,0xc0,0x00,0xdf,
0x80,0x01,0xbf,0x00,0x03,0x7e,0x00,0x06,0xfc,0x00,0x0c,0x00,0x7f,0xf4,0x00,0x72,
0x6f,0x80,0xee,0xdf,0x01,0xdd,0xbf,0x03,0x8b,0x7e,0x07,0x76,0xfc,0x0e,0xec,0x00,
0x7f,0xf4,0x00,0x16,0x6f,0x00,0x22,0xde,0x00,0x45,0xbf,0x00,0x9b,0x7e,0x01,0x46,
0xfc,0x02,0x8c,0x00,0x7f,0xf4,0x00,0x72,0x6e,0x00,0xee,0xdc,0x01,0xdd,0xbf,0x03,
0xab,0x7e,0x07,0x76,0xfc,0x0e,0xec,0x00,0x7f,0xf4,0x00,0x12,0x6c,0x00,0x28,0xd8,
0x00,0x45,0xbf,0x00,0xbb,0x7e,0x01,0x16,0xfc,0x02,0xac,0x00,0x7e,0xf4,0x00,0x77,
0x68,0x00,0xee,0xd0,0x01,0xdd,0xa0,0x03,0x8b,0x40,0x07,0x76,0x80,0x0e,0xec,0x00,
0x7c,0xf4,0x00,0x00,0x68,0x00,0x00,0xd0,0x00,0x01,0xa0,0x00,0x03,0x40,0x00,0x06,
0x80,0x00,0x0c,0x00,0x7a,0xf4,0xe0,0x00,0x69,0xc0,0x00,0xd3,0x80,0x01,0xa7,0x00,
0x03,0x5e,0x00,0x06,0xa2,0x00,0x0c,0x00,0x76,0xf5,0x10,0x00,0x6a,0x20,0x00,0xd4,
0x40,0x01,0xa8,0x80,0x03,0x51,0x00,0x06,0xa4,0x00,0x0c,0x00,0x70,0x75,0x03,0x80,
0x6a,0x07,0x00,0xd4,0x4f,0x01,0xa8,0x1c,0x03,0x51,0x58,0x06,0xa8,0xb0,0x0c,0x00,
0x7e,0xf5,0x30,0x40,0x6a,0x68,0x80,0xd7,0xd0,0x01,0xa7,0x22,0x03,0x5e,0x60,0x06,
0xb0,0xc0,0x0c,0x00,0x7e,0xf5,0x13,0xc0,0x6a,0x2f,0x80,0xd4,0x4e,0x01,0xa0,0xbe,
0x03,0x51,0x40,0x06,0xa8,0x80,0x0c,0x00,0x7f,0xf5,0x14,0x40,0x6a,0x28,0x00,0xd4,
0x41,0x01,0xa8,0xa0,0x03,0x51,0x40,0x06,0xa4,0x80,0x0c,0x00,0x7f,0xf4,0xe3,0xc0,
0x69,0xc7,0x00,0xd4,0x5e,0x01,0xa7,0x1c,0x03,0x5e,0x40,0x06,0xa2,0x80,0x0c,0x00,
0x7f,0xf4,0x00,0x00,0x68,0x00,0x00,0xd0,0x00,0x01,0xa0,0x00,0x03,0x40,0x00,0x06,
0x80,0x00,0x0c,0x00,0x7f,0xf4,0x00,0x00,0x68,0x00,0x00,0xd0,0x00,0x01,0xa0,0x00,
0x03,0x40,0x00,0x06,0x80,0x00,0x0c,0x00,0x00,0x07,0xff,0xff,0xef,0xff,0xff,0xdf,
0xff,0xff,0xbf,0xff,0xff,0x7f,0xff,0xfe,0xff,0xff,0xfc,0x00,0x00,0x03,0xff,0xff,
0xe7,0xff,0xff,0xcf,0xff,0xff,0x9f,0xff,0xff,0x3f,0xff,0xfe,0x7f,0xff,0xfc,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x07,0xff,0xff,0xcf,0xff,0xff,0x9f,0xff,0xff,0x3f,0xff,
0xfe,0x7f,0xff,0xfc,0xff,0xff,0xf8,0x00,0x00,0x04,0x00,0x00,0x68,0x00,0x00,0xdf,
0x80,0x01,0xbf,0x00,0x03,0x7e,0x00,0x06,0xfc,0x00,0x0c,0x00,0x7f,0xf4,0x00,0x17,
0x68,0x00,0xee,0xdf,0x01,0xc9,0xbe,0x03,0xbb,0x7e,0x07,0x76,0xfc,0x0e,0x2c,0x00,
0x7f,0xf4,0x00,0x35,0x68,0x00,0x8a,0xde,0x01,0x19,0xbc,0x02,0x0b,0x7e,0x04,0x16,
0xfc,0x08,0x6c,0x00,0x7f,0xf4,0x00,0x57,0x68,0x00,0xea,0xdc,0x01,0xc9,0xb8,0x03,
0xbb,0x7e,0x07,0x76,0xfc,0x0e,0xac,0x00,0x7f,0xf4,0x00,0x71,0x68,0x00,0x2a,0xd8,
0x00,0x49,0xb0,0x00,0xa3,0x7e,0x01,0x16,0xfc,0x02,0xec,0x00,0x70,0x74,0x00,0x17,
0x68,0x00,0xee,0xd0,0x01,0xdd,0xa0,0x03,0xbb,0x40,0x07,0x76,0x80,0x0e,0x2c,0x00,
0x77,0xf4,0x00,0x00,0x68,0x00,0x00,0xd0,0x00,0x01,0xa0,0x00,0x03,0x40,0x00,0x06,
0x80,0x00,0x0c,0x00,0x70,0xf4,0xe0,0x00,0x69,0xc0,0x00,0xd3,0x90,0x01,0xaf,0x80,
0x03,0x4e,0x00,0x06,0xa2,0x00,0x0c,0x00,0x7f,0x74,0x40,0x00,0x6a,0x20,0x00,0xd4,
0x50,0x01,0xa2,0x00,0x03,0x44,0x00,0x06,0xa2,0x00,0x0c,0x00,0x7f,0x74,0x47,0x80,
0x6a,0x0f,0x00,0xd4,0x1e,0x01,0xa2,0x1c,0x03,0x44,0x00,0x06,0x94,0x70,0x0c,0x00,
0x77,0x74,0x44,0x40,0x69,0xc8,0x80,0xd3,0x91,0x01,0xa2,0x22,0x03,0x44,0x00,0x06,
0x88,0x88,0x0c,0x00,0x78,0xf4,0x44,0x40,0x68,0x28,0x80,0xd0,0x51,0x01,0xa2,0x3e,
0x03,0x44,0x00,0x06,0x94,0xf8,0x0c,0x00,0x7f,0xf4,0x44,0x40,0x6a,0x28,0x80,0xd4,
0x51,0x01,0xa2,0x20,0x03,0x44,0x00,0x06,0xa2,0x80,0x0c,0x00,0x7f,0xf4,0xe4,0x40,
0x69,0xc8,0x80,0xd3,0x9e,0x01,0xa2,0x1c,0x03,0x4e,0x00,0x06,0xa2,0x70,0x0c,0x00,
0x7f,0xf4,0x00,0x00,0x68,0x00,0x00,0xd0,0x00,0x01,0xa0,0x00,0x03,0x40,0x00,0x06,
0x80,0x00,0x0c,0x00,0x7f,0xf4,0x00,0x00,0x68,0x00,0x00,0xd0,0x00,0x01,0xa0,0x00,
0x03,0x40,0x00,0x06,0x80,0x00,0x0c,0x00,0x00,0x07,0xff,0xff,0xef,0xff,0xff,0xdf,
0xff,0xff,0xbf,0xff,0xff,0x7f,0xff,0xfe,0xff,0xff,0xfc,0x00,0x00,0x03,0xff,0xff,
0xe7,0xff,0xff,0xcf,0xff,0xff,0x9f,0xff,0xff,0x3f,0xff,0xfe,0x7f,0xff,0xfc,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x07,0xff,0xff,0xcf,0xff,0xff,0x9f,0xff,0xff,0x3f,0xff,
0xfe,0x7f,0xff,0xfc,0xff,0xff,0xf8,0x00,0x00,0x04,0x00,0x00,0x68,0x00,0x00,0xd0,
0x00,0x01,0xbf,0x00,0x03,0x7e,0x00,0x06,0xfc,0x00,0x0c,0x00,0x7f,0xf4,0x00,0x72,
0x68,0x00,0xee,0xd0,0x01,0xdd,0xbe,0x03,0x8b,0x7e,0x07,0x76,0xfc,0x0e,0xec,0x00,
0x7f,0xf4,0x00,0x56,0x68,0x00,0xa2,0xd0,0x01,0x45,0xbc,0x02,0x9b,0x7e,0x05,0x46,
0xfc,0x0a,0x8c,0x00,0x7f,0xf4,0x00,0x72,0x68,0x00,0xee,0xd0,0x01,0xdd,0xb8,0x03,
0xab,0x7e,0x07,0x76,0xfc,0x0e,0xec,0x00,0x7f,0xf4,0x00,0x52,0x68,0x00,0xa8,0xd0,
0x01,0x45,0xb0,0x02,0xbb,0x7e,0x05,0x16,0xfc,0x0a,0xac,0x00,0x7c,0xf4,0x00,0x77,
0x68,0x00,0xee,0xd0,0x01,0xdd,0xa0,0x03,0x8b,0x40,0x07,0x76,0x80,0x0e,0xec,0x00,
0x7b,0xf4,0x00,0x00,0x68,0x00,0x00,0xd0,0x00,0x01,0xa0,0x00,0x03,0x40,0x00,0x06,
0x80,0x00,0x0c,0x00,0x77,0xf5,0xf4,0x00,0x6b,0xc8,0x00,0xd7,0x90,0x01,0xaf,0x00,
0x03,0x4e,0x20,0x06,0xbc,0x00,0x0c,0x00,0x70,0xf4,0x40,0x00,0x6a,0x28,0x00,0xd4,
0x40,0x01,0xa8,0x80,0x03,0x51,0x78,0x06,0xa2,0x00,0x0c,0x00,0x77,0x74,0x44,0x00,
0x6a,0x2f,0x00,0xd4,0x50,0x01,0xa8,0x9c,0x03,0x51,0x20,0x06,0xa2,0xf0,0x0c,0x00,
0x77,0x74,0x44,0x00,0x6b,0xc8,0x80,0xd7,0x90,0x01,0xaf,0x22,0x03,0x5f,0x20,0x06,
0xbc,0x88,0x0c,0x00,0x78,0xf4,0x44,0x00,0x6a,0x08,0x80,0xd4,0x50,0x01,0xa8,0x22,
0x03,0x51,0x20,0x06,0xa4,0x88,0x0c,0x00,0x7f,0xf4,0x44,0x00,0x6a,0x08,0x80,0xd4,
0x50,0x01,0xa8,0x22,0x03,0x51,0x20,0x06,0xa2,0x88,0x0c,0x00,0x7f,0xf4,0x44,0x00,
0x6a,0x0f,0x00,0xd7,0x90,0x01,0xa8,0x1c,0x03,0x51,0x18,0x06,0xa2,0x88,0x0c,0x00,
0x7f,0xf4,0x00,0x00,0x68,0x00,0x00,0xd0,0x00,0x01,0xa0,0x00,0x03,0x40,0x00,0x06,
0x80,0x00,0x0c,0x00,0x7f,0xf4,0x00,0x00,0x68,0x00,0x00,0xd0,0x00,0x01,0xa0,0x00,
0x03,0x40,0x00,0x06,0x80,0x00,0x0c,0x00,0x00,0x07,0xff,0xff,0xef,0xff,0xff,0xdf,
0xff,0xff,0xbf,0xff,0xff,0x7f,0xff,0xfe,0xff,0xff,0xfc,0x00,0x00,0x03,0xff,0xff,
0xe7,0xff,0xff,0xcf,0xff,0xff,0x9f,0xff,0xff,0x3f,0xff,0xfe,0x7f,0xff,0xfc,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x07,0xff,0xff,0xcf,0xff,0xff,0x9f,0xff,0xff,0x3f,0xff,
0xfe,0x7f,0xff,0xfc,0xff,0xff,0xf8,0x00,0x00,0x04,0x00,0x00,0x68,0x00,0x00,0xd0,
0x00,0x01,0xa0,0x00,0x03,0x7e,0x00,0x06,0xfc,0x00,0x0c,0x00,0x7f,0xf4,0x02,0x27,
0x68,0x04,0x42,0xd0,0x08,0x9d,0xa0,0x11,0x3b,0x7e,0x22,0x76,0xfc,0x44,0xec,0x00,
0x7f,0xf4,0x06,0x61,0x68,0x0c,0xc6,0xd0,0x19,0x91,0xa0,0x33,0x23,0x7e,0x66,0x16,
0xfc,0xcc,0xac,0x00,0x7f,0xf4,0x02,0x27,0x68,0x04,0x4a,0xd0,0x08,0x9d,0xa0,0x11,
0x3b,0x7e,0x22,0x26,0xfc,0x44,0xec,0x00,0x7f,0xf4,0x02,0x21,0x68,0x04,0x4e,0xd0,
0x08,0x85,0xa0,0x11,0x2b,0x7e,0x22,0x26,0xfc,0x44,0xac,0x00,0x70,0x74,0x07,0x77,
0x68,0x0e,0xe2,0xd0,0x1d,0xdd,0xa0,0x3b,0xbb,0x40,0x77,0x26,0x80,0xee,0xec,0x00,
0x7f,0x74,0x00,0x00,0x68,0x00,0x00,0xd0,0x00,0x01,0xa0,0x00,0x03,0x40,0x00,0x06,
0x80,0x00,0x0c,0x00,0x7e,0xf5,0x10,0x00,0x6b,0xec,0x00,0xd4,0x40,0x01,0xa8,0x00,
0x03,0x51,0x00,0x06,0xa2,0x00,0x0c,0x00,0x7e,0xf5,0x10,0x08,0x6a,0x04,0x00,0xd4,
0x40,0x01,0xa8,0x00,0x03,0x51,0x00,0x06,0xa2,0x00,0x0c,0x00,0x7d,0xf5,0x14,0x5e,
0x6a,0x04,0x00,0xd4,0x51,0x79,0xa8,0x22,0x03,0x51,0x44,0xf6,0xa2,0x89,0xcc,0x00,
0x7d,0xf5,0x14,0x48,0x6b,0xc4,0x00,0xd4,0x51,0x45,0xa8,0x22,0x03,0x51,0x45,0x06,
0xa2,0x8a,0x2c,0x00,0x7d,0xf5,0x14,0x48,0x6a,0x04,0x00,0xd4,0x51,0x45,0xa8,0x14,
0x03,0x51,0x44,0xe6,0xa2,0x8a,0x2c,0x00,0x7f,0xf5,0x14,0x48,0x6a,0x04,0x00,0xd4,
0x51,0x79,0xa8,0x14,0x03,0x51,0x44,0x16,0xa2,0x8a,0x2c,0x00,0x7f,0xf4,0xe3,0xce,
0x6a,0x0e,0x00,0xd3,0x8f,0x41,0xaf,0x88,0x03,0x4e,0x3d,0xe6,0x9c,0x79,0xcc,0x00,
0x7f,0xf4,0x00,0x00,0x68,0x00,0x00,0xd0,0x00,0x41,0xa0,0x00,0x03,0x40,0x00,0x06,
0x80,0x00,0x0c,0x00,0x7f,0xf4,0x00,0x00,0x68,0x00,0x00,0xd0,0x00,0x01,0xa0,0x00,
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
PegBitmap gbmaimBitmap = { 0x00, 1, 160, 172, 0x000000ff, (UCHAR *) ucmaimBitmap};

