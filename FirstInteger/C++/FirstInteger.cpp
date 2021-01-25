#include <iostream>
#include <vector>

using namespace std;

int firstInteger(vector <int> & A)
{
	int answer = 1;
	for(int i = 0; i < A.size(); i++){

		for(int j = 0; j < A.size(); j++){
			
			if(A[j] == answer)
				answer++;
		}
	}
	printf("answer: %d\n", answer);
	return answer;
}

int main()
{
	vector <int> arrOne = {1, 3, 6, 4, 1, 2};
	vector <int> arrTwo = {1, 2, 3};
	vector <int> arrThree = {-1, -3};
	

	firstInteger(arrOne);
	firstInteger(arrTwo);
	firstInteger(arrThree);
}
