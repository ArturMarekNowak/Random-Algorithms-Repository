def fibonacciSequence(N): 

    result = []
    previous = 1
    previousPrevious = 1
    result.append(1)
    result.append(1)
    for i in range(N - 3):

        current = previous + previousPrevious
        result.append(current)
        previousPrevious = previous
        previous = current 
    
    
    return result

print(fibonacciSequence(100))
