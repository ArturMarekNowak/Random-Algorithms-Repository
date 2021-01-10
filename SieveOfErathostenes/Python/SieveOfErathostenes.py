def Sieve(N):
    
    result = []
    arr = [True] * 100
    
    for i in range(2, int(N**(1/2.0))):
        if arr[i] == True:
            for j in range(i + i, N, i):
                arr[j] = False
    
    for i in range(N):
        if arr[i] == True and i != 0 and i != 1:
            result.append(i)
    
    print(result)
                

Sieve(100)
