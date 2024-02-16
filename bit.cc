//const uint8_t kFontA[16] = {
//  0b00000000, //
//  0b00011000, //    **
//  0b00011000, //    **
//  0b00011000, //    **
//  0b00011000, //    **
//  0b00100100, //   *  *
//  0b00100100, //   *  *
//  0b00100100, //   *  *
//  0b00100100, //   *  *
//  0b01111110, //  ******
//  0b01000010, //  *    *
//  0b01000010, //  *    *
//  0b01000010, //  *    *
//  0b11100111, // ***  ***
//  0b00000000, //
//  0b00000000, //
//};

#include <stdio.h>

// byteあたりのbit数 つまり8
#define CHAR_BIT 8

void printb(unsigned int v) {
	// sizeof(v) = 4 * 8 - 1, つまり32bitの最上位bitが立っている状態
  unsigned int mask = (int)1 << (sizeof(v) * CHAR_BIT - 1);
	// do-while構文
  do 
		putchar(mask & v ? '1' : '0');
  while (mask >>= 1);
}

int main() {
	printb(9);
	unsigned int flag = 0x80u;
	printf("\n");
	printb(flag);
	return 0;
}

