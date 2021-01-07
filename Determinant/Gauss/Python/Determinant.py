import random
import copy

def printArray(matrix):
    
    for i in range(len(matrix)):

        for j in range(len(matrix)): 
        
            print(matrix[i][j], end = '')
            print(" ", end = '')
        
        print()


def getDeterminant(matrix, dim):

    for i in range(dim):

        for j in range(dim - i - 1):
            
            temp = array[i+j+1][i]
            temp *= -1

            for k in range(dim):

                array[i+j+1][k] += array[i][k] * temp/array[i][i]
   
    det = 1.0
    for i in range(dim):
        det *= array[i][i]
    
    return det

dim = random.randint(2, 8) 

array = [[ random.randint(2, 9) for i in range(dim) ] for j in range(dim) ]

printArray(array)
print(getDeterminant(array, dim))

