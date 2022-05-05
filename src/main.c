#include <stdio.h>

void list(int *value) {
	printf("value : %d\n", sizeof(value));
	printf("*value : %d\n", sizeof(*value));
	printf("value[0] %d\n", sizeof(value[0]));
	int arraySize = sizeof(value)/ sizeof(value[0]);
	printf("arraySize : %d\n", arraySize);
	int array[arraySize];
	for(int i=0; i < arraySize; i++){
		array[i] = value[i];
	};
}

int main()
{
	int myValue[5] = {2, 3, 4, 5 ,6};
	printf("sizeof myValue : %d\n", sizeof(myValue));
	printf("-> %d \n", myValue);
	list(myValue);
	/** for(int i = 1; i < sizeof(myArray) / sizeof(myArray[0]); i++){ */
		/** printf("%d", myArray[i]); */
	/** }; */
	return 0;
}
