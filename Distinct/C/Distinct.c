#include <stdio.h>
#include <stdlib.h>

int myCompare(const void * a, const void * b) {

        int tempOne = * ((int * ) a);
        int tempTwo = * ((int * ) b);
        
        if(tempOne == tempTwo) return 0;
        else if(tempOne > tempTwo) return 1;
        else return -1;
    }

int Distinct(int someArray[], int N) {
    // write your code in C99 (gcc 6.2.0)

    if(N == 0)
        return 0;


    qsort(someArray, N, sizeof(int), myCompare);

    int result = 1;
    for(int i = 1; i < N; i++)
    {
        if(someArray[i - 1] != someArray[i])
            result += 1;
    }
    return result;
}

int main()
{
	int arrOne[] = {2, 1, 1, 2, 3, 1};

	printf("%d\n", Distinct(arrOne, sizeof(arrOne)/sizeof(arrOne[0])));

	return 0;
}
