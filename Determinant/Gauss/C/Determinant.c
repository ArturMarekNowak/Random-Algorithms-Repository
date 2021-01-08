#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void printArray(double ** arr, int dim)
{
	for(int i = 0; i < dim; i++)
	{	
		for (int j = 0; j < dim; j++) 
		{
			printf("%.2f ", arr[i][j]);	
		}
		
		printf("\n");
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
       
       	printf("-----------------\n");	
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
	
	printf("%d\n", dim);	
	
	double **arr = (double **)malloc(dim * sizeof(double *));

	for (int i = 0; i < dim; i++)
		arr[i] = (double *)malloc(dim * sizeof(double));

	for (int i = 0; i < dim; i++)
		for (int j = 0; j < dim; j++)
			arr[i][j] = (rand() % 9) + 1;

	printArray(arr, dim);
	
	printf("Determinant of Matrix is: %f", getDeterminant(arr, dim));
	
	for (int i = 0; i < dim; i++)
		free(arr[i]);

	free(arr);
	return 0;
}

