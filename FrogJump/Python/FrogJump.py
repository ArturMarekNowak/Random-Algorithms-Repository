import math

def frogJump(X, Y, D):

    if X >= Y:
        return 0

    if (X - Y) % D == 0:
        return math.floor((Y - X) / D)

    return math.floor((Y - X) / D + 1)

print(frogJump(10, 85, 30))
