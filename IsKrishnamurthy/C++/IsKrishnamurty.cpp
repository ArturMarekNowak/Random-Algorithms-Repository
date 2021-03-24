#include <iostream>
#include <vector>

int factorial(int Number)
{
	if(Number == 0)
		return 1;

	int result = 1;
        for(int i = 1; i < Number + 1; i++)
            result *= i;
        
        return result;
}

bool isKrishnamurthy(int N) {
       	
        int counter = 0, copy = N; 
        do
        {
	    counter += factorial(N % 10);
            N /= 10;
        }
        while(N > 0);

        if(counter == copy)
            return true;
        else
            return false;
}

int main()
{
	std::cout << "145: " <<  isKrishnamurthy(145) << std::endl;
	std::cout << "40585: " << isKrishnamurthy(40585) << std::endl;
	std::cout << "235: " << isKrishnamurthy(235) << std::endl;
	
	return 0;
}
