#include <stdio.h>
#include <stdlib.h>

int myCompare(const void * a, const void * b)
{
	int _a = * ((int * ) a);
	int _b = * ((int * ) b);
	if(_a == _b) return 0;
	else if (_a < _b) return 1;
	else return -1;
}

int Max(int a, int b)
{
	return (a > b) ? a : b;
}

int MaxProductOfThree(int someArray[], int N)
{
	qsort(someArray, N, sizeof(int), myCompare);
	
	return Max(someArray[0] * someArray[1] * someArray[2], someArray[0] * someArray[N - 2] * someArray[N - 1]);
}

int main()
{
	int arrOne[] = {-3, 1, 2, -2, 5, 6};
	
	printf("%d\n", MaxProductOfThree(arrOne, sizeof(arrOne)/sizeof(arrOne[0])));

	return 0;
}
