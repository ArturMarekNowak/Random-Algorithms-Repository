#include <stdio.h>
#include <math.h>

double function(double coeff[], double x, int size)
{
	double result = 0.0;

	for(int i = 0; i < size; i++)
		result += coeff[i] * pow(x, size - 1 - i);
	
	return result;
}

double bisectionMethod(double coeff[], double leftEndPoint, double rightEndPoint, double precision, int size)
{
	if(function(coeff, leftEndPoint, size) * function(coeff, rightEndPoint, size) > 0)
	{
		puts("Cannot find root");
		return 0;
	}

	double d = 0.0;

	while((rightEndPoint - leftEndPoint) > precision)
	{
		d = (leftEndPoint + rightEndPoint) / 2.0;

		if(function(coeff, leftEndPoint, size) * function(coeff, d, size) < 0)
			rightEndPoint = d;
		else
			leftEndPoint = d;
	}

	return d;
}

int main()
{
	double arrOne[] = {1.0, 3.0, -13.0, -15.0};
        double arrTwo[] = {1.0, -1.0, -13.0, 13.0, 36.0, -36.0};

	printf("%.15f\n", bisectionMethod(arrOne, -10.123, -4.456, 0.01, 4));                                 
	printf("%.15f\n", bisectionMethod(arrOne, -4.789, 2.123, 0.001, 4));                                 
	printf("%.15f\n", bisectionMethod(arrOne, -0.512, 5.123, 0.0001, 4));                                 
	printf("%.15f\n", bisectionMethod(arrTwo, -4, -3.5, 0.00001, 6));                                 
	printf("%.15f\n", bisectionMethod(arrTwo, 0.0, 2.5, 0.000001, 6));                                 
	printf("%.15f\n", bisectionMethod(arrTwo, 0.123, 4.123, 0.0000001, 6));                                 
	printf("%.15f\n", bisectionMethod(arrTwo, -2.97, -1.12, 0.00000001, 6)); 

	return 0;
}
