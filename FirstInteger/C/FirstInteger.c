#include <stdio.h>

int firstInteger(int arr[], int dim)
{
	int answer = 1;
	for(int i = 0; i < dim; i++){

		for(int j = 0; j < dim; j++){
			
			if(arr[j] == answer)
				answer++;
		}
	}
	printf("answer: %d\n", answer);
	return answer;
}

int main()
{
	int arrOne[6] = {1, 3, 6, 4, 1, 2};
	int arrTwo[3] = {1, 2, 3};
	int arrThree[2] = {-1, -3};
	

	firstInteger(arrOne, sizeof(arrOne)/sizeof(arrOne[0]));
	firstInteger(arrTwo, sizeof(arrTwo)/sizeof(arrTwo[0]));
	firstInteger(arrThree, sizeof(arrThree)/sizeof(arrThree[0]));
}
