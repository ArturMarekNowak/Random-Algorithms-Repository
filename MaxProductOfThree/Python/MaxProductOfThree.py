def maxProductOfThree(someList):
    temp = sorted(someList, reverse = True)
    return max(temp[0] * temp[1] * temp[2], temp[0] * temp[-1] * temp[-2])

listOne = [-3, 1, 2, -2, 5, 6]
print(maxProductOfThree(listOne))
