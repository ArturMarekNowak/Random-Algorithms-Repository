#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void printArray(int ** arr, int dim)
{
	for(int i = 0; i < dim; i++){
		
		for (int j = 0; j < dim; j++) {
			
			printf("%d ", arr[i][j]);
		
		}
		
		printf("\n");
	}
}


int ** getMinor(int ** arr, int dim, int row, int col)
{
	dim--;
	int **tempArr = (int **)malloc(dim * sizeof(int *));
	
	for (int i = 0; i < dim; i++)
		tempArr[i] = (int *)malloc(dim * sizeof(int));
	
    	for (int i = 0; i < dim + 1; i++)
	{
        	if (i != row)
        	{
            		for (int j = 0; j < dim + 1; j++)
                		if (j != col)
                		{
                    			if (i < row && j < col)
                        			tempArr[i][j] = arr[i][j];
                    			else if (i < row && j > col)
                        			tempArr[i][j-1] = arr[i][j];
                    			else if (i > row && j < col)
                        			tempArr[i-1][j] = arr[i][j];
                    			else
                        			tempArr[i-1][j-1] = arr[i][j];
                		}
        	}
	}

	//printf("\n\n");
	//printArray(tempArr, dim);
	return tempArr;
}

double getDeterminant(int ** arr, int dim)
{

	if (dim == 2)
	{
		return arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0];
	}

	int sum = 0;
	
	for (int i = 0; i < dim; i++)
	{
		sum += ( pow(-1, (1+(i+1))) * arr[0][i] * getDeterminant(getMinor(arr, dim, 0, i), dim-1));
	
	}
	return sum;
}

int main()
{
	srand(time(NULL));
	int dim = (rand() % 6) + 2;
	//int dim = 3;
	
	printf("%d\n", dim);	
	
	int **arr = (int **)malloc(dim * sizeof(int *));

	for (int i = 0; i < dim; i++)
		arr[i] = (int *)malloc(dim * sizeof(int));

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

