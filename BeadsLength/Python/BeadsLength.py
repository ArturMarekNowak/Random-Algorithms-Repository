def beadsLength(arr):
    
    result = []
    for i in range(len(arr)):
        
        counter = 1
        j = i
        
        while(arr[j] != i):
            j = arr[j]           
            counter = counter + 1
        
        result.append(counter)
    
    return result

A = (6, 4, 0, 3, 1, 2, 5)
print(A)
print(beadsLength(A))

