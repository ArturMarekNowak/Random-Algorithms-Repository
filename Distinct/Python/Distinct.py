def distinct(someList):
    if len(someList) == 0:
        return 0

    someList = sorted(someList)
    result = 1
    for i in range(1, len(someList)):
        if(someList[i - 1] != someList[i]):
            result += 1

    return result





listOne = [2, 1, 1, 2, 3, 1]

print(distinct(listOne))
