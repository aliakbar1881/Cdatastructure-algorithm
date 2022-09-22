#include <stdio.h>
#include <stdlib.h>

void printArray(int arr[], int n);
int* getArray(size_t n);
int search(int arr[], size_t n, int ele);
int findex(int arr[], size_t n, int ele);
int max(int arr[], size_t n);

int * getArray(size_t n)
{
	// get array pointer and fill indexes by input values
	int *arr = (int*)malloc(sizeof(int)*n);
	for(int i=0; i<n; i++)
	{
		printf("[%d]", i);
		scanf("%d", &arr[i]);
	}
	return arr;
}

void printArray(int arr[], int n)
{
	// print array elements in console
	printf("[");
	for (int i=0; i<n; i++)
	{
		printf(" %d,", arr[i]);
	}
	printf("]\n");
}

int search(int arr[], size_t n, int ele)
{
	// search for ele in array.if find that return 1 otherwise return 0
	for(int i=0; i<n; i++)
	{
		if(ele==arr[i])
		{
			return 1;
		}
	}
	return 0;
}

int findex(int arr[], size_t n, int ele)
{
	// search for ele value in array.if find that return index otherwise retuen -1
	for(int i=0; i<n; i++)
	{
		if(ele==arr[i])
		{
			return i;
		}
	}
	return -1;
}

int max(int arr[], size_t n)
{
	// find max elements values
	int max = arr[0];
		for(size_t i=0; i<n; i++)
		{
		if(max < arr[i])
			max = arr[i];
		
		}
	return max;
}
