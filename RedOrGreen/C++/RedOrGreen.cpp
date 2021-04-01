#include <iostream>
#include <algorithm>

template <typename T>
T min(T a,T b)
{
	return (a < b) ? a : b;
}

int redOrGreen(std::string someString)
{
	return min(count(someString.begin(), someString.end(), 'G'), count(someString.begin(), someString.end(), 'R'));
}

int main()
{
	//GeeksForGeeks task
	//Expected Output 2 and 1
	std::string stringOne = "RGRGR";
	std::string stringTwo = "GGGGGGR";

	std::cout << redOrGreen(stringOne) << std::endl;
	std::cout << redOrGreen(stringTwo) << std::endl;

	return 0;
}
