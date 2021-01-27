#include <stdio.h>

long long int factorial(int N)
{
	if(N == 0 || N == 1)
	{
		return 1;
	}
	else if(N > 1)
	{
		long long int result = 1;
		for(int i = 1; i < N + 1; i++)
		{
			result *= i;
		}
		return result;
	}
}

long long int binomialCoefficient(int arr[])
{
	int n = arr[0];
	int k = arr[1];

	long long int result = factorial(n) / (factorial(k) * factorial(n - k));

	return result;
}

int main()
{
	int arrOne[2] = {7, 2};
	int arrTwo[2] = {15, 2};

	printf("arrOne: %lld\n", binomialCoefficient(arrOne));
	printf("arrTwo: %lld\n", binomialCoefficient(arrTwo));



	return 0;
}
