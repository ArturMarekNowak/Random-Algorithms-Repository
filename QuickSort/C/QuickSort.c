#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int * a, int * b)
{
	 
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int arr[], int first, int last)
{
	int pivot = arr[last];
	
	int here = first;
	
	for(int i = first; i < last - 1; i++)
	{
		if(arr[i] < pivot)
		{
			swap(&arr[i], &arr[here]);
			here++;
		}
	}	
	swap(&arr[here], &arr[last]);
	return here;
}

void quickSort(int arr[], int first, int last)
{
	if(first < last)
	{
		int divPoint = partition(arr, first, last);
		quickSort(arr, first, divPoint - 1);
		quickSort(arr, divPoint + 1, last);
	}	
}

void printArray(int arr[], int dim)
{
	for(int i = 0; i < dim; i++)
	{
		printf("A[%d] = %d\n", i, arr[i]);
	}
	printf("\n");
}

int main()
{
	//srand(time(NULL));
	
	//int dim = rand() % 30 + 1;
	
	int arrayOne[11] = {12, 3, 5, 6, 23, 2, 9, 13, 8, 4, 7};
	int arrayTwo[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int arrayThree[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	//int * arrayFour = (int *)malloc(dim * sizeof(int *));
	
	quickSort(arrayOne, 0, sizeof(arrayOne)/sizeof(arrayOne[0]) - 1);
	quickSort(arrayTwo, 0, sizeof(arrayTwo)/sizeof(arrayTwo[0]) - 1);
	quickSort(arrayThree, 0, sizeof(arrayThree)/sizeof(arrayThree[0]) - 1);
	//quickSort(arrayFour, 0, dim - 1);
	
	printArray(arrayOne, sizeof(arrayOne)/sizeof(arrayOne[0]) - 1);
	printArray(arrayTwo, sizeof(arrayTwo)/sizeof(arrayTwo[0]) - 1);
	printArray(arrayThree, sizeof(arrayThree)/sizeof(arrayThree[0]) - 1);

	//free(arrayFour);

	return 0;
}
