#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int ** getMinor(int ** arr, int dim, int row, int col)
{
	dim--;
	int **tempArr = (int **)malloc(dim * sizeof(int *));
	
	for (int i = 0; i < dim; i++)
		tempArr[i] = (int *)malloc(dim * sizeof(int));
	
    		//move data up
    	for (int i = 0; i < 3; i++)
	{
        	if (i != row)
        	{
            		for (int j = 0; j < 3; j++)
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
	return arr;
}

void printArray(int ** arr, int dim)
{
	for(int i = 0; i < dim; i++){
		
		for (int j = 0; j < dim; j++) {
			
			printf("%d ", arr[i][j]);
		
		}
		
		printf("\n");
	}
}

double getDeterminant(int ** arr)
{
	int dim = sizeof(arr[0])/sizeof(arr[0][0]);


	if (dim == 2)
	{
		return arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0];
	}

	int sum = 0;
	
	for (int i = 0; i < dim; i++)
	{
		sum += ( pow(-1, (1+(i+1))) * arr[0][i] * getDeterminant(getMinor(arr, dim, 0, i)));
	
	}
	return sum;
}

int main()
{
	srand(time(NULL));
	int dim = (rand() % 6) + 2;
	
	printf("%d\n", dim);	
	
	int **arr = (int **)malloc(dim * sizeof(int *));

	for (int i = 0; i < dim; i++)
		arr[i] = (int *)malloc(dim * sizeof(int));

	for (int i = 0; i < dim; i++)
		for (int j = 0; j < dim; j++)
			arr[i][j] = (rand() % 9) + 1;

	printArray(arr, dim);
	
	printf("Determinant of Matrix is: %f", getDeterminant(arr));
	
	for (int i = 0; i < dim; i++)
		free(arr[i]);

	free(arr);
	return 0;
}

