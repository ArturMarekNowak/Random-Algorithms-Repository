#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctype.h>

//In python: -9 mod 26 == 17
//In C: -9 mod 26 == -9
//It must be corrected since it corrupts the output
//To achieve the same % like in Python: ((n % M) + M) % M
//https://stackoverflow.com/questions/1907565/c-and-python-different-behaviour-of-the-modulo-operation

std::string caesarDecipher(std::string str, int shift)
{
	std::string retString = "";	
	
	for(int i = 0; i < str.length(); i++)
	{
		if(isupper(str[i]))
			retString += ((((str[i] - shift) - 65) % 26) + 26) % 26 + 65;
		else if(islower(str[i]))
			retString += ((((str[i] - shift) - 97) % 26) + 26) % 26 + 97;
		else
			retString += str[i] - shift;

	}

	return retString;
}

std::string caesarCipher(std::string & str, int shift)
{
	std::string retString = "";
	
	for(int i = 0; i < str.length(); i++)
	{
		if(isupper(str[i]))
			retString += ((((str[i] + shift) - 65) % 26) + 26) % 26 + 65;
		else if(islower(str[i]))
			retString += ((((str[i] + shift) - 97) % 26) + 26) % 26 + 97;
		else
			retString += str[i] + shift;

	}

	return retString;
}

int main()
{
	std::string txt = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
	std::string rc = caesarCipher(txt, 3);
	std::cout << rc << std::endl;	
	rc = caesarDecipher(rc, 3);
	std::cout << rc << std::endl << std::endl << "And another one:" << std::endl;
	rc = caesarCipher(txt, -114);
	std::cout << rc << std::endl;
	rc = caesarDecipher(rc, -114);
	std::cout << rc << std::endl;
	return 0;
}
