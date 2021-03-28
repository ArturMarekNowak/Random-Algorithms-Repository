#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
T OddOccurencesInsomeVecrray(std::vector<T> & someVec)
{
	sort(someVec.begin(), someVec.end());

	if(someVec.size() % 2 == 0)
	{
		for(int i = 0; i < someVec.size() - 2; i += 2)
			if(someVec[i] != someVec[i + 1])
				return someVec[i];
	}		
	else
	{
		for(int i = 0; i < someVec.size() - 2; i += 2)
			if(someVec[i] != someVec[i + 1])
				return someVec[i];
		return someVec[someVec.size() - 1];
	}
	return 0;
}

int main()
{
	std::vector<int> vecOne = {9, 3, 9, 3, 9, 7, 9};

	std::cout << OddOccurencesInsomeVecrray(vecOne) << std::endl;

	return 0;
}
