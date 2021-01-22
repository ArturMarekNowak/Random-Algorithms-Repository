#include <iostream>
#include <vector>

using namespace std;

vector<int> beadsLength(vector<int> & vec)
{
	vector<int> res;
	int counter = 1, j = 0;

	for(int i = 0; i < vec.size(); i++)
	{
		j = i;
	       	counter = 1;
		while(vec[j] != i)
		{
			j = vec[j];
			counter++;
		}
		res.push_back(counter);
	}
	return res;
}

void printVector(vector<int> & vec)
{
	for(int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << " ";
	}
	cout << endl;
}

int main()
{
	vector<int> A = {6, 4, 0, 3, 1, 2, 5};

	vector <int> rc = beadsLength(A);
	
	printVector(A);
	printVector(rc);

	return 0;
}
