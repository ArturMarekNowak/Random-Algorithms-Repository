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



	return 0;
}
