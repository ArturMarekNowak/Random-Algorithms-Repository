def passingCars(someArray):
    if len(someArray) == 1:
        return 0

    counter = 0
    result = 0
    for i in reversed(someArray):
        if i == 1:
            counter += 1
        else:
            result += counter
            if(result > 1e9):
                return -1

    return result

print(passingCars([0, 1, 0, 1, 1]))
