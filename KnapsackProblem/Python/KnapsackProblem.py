def knapsackProblem(someListOfLists, index, capacity):
    
    weight = someListOfLists[index][0]
    price = someListOfLists[index][1] 
    if index == 0 or capacity == 0:
        return 0
    elif weight > capacity:
        return knapsackProblem(someListOfLists, index - 1, capacity)
    else:
        tempOne = knapsackProblem(someListOfLists, index - 1, capacity)
        tempTwo = price + knapsackProblem(someListOfLists, index - 1, capacity - weight)
        result = max(tempOne, tempTwo)
        return result
                                    

listOfListsOne = [[1, 5], [2, 3], [4, 3], [2, 3], [5, 2]]
listOfListsTwo = [[10, 60], [20, 100], [30, 120]]
print(knapsackProblem(listOfListsOne, len(listOfListsOne) - 1, 10))
print(knapsackProblem(listOfListsTwo, len(listOfListsTwo) - 1, 50))
