#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertionSort(int arr[], int size)
{
	int elem = 0, k = 0;

	for(int i = 1; i < size; i++)
	{
		elem = arr[i];
		k = i - 1;
		while(k >= 0 && arr[k] > elem)
		{
			arr[k + 1] = arr[k];
			k--;
		}
		arr[k + 1] = elem;
	}	
}

void printArray(int arr[], int size)
{
	printf("[");
	for(int i = 0; i < size - 1; i++)
		printf("%d, ", arr[i]);

	printf("%d]\n", arr[size - 1]);
}

int main()
{
	srand(time(NULL));

	int arrOne[] = {12, 3, 5, 6, 23, 2, 9, 13, 8, 4, 7};
	int arrTwo[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int arrThree[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 	int arrFour[20];

	for(int i = 0; i < 20; i++)
		arrFour[i] = rand() % 30;	

	insertionSort(arrOne, sizeof(arrOne)/sizeof(arrOne[0]));
	insertionSort(arrTwo, sizeof(arrTwo)/sizeof(arrTwo[0]));
	insertionSort(arrThree, sizeof(arrThree)/sizeof(arrThree[0]));
	insertionSort(arrFour, sizeof(arrFour)/sizeof(arrFour[0]));


	printArray(arrOne, sizeof(arrOne)/sizeof(arrOne[0]));
	printArray(arrTwo, sizeof(arrTwo)/sizeof(arrTwo[0]));
	printArray(arrThree, sizeof(arrThree)/sizeof(arrThree[0]));
	printArray(arrFour, sizeof(arrFour)/sizeof(arrFour[0]));


	return 0;
}
