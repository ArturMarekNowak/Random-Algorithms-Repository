#include <stdio.h> 

void fizzBuzz(int N)
{
	for(int i = 0; i < N + 1; i++)
	{
		if(i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz\n");
		}
		else if(i % 3 == 0)
		{
			printf("Fizz\n");
		}
		else if(i % 5 == 0)
		{
			printf("Buzz\n");
		}
		else
		{
			printf("%d\n", i);
		}
	}
}


int main()
{
	fizzBuzz(100);

	return 0;
}
