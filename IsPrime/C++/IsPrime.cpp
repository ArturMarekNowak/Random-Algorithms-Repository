#include <iostream>
#include <chrono>
#include <cstdbool>

using namespace std;

bool isPrime(long long int N)
{
	if(N == 1)
		return false;

	for(long long int i = 2; i < N; i++)
		if(N % i == 0)
			return false;
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
	auto t1 = chrono::high_resolution_clock::now();
	if(isPrime(985466431) == true)
	{
		auto t2 = chrono::high_resolution_clock::now();
	        auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1);	
    		printf("Time measured: %.3f seconds.\n", elapsed.count() * 1e-9);	
	}

	t1 = chrono::high_resolution_clock::now();
	if(isPrimeBetter(985466431) == true)
	{
		auto t2 = chrono::high_resolution_clock::now();
	        auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1);	
		printf("Time measured: %.3f seconds.\n", elapsed.count() * 1e-9);	
	}
	
	return 0;
}
