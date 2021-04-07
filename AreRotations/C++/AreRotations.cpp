#include <iostream>
#include <string>

bool notSoSmartAreRotations(std::string a, std::string b)
{
	if(a.length() != b.length())
		return false;
	
	int trueCounter = 0;
	for(int i = 0; i < a.length(); i++)
	{
		for(int j = 0; j < a.length(); j++)
		{
			if(a[(j + i) % a.length()] == b[j])
				trueCounter++;
		
			//std::cout << "a: " << a[(j + i) % a.length()] << "b:" << b[j] << "cnt: " << trueCounter << std::endl;
			
			if(trueCounter == a.length())
				return true;
		}
		trueCounter = 0;
	}
	return false;
}

bool areRotations(std::string a, std::string b)
{
	if(a.length() != b.length())
		return false;

	std::string temp = a + a;
	return (temp.find(b) != std::string::npos);
}

int main()
{
	std::cout << "Place two DNA Lines: " << std::endl;
	std::string firstLineDNA = "";
	std::getline (std::cin, firstLineDNA);
	std::string secondLineDNA = "";
	std::getline (std::cin, secondLineDNA);

	std::cout << areRotations(firstLineDNA, secondLineDNA) << std::endl;
	std::cout << notSoSmartAreRotations(firstLineDNA, secondLineDNA) << std::endl;
}
