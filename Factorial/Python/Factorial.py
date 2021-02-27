import math

def recursFactorial(n):
    
    if n == 0:
        return 1

    if n == 1:
        return 1
    
    if n == 2:
        return 2
    
    return n * recursFactorial(n - 1)


def iteratFactorial(n):
    result = 1
    
    for i in range(1, n + 1):
        result *= i

    return result


def gosperFactorial(n):

    return math.pow((2 * n + 1/3) * math.pi, 0.5) * math.pow(n, n) * math.exp((-1) * n)


print("%.5f" % recursFactorial(10))
print("%.5f" % iteratFactorial(10))
print("%.5f" % gosperFactorial(10))
print()
print("%.5f" % recursFactorial(25))
print("%.5f" % iteratFactorial(25))
print("%.5f" % gosperFactorial(25))
print()
print("%.5f" % recursFactorial(100))
print("%.5f" % iteratFactorial(100))
print("%.5f" % gosperFactorial(100))
