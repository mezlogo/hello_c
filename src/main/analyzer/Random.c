#include "Timer.h"

#define BIT_IN_BYTE 8
char int_sz = sizeof(int);

unsigned int generateInt() {

    unsigned int result = 0;

    char index = int_sz;

    while (index--)
    { result |= getUCharNano() << (BIT_IN_BYTE * index); }

    //return generateChar() << 24 | generateChar() << 16 | generateChar() << 8 | generateChar();
    return 	result;
}

unsigned int generateIntByWidth(unsigned int width) {
    return width == 0 ? 0 : generateInt() % width;
}

unsigned int generateIntByRange(unsigned int start, unsigned int end) {

    if (end < start) {
	unsigned int swap = start;
	start = end;
	end = swap;
    }

    return generateIntByWidth(end - start) + start;
}
