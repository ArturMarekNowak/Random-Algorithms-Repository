import math

def function(tup, x):

    result = 0
    
    for i in range(len(tup)):
        result += tup[i] * math.pow(x, len(tup) - 1 - i)
    
    return result 


def bisectionMethod(tup, leftEndPoint, rightEndPoint, precision):
    
    if (function(tup, leftEndPoint) * function(tup, rightEndPoint) > 0):
        return "Root cannot be found"
    
    while ((rightEndPoint - leftEndPoint) >= precision):
        
        d = (leftEndPoint + rightEndPoint) / 2
        
        
        if (function(tup, leftEndPoint) * function(tup, d) < 0):
            rightEndPoint = d
        else:
            leftEndPoint = d

    return d



#Roots: -5, -1, 3
tupOne = (1, 3, -13, -15)

#Roots: -3, -2, 1, 2, 3
tupTwo = (1, -1, -13, 13, 36, -36)



print(bisectionMethod(tupOne, -10.123, -4.456, 0.01))                                 

print(bisectionMethod(tupOne, -4.789, 2.123, 0.0000001))                                 

print(bisectionMethod(tupOne, -0.512, 5.123, 0.0000001))                                 

print(bisectionMethod(tupTwo, -4, -3.5, 0.000001))                                 

print(bisectionMethod(tupTwo, 0, 2.5, 0.000001))                                 

print(bisectionMethod(tupTwo, 0.123, 4.123, 0.000001))                                 

print(bisectionMethod(tupTwo, -2.97, -1.12, 0.000001))     
