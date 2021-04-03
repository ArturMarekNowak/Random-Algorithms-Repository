#include <stdio.h>

int CountDiv(int A, int B, int K)
{
	int temp = ((A%K) == 0) ? 1 : 0;
	return (B/K) - (A/K) + temp;
}


int main()
{
	printf("%d\n", CountDiv(6, 11, 2));
	return 0;
}
