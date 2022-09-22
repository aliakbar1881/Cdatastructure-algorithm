#include "array.h"

void count_sort(int arr[], size_t n);

int main(int argc, char *argv[])
{
	size_t size = 5;
	int *arr = getArray(size);
	count_sort(arr, size);
	return 0;
}


void count_sort(int arr[], size_t n)
{	
	const int MAX = max(arr, n);
	int count[MAX+1];
	int sorted_arr[n];
	int fill = 0;
        for(size_t i=0; i<(MAX + 1); i++)
        {
		count[i] = 0;
	}

	for(size_t i=0; i<n; i++)
	{
		int value = arr[i];
		count[value]++;
	}

	for(size_t i=0; i<=MAX; i++)
	{
		if(count[i] == 0)
		{
			continue;
		}
		else if(count[i] > 0){
			for(size_t j=1; j<=count[i]; j++)
			{

				if(fill < n){
					sorted_arr[fill] = (int)i;
					fill++;
				}
			}
		} else {
		printf("somthing went wrong in: 'count'");
		break;
		}
	}
	printArray(sorted_arr, n);
}
