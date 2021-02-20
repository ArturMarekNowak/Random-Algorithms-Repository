#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

double function(vector <double> & coeff, double & x)
{
	double result = 0.0;

	for(int i = 0; i < coeff.size(); i++)
		result += coeff[i] * pow(x, coeff.size() - 1 - i);
	
	return result;
}

double bisectionMethod(vector <double> & coeff, double leftEndPoint, double rightEndPoint, double  precision)
{
	if(function(coeff, leftEndPoint) * function(coeff, rightEndPoint) > 0)
	{
		puts("Cannot find root");
		return 0;
	}

	double d = 0.0;

	while((rightEndPoint - leftEndPoint) > precision)
	{
		d = (leftEndPoint + rightEndPoint) / 2.0;

		if(function(coeff, leftEndPoint) * function(coeff, d) < 0)
			rightEndPoint = d;
		else
			leftEndPoint = d;
	}

	return d;
}

int main()
{
	vector <double> vecOne = {1.0, 3.0, -13.0, -15.0};
        vector <double> vecTwo = {1.0, -1.0, -13.0, 13.0, 36.0, -36.0};

	printf("%.15f\n", bisectionMethod(vecOne, -10.123, -4.456, 0.01));                                 
	printf("%.15f\n", bisectionMethod(vecOne, -4.789, 2.123, 0.001));                                 
	printf("%.15f\n", bisectionMethod(vecOne, -0.512, 5.123, 0.0001));                                 
	printf("%.15f\n", bisectionMethod(vecTwo, -4, -3.5, 0.00001));                                 
	printf("%.15f\n", bisectionMethod(vecTwo, 0.0, 2.5, 0.000001));                                 
	printf("%.15f\n", bisectionMethod(vecTwo, 0.123, 4.123, 0.0000001));                                 
	printf("%.15f\n", bisectionMethod(vecTwo, -2.97, -1.12, 0.00000001)); 

	return 0;
}

