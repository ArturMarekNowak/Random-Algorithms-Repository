#include <iostream>
#include <vector>

using namespace std;

vector <int> fibonacciSequence(int N)
{
	vector <int> result;
	
	int temp = 0;
	
	result.push_back(1);
	result.push_back(1);
	
	for(int i = 0; i < N - 2; i++)
	{
		temp = result.end()[-1] + result.end()[-2];
		result.push_back(temp);
	}	
	
	return result;
}

void printVector(vector <int> A)
{
	cout << "A contains: ";
	
	for(int i = 0; i < A.size(); i++)
	{
		cout << A[i] << " ";
	}

}

int main()
{
	printVector(fibonacciSequence(20));

	return 0;
}
