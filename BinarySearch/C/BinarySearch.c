#include <stdio.h>

int binarySearch(int arr[], int begin, int end, int value)
{
	if(end >= begin)
	{
		int middleIndex = (begin + end) / 2;
		
		if(arr[middleIndex] == value)
			return middleIndex;
		
		if(value > arr[middleIndex])
			return binarySearch(arr, middleIndex + 1, end, value);
		else
			return binarySearch(arr, begin, middleIndex - 1, value);
			
	}	
	return -1;
}

int main()
{
	int someArr[] = {0, 1, 4, 9, 16, 25, 36, 49, 64, 81, 100, 121, 144, 169, 196, 225, 256, 289, 324, 361, 400, 441, 484, 529, 576, 625, 676, 729, 784, 841};
	int sizeOfArr = sizeof(someArr) / sizeof(someArr[0]);
	
	puts("0, 1, 4, 9, 16, 25, 36, 49, 64, 81, 100, 121, 144, 169, 196, 225, 256, 289, 324, 361, 400, 441, 484, 529, 576, 625, 676, 729, 784, 841");

	printf("Searched: %d, index: %d\n", 2,  binarySearch(someArr, 0, sizeOfArr - 1, 2));
	printf("Searched: %d, index: %d\n", 4,  binarySearch(someArr, 0, sizeOfArr - 1, 4));
	printf("Searched: %d, index: %d\n", 10,  binarySearch(someArr, 0, sizeOfArr - 1, 10));
	printf("Searched: %d, index: %d\n", 257,  binarySearch(someArr, 0, sizeOfArr - 1, 257));
	printf("Searched: %d, index: %d\n", 256,  binarySearch(someArr, 0, sizeOfArr - 1, 256));
	printf("Searched: %d, index: %d\n", 400,  binarySearch(someArr, 0, sizeOfArr - 1, 400));
	printf("Searched: %d, index: %d\n", 441,  binarySearch(someArr, 0, sizeOfArr - 1, 441));

	return 0;
}
