def sqrtNR(number, precision):

    a = number
    
    while a - number / a > precision :
        a = (a + number / a) / 2

    return a

print(sqrtNR(400, 0.000001))
