#include <stdio.h>

void fibonacciSequence(int N)
{
	long long int previous = 1, previousPrevious = 1, answer = 0;
	printf("1 1 ");
	for(int i = 0; i < N; i++)
	{
		answer = previous + previousPrevious;
		printf("%lld ", answer);
		previousPrevious = previous;
		previous = answer;
	}
}

int main()
{
	fibonacciSequence(10);

	return 0;
}
