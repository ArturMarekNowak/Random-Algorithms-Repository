#include <stdio.h> 

void beadsLength(int arr[], int N)
{
	int counter = 1, j = 0;

	for(int i = 0; i < N; i++)
	{
		j = i;
	       	counter = 1;
		while(arr[j] != i)
		{
			j = arr[j];
			counter++;
		}
		printf("%d ", counter);
	}
	printf("\n");
}

int main()
{
	int A[7] = {6, 4, 0, 3, 1, 2, 5};

	beadsLength(A, sizeof(A)/sizeof(A[0]));

	return 0;
}
