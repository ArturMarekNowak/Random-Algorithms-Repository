#include <iostream>

using namespace std;

int gcdEuclidian(int a, int b)
{
	while(a != b)
	{
		if(a > b)
			a = a - b;
		else if(b > a)
			b = b - a;
	}
	return a;
}

int gcdEuclidianMod(int a, int b)
{
	while(a > 0)
	{
		a = a % b;
		b = b - a;
	}
	return b;
}

int scm(int a, int b)
{
	return a * b / gcdEuclidian(a, b);
}

int main()
{
	cout << gcdEuclidian(12, 20) << endl;
	cout << gcdEuclidianMod(20, 12) << endl;
	cout << scm(12, 20);
	return 0;
}
