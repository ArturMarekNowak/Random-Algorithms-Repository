#include <iostream>
#include <cstdlib>

using namespace std;

void swap(int & a, int & b)
{
	 
	int temp = a;
	a = b;
	b = temp;
}

int partition(int arr[], int first, int last)
{
	int j = first;
	
	for(int i = first; i < last; i++)
	{
		if(arr[i] <= arr[last])
		{
			swap(arr[i], arr[j]);
			j++;
		}
	}	
	swap(arr[j], arr[last]);
	return j;
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
		cout << "A[" << i << "] = " << arr[i] << endl;
	}
	cout << endl;
}

int main()
{
	int arrayOne[11] = {12, 3, 5, 6, 23, 2, 9, 13, 8, 4, 7};
	int arrayTwo[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int arrayThree[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	
	quickSort(arrayOne, 0, sizeof(arrayOne)/sizeof(arrayOne[0]) - 1);
	quickSort(arrayTwo, 0, sizeof(arrayTwo)/sizeof(arrayTwo[0]) - 1);
	quickSort(arrayThree, 0, sizeof(arrayThree)/sizeof(arrayThree[0]) - 1);

	printArray(arrayOne, sizeof(arrayOne)/sizeof(arrayOne[0]));
	printArray(arrayTwo, sizeof(arrayTwo)/sizeof(arrayTwo[0]));
	printArray(arrayThree, sizeof(arrayThree)/sizeof(arrayThree[0]));

	return 0;
}
