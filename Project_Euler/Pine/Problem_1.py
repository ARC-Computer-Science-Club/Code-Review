x = 3
y = 5
xy = 15
totalX = 1000 // x
totalY = 1000 // y
totalXY = 1000 // xy
total = 0

for i in range(totalX + 1):
    total += (x * i)
for i in range(totalY):
    total += (y * i)
for i in range(totalXY + 1):
    total -= (xy * i)

print(total)