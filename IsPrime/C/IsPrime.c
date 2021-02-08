#include <stdio.h>
#include <stdbool.h>

bool isPrime(int N)
{
	if(N == 1)
		return false;

	for(int i = 2; i < N; i++)
	{
		if(N % i == 0)
			return false;
	}
	return true;
}

bool isPrimeBetter(long long int N)
{
	if(N <= 1)
		return false;

	if(N <= 3)
		return true;

	if(N % 2 == 0 || N % 3 == 0)
		return false;

	for(long long int i = 5; i * i <= N; i = i + 6)
		if(N % i == 0 || N % (i + 2) == 0)
			return false;

	return true;
}

int main()
{
	if(isPrime(101) == true)
	       puts("OK");
	
	if(isPrime(20) == false)
		puts("OK");
	
	if(isPrime(13) == true)
		puts("OK");

	if(isPrime(15) == false)
		puts("OK");	

	if(isPrime(97) == true)
		puts("OK");
	
	if(isPrime(1) == false)
		puts("OK");

	if(isPrime(2) == true)
		puts("OK");

	if(isPrimeBetter(985466431) == true)
		puts("OK");

	return 0;
}
