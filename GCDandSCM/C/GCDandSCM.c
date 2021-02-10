#include <stdio.h>

int gcdEuclidian(int a, int b)
{
	while(a != b)
	{
		if(a > b)
			a = a - b;
		else if(a < b)
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
	return a * b / gcdEuclidianMod(a, b);
}

int main()
{
	printf("Euclid: %d\n", gcdEuclidian(20, 12));
	printf("EuclidMod: %d\n", gcdEuclidianMod(20, 12));
	printf("SCM: %d\n", scm(20, 12));

	return 0;
}
