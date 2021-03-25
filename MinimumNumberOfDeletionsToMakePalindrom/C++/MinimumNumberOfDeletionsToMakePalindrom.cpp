#include <iostream>
#include <string>

int max(int a, int b)
{
	return (a > b) ? a : b;
}

int LongestPalindromicSubsequence(std::string someString, int i, int j)
{
	for(int x = i; x <= j; x++)
		std::cout << someString[x];
	std::cout << std::endl;

	if(i == j) //Only one character
		return 1;

	if(someString[i] == someString[j] && i + 1 == j) //Two the same characters
		return 2;

	if(someString[i] == someString[j]) //Ending characters are the same 
		return LongestPalindromicSubsequence(someString, i+1, j-1) + 2;

	//If the first and last characters do not match
	return max(LongestPalindromicSubsequence(someString, i, j-1), LongestPalindromicSubsequence(someString, i+1, j));
}

int MinimumNumberOfDeletions(std::string someString)
{
	return someString.length() - LongestPalindromicSubsequence(someString, 0, someString.length());
}

int main()
{
	std::string stringOne = "geeksforgeeks";
	
	//CODILITY TASK//
	//Should give 2 but gives 4 :/
 	//std::string stringOne = "ervervige";

	//Should give 0 but gives 2 :/
	//std::string stringOne = "aaabab";
	
	//Should give 0
	//std::string stringOne = "x";




	std::cout << MinimumNumberOfDeletions(stringOne)  << std::endl;

	return 0;
}
