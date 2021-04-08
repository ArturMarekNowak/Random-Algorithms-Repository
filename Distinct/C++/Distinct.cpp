#include <iostream>
#include <algorithm>
#include <vector>

int distinct(std::vector <int> someVec)
{
	if(someVec.size() == 0)
		return 0;

	sort(someVec.begin(), someVec.end());
	int previous = 0, result = 1;
	for(int i = 1; i < someVec.size(); i++)
	{
		previous = someVec[i - 1];
		if(previous != someVec[i])
			result++;
	}
	return result;
}

int main()
{
	std::vector <int> vecOne = {2, 1, 1, 2, 3, 1};

	std::cout << distinct(vecOne) << std::endl;

	return 0;
}
