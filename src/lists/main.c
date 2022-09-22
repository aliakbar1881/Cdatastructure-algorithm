#include <stdio.h>
#include "list.h"

int main(int argc, char *argv[]) {
	int temp[10] = {2, 3, 4, 5, 6, 7, 8, 9, 5, 3};
	int *myList = initList(temp, 10);
	listPrint(myList, 10);
	printf("\n");
	printf("%d\n", (int)search(2, myList, 10));
}
