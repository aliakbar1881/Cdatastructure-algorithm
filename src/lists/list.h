#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// Print list entity
void listPrint(int *list, int size) {
	printf("[");
	for(int i = 0; i < size; i++) {
		if(i == size - 1){
			printf(" %d", list[i]);
			break;
		}
		printf(" %d,", list[i]);
	}
	printf("]\n");
}

// Initialize a list and allocate sapce
int *initList(int *array, int size) {
	int *ptr;
	ptr = (int *) calloc(size, sizeof(int));
	for(int i = 0; i < size; i++) {
		ptr[i] = array[i];
	}
	assert( ptr != NULL);
	return ptr;
}

// Pop last element of list
int pop(int **list, int size) {
	int lastIndex = (*list)[size - 1];
	printf("lastIndex : %d\n", lastIndex);
	*list = (int *)realloc(*list, size - 1);
	return lastIndex;
}

// Replace indexes vlue
void replace(int index, int value, int *list) {
	assert(index >= 0);
	list[index] = value;
}

// Insert an element to the list
void insert(int value, int index, int **list, int size) {
	assert(index >= 0);
	assert(index < size);
	*list = realloc(*list, (size + 1)*sizeof(int));
	int temp1;
	int temp2;
	temp1 = (*list)[index];
	for(size_t i = index + 1; i <= size; i++) {
		temp2 = (*list)[i];
		(*list)[i] = temp1;
		temp1 = temp2;
	}
	(*list)[index] = value;
}

// Search an element in list
int search(int value, int list[], int size) {
	for(int i = 0; i < size; i++) {
		if(value == list[i]){
			return i;
		}
	}
	return -1;
}
