#include <stdio.h>

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
	printf("%d\n", frogJump(10, 80, 30));
	return 0;
}
