import random
import math

def binarySearch(arr, value):
   
    print(arr)
    if(len(arr) == 1 and value != arr[0]):
        print("%d wasnt found" % value)
        return -1
    else:

        middleIndex = math.floor(len(arr) / 2)
        middleValue = arr[middleIndex]
    
        if(middleValue == value):
            print("%d was found" % value)
            return 1

        else:
            if(value > middleValue):
                return binarySearch(arr[middleIndex:], value)
            elif(value < middleValue):
                return binarySearch(arr[:middleIndex], value)

arr = []
[arr.append(i*i) for i in range(30)]

#print(arr[:16])
#print(arr[16:])

print(arr)
print(binarySearch(arr, 2))
print(binarySearch(arr, 4))
print(binarySearch(arr, 10))
print(binarySearch(arr, 257))
print(binarySearch(arr, 256))
print(binarySearch(arr, 400))
print(binarySearch(arr, 441))
