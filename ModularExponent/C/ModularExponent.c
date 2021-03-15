#include<stdio.h>

int modularExponent(int base, int power, int mod)
{
	if(mod == 1)
		return 0;

	int result = 1;
	for(int i = 0; i < power; i++)
		result = (base * result) % mod;

	return result;
}

int main()
{
	printf("%d\n", modularExponent(4, 8, 9));
	printf("%d\n", modularExponent(111, 23, 7));
	printf("%d\n", modularExponent(4, 13, 497));

	return 0;
}
