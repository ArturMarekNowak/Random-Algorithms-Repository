#include <iostream>

int frogJump(int X, int Y, int D)
{
	if(X >= Y)
		return 0;

	if((X - Y) % D == 0)
		return (Y - X) / D;

	return (Y - X) / D + 1;
}

int main()
{
	std::cout << frogJump(10, 85, 30) << std::endl;
	return 0;
}

