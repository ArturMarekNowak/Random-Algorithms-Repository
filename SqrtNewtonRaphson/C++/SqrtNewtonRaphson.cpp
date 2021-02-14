#include <iostream>

using namespace std;

double sqrtNR(double number, double precision)
{
	double a = number;
	while(a - number / a > precision)
	{
		a = (a + number / a) / 2;
	}

	return a;
}

int main()
{
	cout << sqrtNR(737, 0.0001);

	return 0;
}
