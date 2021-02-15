'''
This script implements Riemann's Integral
a - left border of integration
b - right border of integration 
n - number of rectangles between borders
tup - tuple containg coefficients of polynomial
'''

import math

def function(tup, x):

    result = 0
    
    for i in range(len(tup)):
        result += tup[i] * math.pow(x, len(tup) - 1 - i)
 
    return result 

def riemannIntegral(a, b, n, tup):

    d = (b - a) / n
    k = 0
    P = 0
    while k != n:
        x = a + d * k + d / 2
        #P += d * abs(function(tup, x))
        P += d * function(tup, x)
        k += 1

    return P

tupOne = (1, 0, 0)
tupTwo = (1, -1, -13, 13, 36, -36)

[print("x^2: \t %f, \t\t x^5-x^4-13x^3+13x^2+36x-36: \t %f" % (riemannIntegral(1, 3, i, tupOne), riemannIntegral(1, 3, i, tupTwo))) for i in range(2, 100)]
