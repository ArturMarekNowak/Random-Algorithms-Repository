def CountDiv(A, B, K):
    
    if(A % K == 0): return (B // K) - (A // K) + 1
    else:  return (B // K) - (A // K) 

print(CountDiv(6, 11, 2))
