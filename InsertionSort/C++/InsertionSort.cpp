#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

void insertionSort(vector <int> & vec)
{
	int elem = 0, k = 0;

	for(int i = 1; i < vec.size(); i++)
	{
		elem = vec[i];
		k = i - 1;
		while(k >= 0 && vec[k] > elem)
		{
			vec[k + 1] = vec[k];
			k--;
		}
		vec[k + 1] = elem;
	}	
}

void printVector(vector <int> & vec)
{
	cout << "[";
	for(int i = 0; i < vec.size() - 1; i++)
		cout << vec[i] << ", ";

	cout << vec[vec.size() - 1] << "]" << endl;
}

int main()
{
	srand(time(NULL));

	vector <int> vecOne = {12, 3, 5, 6, 23, 2, 9, 13, 8, 4, 7};
	vector <int> vecTwo = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	vector <int> vecThree = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	vector <int> vecFour;

	for(int i = 0; i < 20; i++)
		vecFour.push_back(rand() % 30);

	insertionSort(vecOne);
	insertionSort(vecTwo);
	insertionSort(vecThree);
	insertionSort(vecFour);


	printVector(vecOne);
	printVector(vecTwo);
	printVector(vecThree);
	printVector(vecFour);

	return 0;
}
