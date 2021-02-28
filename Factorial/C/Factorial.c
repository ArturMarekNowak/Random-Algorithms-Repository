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
		
	for(int i = 1; i < *n + 1; i++)
		result *= i;
		
	return result;
}

long double estimaFactorial(int * n)
{
	return (long double) pow((2 * *n + 1.0/3.0) * M_PI, 0.5) * pow(*n, *n) * exp((-1) * *n);
}

int main(int argc, char** argv)
{
	if(argc != 4) {
		fprintf(stderr, "usage %s <Integer Number> <Integer Number> <Integer Number>", argv[0]);
		return 1;
	}
	int a = atoi(argv[1]), b = atoi(argv[2]), c = atoi(argv[3]);
	
	printf("%lld\n", recursFactorial(&a));
	printf("%lld\n", iteratFactorial(&a));
	printf("%Lf\n", estimaFactorial(&a));
	puts("");
	printf("%lld\n", recursFactorial(&b));
	printf("%lld\n", iteratFactorial(&b));
	printf("%Lf\n", estimaFactorial(&b));
	puts("");
	printf("%lld\n", recursFactorial(&c));
	printf("%lld\n", iteratFactorial(&c));
	printf("%Lf\n", estimaFactorial(&c));
	puts("");
	
	return 0;
}
