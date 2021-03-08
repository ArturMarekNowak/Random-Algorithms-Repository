#include <iostream>
#include <vector>

int binarySearch(std::vector <int> & someVec, int begin, int end, int value)
{
	if(end >= begin)
	{
		int middleIndex = (begin + end) / 2;

		if(someVec[middleIndex] == value)
			return middleIndex;

		if(value >= someVec[middleIndex])
			return binarySearch(someVec, middleIndex + 1, end, value);
		else 
			return binarySearch(someVec, begin, middleIndex - 1, value);
	}
	return -1;
}

int main()
{
	std::vector <int> vec = {0, 1, 4, 9, 16, 25, 36, 49, 64, 81, 100, 121, 144, 169, 196, 225, 256, 289, 324, 361, 400, 441, 484, 529, 576, 625, 676, 729, 784, 841};
	
	puts("0, 1, 4, 9, 16, 25, 36, 49, 64, 81, 100, 121, 144, 169, 196, 225, 256, 289, 324, 361, 400, 441, 484, 529, 576, 625, 676, 729, 784, 841");

	std::cout << "Searched for 2, result: " << binarySearch(vec, 0, vec.size() - 1, 2) << std::endl;
	std::cout << "Searched for 4, result: " << binarySearch(vec, 0, vec.size() - 1, 4) << std::endl;
	std::cout << "Searched for 10, result: " << binarySearch(vec, 0, vec.size() - 1, 10) << std::endl;
	std::cout << "Searched for 257, result: " << binarySearch(vec, 0, vec.size() - 1, 257) << std::endl;
	std::cout << "Searched for 256, result: " << binarySearch(vec, 0, vec.size() - 1, 256) << std::endl;
	std::cout << "Searched for 400, result: " << binarySearch(vec, 0, vec.size() - 1, 400) << std::endl;
	std::cout << "Searched for 441, result: " << binarySearch(vec, 0, vec.size() - 1, 441) << std::endl;
}
