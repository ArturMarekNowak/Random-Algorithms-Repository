def caesarDecipher(txt, shift = 3): 
     
    result = ""
    
    if shift > 26:
        shift = shift % 26

    for i in range(len(txt)):
        char = txt[i]

        if(char.islower()):
            result += chr((ord(txt[i]) - shift - 97) % 26 + 97)
        elif(char.isupper()):
            result +=  chr((ord(txt[i]) - shift - 65) % 26 + 65)
        else:
            result += chr(ord(txt[i]) - shift)
    
    return result



def caesarCipher(txt, shift = 3):
    
    result = ""

    if shift > 26:
        shift = shift %26

    for i in range(len(txt)):
        char = txt[i]

        if(char.islower()):
            result += chr((ord(txt[i]) + shift - 97) % 26 + 97)
        elif(char.isupper()):
            result +=  chr((ord(txt[i]) + shift - 65) % 26 + 65)
        else:
            result += chr(ord(txt[i]) + shift)

    return result


txtOne = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua."

print(txtOne)
print()
rc = caesarCipher(txtOne)
print(rc)
print(caesarDecipher(rc))
print()
rc = caesarCipher(txtOne, 35)
print(rc)
print(caesarDecipher(rc, 35))

