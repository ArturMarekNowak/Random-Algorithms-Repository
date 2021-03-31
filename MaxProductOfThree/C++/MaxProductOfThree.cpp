#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
int max(T a, T b)
{
	return (a > b) ? a : b;
}

int maxProductOfThree(std::vector<int> someVec)
{
	sort(someVec.rbegin(), someVec.rend());
	return max(someVec[0] * someVec[1] * someVec[2], someVec[0] * someVec[someVec.size() - 2] * someVec[someVec.size() - 1]);
}

int main()
{
	std::vector<int> vecOne = {-3, 1, 2, -2, 5, 6};

	std::cout << maxProductOfThree(vecOne) << std::endl;
	
	return 0;
}
