#include <iostream>
#include <cstdlib>
#include <cmath>

long long int recursFactorial(int & n)
{
	if(n == 0)
		return 1;

	if(n == 1)
		return 1;

	if(n == 2)
		return 2;
	
	int temp = n - 1;
	return (long long int) n * recursFactorial(temp);	
}

long long int iteratFactorial(int & n)
{
	long long int result = 1;
		
	for(int i = 1; i < n + 1; i++)
		result *= i;
		
	return result;
}

long double estimaFactorial(int & n)
{
	return (long double) pow((2 * n + 1.0/3.0) * M_PI, 0.5) * pow(n, n) * exp((-1) * n);
}

int main(int argc, char** argv)
{
	if(argc != 4) {
		fprintf(stderr, "usage %s <Integer Number> <Integer Number> <Integer Number>", argv[0]);
		return 1;
	}
	int a = atoi(argv[1]), b = atoi(argv[2]), c = atoi(argv[3]);
	
	std::cout << recursFactorial(a) << std::endl;
	std::cout << iteratFactorial(a) << std::endl;
	std::cout << estimaFactorial(a) << std::endl;
	puts("");
	std::cout << recursFactorial(b) << std::endl;
	std::cout << iteratFactorial(b) << std::endl;
	std::cout << estimaFactorial(b) << std::endl;
	puts("");
	std::cout << recursFactorial(c) << std::endl;
	std::cout << iteratFactorial(c) << std::endl;
	std::cout << estimaFactorial(c) << std::endl;
	puts("");
	
	return 0;
}
