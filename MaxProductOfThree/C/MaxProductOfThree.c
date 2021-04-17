#include <stdio.h>
#include <stdlib.h>

int myCompare(const void * a, const void * b)
{
	int _a = *(int*)a;
	int _b = *(int*)b;
	if(a < b) return -1;
	else if (_a == _b) return 0;
	else return 1;
}

int Max(int a, int b)
{
	return (a > b) ? : a, b;
}

int MaxProductOfThree(int *  arr, int length)
{
	for(int i=0; i<length; ++i)
        	printf("%d\n", arr[i]);


	qsort(arr, length, length *  sizeof(int), myCompare);
	
	for(int i=0; i<length; ++i)
        	printf("%d\n", arr[i];

	return Max(arr[0] * arr[1] * arr[2], arr[0] * arr[length - 2] * arr[length - 1]);
}

int main()
{
	int arrOne[] = {-3, 1, 2, -2, 5, 6};

	printf("%d\n", MaxProductOfThree(arrOne, sizeof(arrOne)/sizeof(arrOne[0])));

	return 0;
}
