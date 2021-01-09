#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

void printArray(double ** arr, int dim)
{
	for(int i = 0; i < dim; i++)
	{	
		for (int j = 0; j < dim; j++) 
		{
			printf("%.2f ", arr[i][j]);	
		}
		cout << endl;
	}
}

double getDeterminant(double ** arr, int dim)
{
	for(int i = 0; i < dim; i++)
	{
		for(int j = 0; j < dim - i - 1; j++)
		{
			double temp = arr[i + j + 1][i];
			temp *= -1;
			
			for(int k = 0; k < dim; k++)
			{
				arr[i + j + 1][k] += arr[i][k] * (temp/ *&arr[i][i]);
			}
		}
	}
       
       	cout << "-----------------\n";	
	printArray(arr, dim);
		
	double det = 1;	
	for(int i = 0; i < dim; i++)
	{
		det *= arr[i][i];
	}
	
	return det;
}

int main()
{
	srand(time(NULL));
	int dim = (rand() % 6) + 2;
	
	cout << dim << endl;	
	
	double **arr = (double **)malloc(dim * sizeof(double *));

	for (int i = 0; i < dim; i++)
		arr[i] = (double *)malloc(dim * sizeof(double));

	for (int i = 0; i < dim; i++)
		for (int j = 0; j < dim; j++)
			arr[i][j] = (rand() % 9) + 1;

	printArray(arr, dim);
	
	double rc = getDeterminant(arr, dim);
		
	cout << "Determinant of Matrix is: " << rc;
	
	for (int i = 0; i < dim; i++)
		free(arr[i]);

	free(arr);
	return 0;
}

