# largest palindrome from the product of 2, three-digit numbers

largeP = 1
largePtemp = 1
temp = 0
for i in range(1, 1000):
    for j in range(1, 1000):
        temp = i * j
        if temp == int(str(temp)[::-1]):
            largePtemp = temp
        if largeP < largePtemp:
            largeP = largePtemp
print(largeP)
