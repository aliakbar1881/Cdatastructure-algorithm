#include <stdio.h>

void swap(int *x, int *y);
void quicksort(int array[], int lengtha);
void quicksort_recursion(int array[], int low, int high);
int partition(int array[], int low, int high);

int main() {
	int array[] = {1, 11, 3, 0, 2, 3, 5, 6, 7, 10};
	quicksort(array, 10);
	for (int i = 0; i < 10; i++)
		printf("%d", array[i]);
	printf("\n");
	return 0;
}

void swap(int *x, int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

void quicksort(int array[], int lenght) {
	quicksort_recursion(array, 0, lenght - 1);
}

void quicksort_recursion(int array[], int low, int high) {
	if (low < high){
		int pivot_index = partition(array, low, high);
		quicksort_recursion(array, low, pivot_index - 1);
		quicksort_recursion(array, pivot_index + 1, high);
	}
}

int partition(int array[], int low, int high) {
	int pivot_index = array[high];
	int i = low;
	for (int j = low; j < high; j++)
	{
		if (array[j] <= pivot_index){
			swap(&array[i], &array[j]);
			i++;
		}
	}
	swap(&array[i], &array[high]);
	return i;
}
