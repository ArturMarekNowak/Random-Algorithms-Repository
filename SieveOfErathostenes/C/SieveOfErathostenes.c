#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int sieveOfErathostenes(int N) {
	
	bool * arr = (bool *)malloc(N * sizeof(bool));


	for(int i = 0; i < N; i++) {
		arr[i] = true;
	}
	
	for(int i = 2; i < sqrt(N); i++)
	{
		if(arr[i] == true) 
		{
			for(int j = 2*i; j < N; j += i)
			{
				arr[j] = false;
			}
		}
	}

	for(int i = 2; i < N; i++) 
	{
		if(arr[i] == true)
			printf("%d ", i);
	}
	printf("\n");

	free(arr);

	return 0;	
}



int main() {
	
	sieveOfErathostenes(100);

	return 0; 
}
