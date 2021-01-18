#include <stdio.h>

void swap(int * a, int * b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int arr[], int dim)
{
	for(int i = 0; i < dim; i++)
	{
		for(int j = 0; j < dim - i; j++)
		{
			if(arr[j + 1] <= arr[j])
			{
				swap(&arr[j + 1], &arr[j]);
			}
		}
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
	int arrayOne[11] = {12, 3, 5, 6, 23, 2, 9, 13, 8, 4, 7};
	int arrayTwo[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int arrayThree[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	
	bubbleSort(arrayOne, sizeof(arrayOne)/sizeof(arrayOne[0]) - 1);
	bubbleSort(arrayTwo, sizeof(arrayTwo)/sizeof(arrayTwo[0]) - 1);
	bubbleSort(arrayThree, sizeof(arrayThree)/sizeof(arrayThree[0]) - 1);

	printArray(arrayOne, sizeof(arrayOne)/sizeof(arrayOne[0]));
	printArray(arrayTwo, sizeof(arrayTwo)/sizeof(arrayTwo[0]));
	printArray(arrayThree, sizeof(arrayThree)/sizeof(arrayThree[0]));
}
