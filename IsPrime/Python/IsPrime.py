def isPrime(N):

    if N == 1:
        return False

    
    for i in range(2, N):
    
        if N % i == 0:
            return False
    
    
    return True





def isPrimeBetter(N):

    if N <= 1:
        return False

    if N <= 3:
        return True

    if N % 2 == 0 or N % 3 == 0:
        return False

    i = 5
    
    while i * i <= N:
        if N % i == 0 or N % (i + 2) == 0:
            return False
        i = i + 6

    return True


print(isPrime(2))
print(isPrimeBetter(985466431))
