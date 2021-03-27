#include <iostream>
#include <vector>

int passingCars(std::vector<int> & someVec)
{
	if(someVec.size() == 1)
		return 0;

	int counter = 0, result = 0;
	for(int i = someVec.size() - 1; i >= 0; i--)
		if(someVec[i] == 1)
			counter++;
		else if(someVec[i] == 0)
		{
			result += counter;
			if(result > 1000000000)
				return -1;
		}
	
	return result;
}

int main()
{
	std::vector<int> vecOne = {0, 1, 0, 1, 1};

	std::cout << passingCars(vecOne) << std::endl;

	return 0;
}
