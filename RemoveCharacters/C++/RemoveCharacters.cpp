#include <iostream>
#include <cstring>
#include <algorithm>

//Task from GeeksForGeeks 

class Solution {
  public:
    std::string removeChars(std::string string1, std::string string2) {
        for(int i = 0; i < string2.length(); i++)
            string1.erase(remove(string1.begin(), string1.end(), string2[i]), string1.end());
            
        return string1;
    }
};

int main()
{
	Solution obj;
	std::cout << obj.removeChars("computer", "cat") << std::endl;
	std::cout << obj.removeChars("there was a cat who couldn't catch his tail", "cat") << std::endl;
	
	return 0;
}
