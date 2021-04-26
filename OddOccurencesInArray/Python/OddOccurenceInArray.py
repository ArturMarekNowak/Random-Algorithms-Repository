def oddOccurences(someList):
    # write your code in Python 3.6
    tempList = sorted(someList)
    if len(tempList) % 2 == 0:
        for i in range(0, len(tempList)-2, 2):
            if(tempList[i] != tempList[i + 1]):
                return tempList[i]
    
    if len(tempList) % 2 == 1:
        for i in range(0, len(tempList)-2, 2):
            if(tempList[i] != tempList[i + 1]):
                return tempList[i]
        return tempList[-1]
    return 0

listOne = [9, 3, 9, 3, 9, 7, 9]
print(oddOccurences(listOne))
