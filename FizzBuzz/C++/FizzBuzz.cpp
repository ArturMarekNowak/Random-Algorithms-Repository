#include <iostream> 

using namespace std;

void fizzBuzz(int N)
{
	for(int i = 0; i < N + 1; i++)
	{
		if(i % 3 == 0 && i % 5 == 0)
		{
			cout << "FizzBuzz\n";
		}
		else if(i % 3 == 0)
		{
			cout << "Fizz\n";
		}
		else if(i % 5 == 0)
		{
			cout << "Buzz\n";
		}
		else
		{
			cout << i << endl;
		}
	}
}


int main()
{
	fizzBuzz(100);

	return 0;
}
