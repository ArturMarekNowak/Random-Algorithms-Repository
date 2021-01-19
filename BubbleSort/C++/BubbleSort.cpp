#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void bubbleSort(vector<int> & vec)
{
	for(int i = 0; i < vec.size(); i++)
	{
		for(int j = 0; j < vec.size() - i; j++)
		{
			if(vec[j + 1] <= vec[j])
			{
				swap(vec[j + 1], vec[j]);
			}
		}
	}
}

void printVector(vector<int> & vec)
{
	for(int i = 0; i < vec.size(); i++)
	{
		cout << "V[" << i <<"] =" << vec[i] << endl;
	}
	cout << endl;
}

int main()
{
	vector<int> arrayOne{12, 3, 5, 6, 23, 2, 9, 13, 8, 4, 7};
	vector<int> arrayTwo{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	vector<int> arrayThree{10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	
	bubbleSort(arrayOne);
	bubbleSort(arrayTwo);
	bubbleSort(arrayThree);

	printVector(arrayOne);
	printVector(arrayTwo);
	printVector(arrayThree);
}
