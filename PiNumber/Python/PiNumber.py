import random

def piNumber(N):

    T = 0

    for i in range(N):
        xCoord = random.uniform(0, 1);
        yCoord = random.uniform(0, 1);

        if(xCoord**2 + yCoord**2 <= 1):
            T += 1

    return 4 * T / N

print("%.50f" % piNumber(10000000))

