#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

double piNumber(long long int N)
{
	int T = 0;
	double xCoord = 0, yCoord = 0;

	for(int i = 0; i < N; i++)
	{
		xCoord = (double)rand() / (double)RAND_MAX;
		yCoord = (double)rand() / (double)RAND_MAX;
	
		if(xCoord * xCoord + yCoord * yCoord <= 1)
			T++;
	}

	return 4 * T / (double) N;
}

int main()
{
	srand(time(NULL));
	cout << setprecision(50) << piNumber(10000000);
	
	return 0;
}
