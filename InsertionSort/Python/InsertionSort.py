import random

def insertionSort(lis):

    for i in range(1, len(lis)):
        elem = lis[i]
        k = i - 1
        while(k >= 0 and lis[k] > elem):
            lis[k + 1] = lis[k]
            k += -1
        lis[k+1] = elem

    return lis


a = [12, 3, 5, 6, 23, 2, 9, 13, 8, 4, 7]
b = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
c = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
d = []
for i in range(12):
    n = random.randint(1, 30)
    d.append(n)

print(insertionSort(a))
print(insertionSort(b))
print(insertionSort(c))
print(insertionSort(d))

