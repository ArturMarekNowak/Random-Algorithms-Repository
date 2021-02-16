#include <stdio.h>
#include <math.h>

double polynomial(double coeff[], double x, int size)
{
	double result = 0.0;

	for(int i = 0; i < size; i++)
		result += coeff[i] * pow(x, size - 1 - i);
	
	return result;
}

double riemannIntegral(double a, double b, double * n, double coeff[], int size)
{
	double d = (b - a) / *n, P = 0.0, x = 0.0;
	int k = 0;

	while(k != *n)
	{
		x = a + d * k + d / 2.0;
	      	P += d * polynomial(coeff, x, size);
		k++;
	}

	return P;
}

int main()
{
	double arrOne[] = {1.0, 0.0, 0.0};
	double arrTwo[] = {1.0, -1.0, -13.0, 13.0, 36.0, -36.0};
	
	for(double i = 2.0; i < 100.0; i++)
	{
		printf("f1: %.10f, \t\t f2: %.10f\n", riemannIntegral(1, 3, &i, arrOne, sizeof(arrOne)/sizeof(arrOne[0])), riemannIntegral(1, 3, &i, arrTwo, sizeof(arrTwo)/sizeof(arrTwo[0])));
	}
	return 0;
}
