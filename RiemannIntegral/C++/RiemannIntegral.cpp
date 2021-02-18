#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

double polynomial(vector <double> vec, double x)
{
	double result = 0.0;

	for(int i = 0; i < vec.size(); i++)
		result += vec[i] * pow(x, vec.size() - 1 - i);
	
	return result;
}

double riemannIntegral(const double a, double b, double & n, vector <double> vec)
{
	double d = (b - a) / n, P = 0.0, x = 0.0;
	int k = 0;

	while(k != n)
	{
		x = a + d * k + d / 2.0;
	      	P += d * polynomial(vec, x);
		k++;
	}

	return P;
}

int main()
{
	vector <double> vecOne = {1.0, 0.0, 0.0};
	vector <double> vecTwo = {1.0, -1.0, -13.0, 13.0, 36.0, -36.0};
	
	for(double i = 2.0; i < 100.0; i++)
	{
		cout << "f1: " << riemannIntegral(1, 3, i, vecOne) << "\tf2: " << riemannIntegral(-10, 13, i, vecTwo) << endl;
	}
	return 0;
}
