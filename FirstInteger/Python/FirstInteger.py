def firstInteger(someTup): 

    answer = 1 

    sortedTup = sorted(someTup)

    for i in range(len(someTup)):
        if sortedTup[i] == answer: 
            answer = answer + 1

    return answer


tupOne = (1, 3, 6, 4, 1, 2)
tupTwo = (1, 2, 3)
tupThree = (-1, -3)

print(tupOne)
print(tupTwo)
print(tupThree)

print(firstInteger(tupOne))
print(firstInteger(tupTwo))
print(firstInteger(tupThree))
