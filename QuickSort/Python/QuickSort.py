import random 

def QuickSort(arr):
    if len(arr) == 1:
        return arr
    elif len(arr) == 0:
        return []
    else:
        
        pivot = arr[-1]
        sortedArr = []
        sortedArr.append(pivot)
        for i in range(len(arr) - 1):
            if arr[i] <= pivot:
                sortedArr.append(arr[i])
            else:
                sortedArr.insert(0, arr[i])
        
        firstHalf = QuickSort(sortedArr[:sortedArr.index(pivot)])
        secondHalf = QuickSort(sortedArr[(sortedArr.index(pivot)+1):])
        secondHalf.insert(0, pivot)
        sortedArr = firstHalf + secondHalf
    
    return sortedArr
            
            


a = [12, 3, 5, 6, 23, 2, 9, 13, 8, 4, 7]
b = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
c = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
d = []
for i in range(12):
    n = random.randint(1, 30)
    d.append(n)

print(QuickSort(a))
print(QuickSort(b))
print(QuickSort(c))
print(QuickSort(d))
