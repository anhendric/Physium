
#include "peg.hpp"
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/

ROMDATA UCHAR ucV1Bitmap[42] = {
0x00,0x00,0x00,0x1c,0x00,0x00,0x14,0x00,0x00,0x1f,0x00,0x00,0x15,0x00,0x00,0x1f,
0x00,0x00,0x15,0x00,0x00,0x1f,0xff,0x00,0x15,0x55,0x00,0x1f,0xff,0x00,0x15,0x55,
0x00,0x1f,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,};
PegBitmap gbV1Bitmap = { 0x00, 1, 19, 14, 0x000000ff, (UCHAR *) ucV1Bitmap};

