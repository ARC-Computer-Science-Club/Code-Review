# largest prime factor of the number 600851475143
# Person addition: Must work with any given int
from math import *
NUM = 600851475143
MAX = trunc(sqrt(NUM))  # largest possible factor of the given number
factor = []
factor2 = []
maxPrime = 2
isPrime = True

for i in range(2, MAX):
    if NUM % i == 0:
        factor.append(i)
for i in range(len(factor)):
    factor2.append(NUM / factor[len(factor) - i - 1])
factor += factor2
for x in factor:
    isPrime = True
    for j in range(2, trunc(sqrt(x))):
        if x % j == 0:
            isPrime = False
            break
    if isPrime:
        maxPrime = x
print(maxPrime)
