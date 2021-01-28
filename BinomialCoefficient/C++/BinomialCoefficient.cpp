#include <iostream>
#include <tuple>

using namespace std;

unsigned long long int factorial(int N)
{
	if(N == 0 || N == 1)
	{
		return 1;
	}
	else if(N > 1)
	{
		unsigned long long int result = 1;
		for(int i = 1; i < N + 1; i++)
		{
			result *= i;
		}
		return result;
	}

	//Interesting, without this return warning, compiler in C returned none warning
	return -1;
}

unsigned long long int binomialCoefficient(tuple <int, int> tup)
{
	int n = get<0>(tup);
	int k = get<1>(tup);

	unsigned long long int result = factorial(n) / (factorial(k) * factorial(n - k));

	return result;
}

int main()
{
	tuple <int, int> tupOne(7, 2);
	tuple <int, int> tupTwo(15, 2);
	tuple <int, int> tupThree(20, 10);

	cout << "tupOne: " << binomialCoefficient(tupOne) << endl;
	cout << "tupTwo: " <<  binomialCoefficient(tupTwo) << endl;
	cout << "tupThree: " <<  binomialCoefficient(tupThree) << endl;

	return 0;
}
