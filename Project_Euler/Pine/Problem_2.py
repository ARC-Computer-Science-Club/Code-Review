#  Sum of even fibinachi numbers under 4 million
first = 1
second = 0
total = 0

while first < 4000000:
    first += second
    second = first - second
    if (first % 2 == 0) and (first < 4000000):
        total += first

print(total)
