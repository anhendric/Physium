
#include "peg.hpp"
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/

ROMDATA UCHAR ucallBitmap[42] = {
0x00,0x00,0x00,0x70,0x01,0xc0,0x50,0x01,0x40,0x7c,0x3f,0xc0,0x57,0xf5,0x40,0x6a,
0xaa,0xc0,0x55,0x55,0x40,0x7f,0xff,0xc0,0x10,0x00,0x00,0x17,0xff,0xc0,0x1d,0x55,
0x40,0x07,0xff,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,};
PegBitmap gballBitmap = { 0x00, 1, 19, 14, 0x000000ff, (UCHAR *) ucallBitmap};

