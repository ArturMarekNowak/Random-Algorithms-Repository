#include <stdio.h>

int PassingCars(int someArray[], int N)
{
	if(N == 1)
        	return 0;

   	int counter = 0, result = 0;
    	for(int i = 0; i < N; i++)
    	{
        	if(someArray[i] == 0)
            		++counter;

        	if(someArray[i] == 1)
        	{
            		result += counter;
            		if(result > 1e9)
                		return -1;
        	}
    	}

    	return result;
}

int main()
{
	int arrOne[] = {0, 1, 0, 1, 1};
	printf("%d\n", PassingCars(arrOne, sizeof(arrOne)/sizeof(arrOne[0])));

	return 0;
}
