def factorial(N):

    if (N == 1 or N == 0):
        
        return 1
    
    elif (N > 1):
    
        result = 1

        for i in range(1, N + 1):
            result *= i
        
        return result

    elif (N < 0):
        return "Error"



def binomialCoefficient(listOfCoefficients):
    
    n = listOfCoefficients[0] 
    k = listOfCoefficients[1] 

    result = factorial(n) / (factorial(k) * factorial(n - k))

    return result
    

listOne = [7, 2]
listTwo = [40, 20]

print(binomialCoefficient(listOne))
print(binomialCoefficient(listTwo))
