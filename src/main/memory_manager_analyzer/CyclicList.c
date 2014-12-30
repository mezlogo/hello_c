#include "Configuration.h"



long putIndex = 0;
long getIndex = 0;

char* list[MAX_VARIABLES_COUNT];

#define validation(variable) if (MAX_VARIABLES_COUNT <= ++variable) variable = 0;
void put(char* variable) {
	validation(putIndex);
	list[putIndex] = variable;
}

char* next() {
	validation(getIndex);
	return list[getIndex];
}
