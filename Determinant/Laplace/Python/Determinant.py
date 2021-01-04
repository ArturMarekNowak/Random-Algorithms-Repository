import random
import copy

def getMinor(matrix, row, col):
    temp = copy.deepcopy(matrix)
    [j.pop(col) for j in temp]
    temp.pop(row) 
    return temp

def printArray(matrix):
    for i in range(len(matrix)):
        for j in range(len(matrix)): 
            print(matrix[i][j], end = '')
            print(" ", end = '')
        print()

def getDeterminant(matrix):
    
    
    if len(matrix) == 2: 
        return matrix[0][0]*matrix[1][1] - matrix[0][1]*matrix[1][0]
    
    sum = 0
    for i in range(len(matrix)):
        
        sum += ((-1)**(1+(i+1))) * matrix[0][i] * getDeterminant(getMinor(matrix, 0, i)) 
    
    return sum

dim = random.randint(2, 8) 

array = [[ random.randint(0, 9) for i in range(dim) ] for j in range(dim) ]

printArray(array)
print(getDeterminant(array))
