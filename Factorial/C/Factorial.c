#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long int recursFactorial(int * n)
{
	if(*n == 0)
		return 1;

	if(*n == 1)
		return 1;

	if(*n == 2)
		return 2;
	
	int temp = *n - 1;
	return (long long int) *n * recursFactorial(&temp);	
}

long long int iteratFactorial(int * n)
{
	long long int result = 1;
	while(*n > 0)
	{
		result *= *n;
		*n -= 1;
	}
	return result;
}

//long long int estimaFactorial(int * n)
//{
//	return (long long int) *n;
//}

int main(int argc, char** argv)
{
	if(argc != 4) {
		fprintf(stderr, "usage %s <Integer Number> <Integer Number> <Integer Number>", argv[0]);
		return 1;
	}
	int a = atoi(argv[1]), b = atoi(argv[2]), c = atoi(argv[3]);
	
	printf("%lld\n", recursFactorial(&a));
	printf("%lld\n", iteratFactorial(&a));
	//printf("%lld\n", estimaFactorial(&a));
	puts("");
	printf("%lld\n", recursFactorial(&b));
	printf("%lld\n", iteratFactorial(&b));
	//printf("%lld\n", estimaFactorial(&b));
	puts("");
	printf("%lld\n", recursFactorial(&c));
	printf("%lld\n", iteratFactorial(&c));
	//printf("%lld\n", estimaFactorial(&c));
	puts("");
	
	return 0;
}
