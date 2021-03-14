def modularExponent(base, power, mod):
    
    if mod == 1:
        return 0

    result = 1
    for i in range(power):
        result = (base * result) % mod

    return result

print(modularExponent(4, 8, 9))
print(modularExponent(111, 23, 7))
print(modularExponent(4, 13, 497))
