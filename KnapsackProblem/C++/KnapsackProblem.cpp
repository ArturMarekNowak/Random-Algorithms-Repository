#include <iostream>
#include <vector>

template <class T> const T& max(const T& a, const T& b)
{
	return (a > b) ? a : b;
}

int knapsackProblem(const std::vector<std::vector<int>> & vec, int index, int capacity)
{
	if(index == 0 || capacity == 0)
		return 0;
	else if(vec[index][0] > capacity)
		return knapsackProblem(vec, index - 1, capacity);
	else
	{
		int tempOne = knapsackProblem(vec, index - 1, capacity);
		int tempTwo = vec[index][1] + knapsackProblem(vec, index - 1, capacity - vec[index][0]);
		return max(tempOne, tempTwo);
	}

}


int main()
{
	std::vector<std::vector<int>> vectorOne = {{{1, 5}, {2, 3}, {4, 5}, {2, 3}, {5, 2}}};
	std::vector<std::vector<int>> vectorTwo = {{{10, 60}, {20, 100}, {30, 120}}};

	int indexOne = vectorOne.size() - 1;
	int indexTwo = vectorTwo.size() - 1;

	std::cout << knapsackProblem(vectorOne, indexOne, 10) << std::endl;
	std::cout << knapsackProblem(vectorTwo, indexTwo, 50) << std::endl;

	return 0;
}
