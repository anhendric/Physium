
#include "peg.hpp"
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/

ROMDATA UCHAR ucM2Bitmap[42] = {
0xff,0xff,0xe0,0xff,0xff,0xe0,0xff,0xff,0xe0,0xe7,0x9d,0xe0,0xe3,0x19,0xe0,0xe3,
0x10,0xe0,0xe3,0x10,0xe0,0xe0,0x19,0xe0,0xe4,0x99,0xe0,0xe4,0x98,0xe0,0xe4,0x98,
0xe0,0xff,0xff,0xe0,0xff,0xff,0xe0,0xff,0xff,0xe0,};
PegBitmap gbM2Bitmap = { 0x00, 1, 19, 14, 0x000000ff, (UCHAR *) ucM2Bitmap};

