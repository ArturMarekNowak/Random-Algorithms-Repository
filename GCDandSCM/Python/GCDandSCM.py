def gcdEuclidian(a, b):

    while a != b:
        if a > b: 
            a = a - b
        elif a < b: 
            b = b - a
        
    return a

def gcdEuclidianMod(a, b):

    while a > 0:
        a = a % b
        b = b - a

    return b

def scm(a, b):

    return a * b / gcdEuclidianMod(a, b)

print(gcdEuclidian(12, 20))
print(gcdEuclidianMod(12, 20))
print(scm(12, 20))
