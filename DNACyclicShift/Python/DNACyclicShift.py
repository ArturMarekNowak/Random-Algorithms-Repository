def areRotations(someString, someSubstring):

    tempString = 2 * someString
    return tempString.find(someSubstring, 0, len(tempString))

print(areRotations("AACD", "ACDA"))
print(areRotations("AACD", "AADC"))



