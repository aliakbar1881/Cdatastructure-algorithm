#include <stdio.h>
#include "intList.h"


int get(int index, intList  intlist) {
	return intlist.list[index];
}

void set(int index, int value, intList intlist) {
	printf("%d\n", intlist.size);
	if (index < intlist.size) {
		intlist.list[index] = value;
	} else {
		printf("[%d] is out of range list . . .\n", index);
		exit(EXIT_FAILURE);
	};
}

void print(intList intlist) {
	printf("[ ");
	for(int i = 0; i < sizeof(intlist.size); i++) {
		printf(" %d,", intlist.list[i]);
	};
	printf("]\n");
}

intList intListAbstractor() {
	intList absIntList;
	absIntList.getIndex = &get;
	absIntList.setIndex = &set;
	absIntList.print = &print;
	return absIntList;
}
