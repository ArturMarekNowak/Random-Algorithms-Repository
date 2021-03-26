#include <iostream>
#include <algorithm>
#include <string>

int distinct(std::string someString)
{
	if(someString.size() == 0)
		return 0;

	sort(someString.begin(), someString.end());
	int previous = 0, result = 1;
	for(int i = 1; i < someString.size(); i++)
	{
		previous = someString[i - 1];
		if(previous != someString[i])
			result++;
	}
	return result;
}

int main()
{
	std::string stringOne = {2, 1, 1, 2, 3, 1};

	std::cout << distinct(stringOne) << std::endl;

	return 0;
}
