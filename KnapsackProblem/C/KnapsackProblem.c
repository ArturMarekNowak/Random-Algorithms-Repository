#include <stdio.h>

int max(int a, int b) 
{
	return (a > b) ? a : b;
}

int KnapsackProblem(int value[], int weight[], int capacity, int index)
{
	if(index == 0 || capacity == 0)
		return 0;
	else if(weight[index] > capacity)
		return KnapsackProblem(value, weight, capacity, index - 1);
	else
	{
		int tempOne = KnapsackProblem(value, weight, capacity, index - 1);
		int tempTwo = value[index] + KnapsackProblem(value, weight, capacity - weight[index], index - 1);
		return max(tempOne, tempTwo);
	}
}

int main()
{
	int valuesOne[] = {1, 2, 4, 2, 5};
	int valuesTwo[] = {60, 100, 120};
	int weightsOne[] = {5, 3, 5, 3, 2};
	int weightsTwo[] = {10, 20, 30};
	printf("One: %d\n", KnapsackProblem(valuesOne, weightsOne, 10, sizeof(valuesOne)/sizeof(valuesOne[0]) - 1));
	printf("Two: %d\n", KnapsackProblem(valuesTwo, weightsTwo, 50, sizeof(valuesTwo)/sizeof(valuesTwo[0]) - 1));
}
