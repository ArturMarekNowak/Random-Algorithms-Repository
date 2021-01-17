import random 

def bubbleSort(arr):

    for i in range(1, len(arr)):
        
        for j in range(len(arr) - i):
            
            if arr[j + 1] < arr[j]:
                arr[j + 1], arr[j] = arr[j], arr[j + 1]
    return arr

a = [12, 3, 5, 6, 23, 2, 9, 13, 8, 4, 7]
b = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
c = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
d = [random.randint(0, 10) for i in range(random.randint(10, 20))]

print(bubbleSort(a))
print(bubbleSort(b))
print(bubbleSort(c))
print(bubbleSort(d))
