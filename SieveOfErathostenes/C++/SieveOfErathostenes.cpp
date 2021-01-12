#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

class PrintForFun
{
	public:
		void printVal(vector<int> vec)
		{
			for(auto i : vec)
				cout << i << " ";	
			cout << endl;
		}

		void printVal(vector<float> vec)
		{
			for(auto i : vec)
				cout << i << " ";
			cout << endl;
		}
		
		void printVal(vector<double> vec)
		{
			for(auto i : vec)
				cout << i << " ";
			cout << endl;
		}

		void printVal(vector<string> vec)
		{
			for(auto i : vec)
				cout << i << " ";
			cout << endl;	
		}

};

vector<int> sieveOfErathostenes(int N) {
	
	vector <int> result(N, 1);
	
	for(int i = 2; i < sqrt(N); i++) 
	{		
		if(result[i] == 1) 
		{
			for(int j = 2*i; j < N; j += i) {
				result[j] = 0;
			}
		}
	}

	int finalSize = 0;
	for(int i = 0; i < N; i++)
	{
        	if(result[i] != 0) {
                	result[finalSize++] = i;
        	}
	}
	result.resize(finalSize);

	return result;	
}



int main() {
	
	PrintForFun someObj;
		
	vector<int> myVec;

	myVec = sieveOfErathostenes(100);

	someObj.printVal(myVec);		

	return 0; 
}
