#include <iostream>

int ModularExponent(int base, int power, int mod)
{
	if(mod == 1)
		return 0;

	int result = 1;
	for(int i = 0; i < power; i++)
		result = (result * base) % mod;

	return result;
}

int main()
{
	std::cout << ModularExponent(4, 8, 9) << std::endl;
	std::cout << ModularExponent(111, 23, 7) << std::endl;
	std::cout << ModularExponent(4, 13, 497) << std::endl;
	
	return 0;
}
