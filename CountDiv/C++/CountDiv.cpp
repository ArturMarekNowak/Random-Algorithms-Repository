#include <iostream>

int CountDiv(int A, int B, int K)
{
	int temp = ((A%K) == 0) ? 1 : 0;
	return (B/K) - (A/K) + temp;
}

int main()
{
	std::cout << CountDiv(6, 11, 2) << std::endl;

	return 0;
}	
