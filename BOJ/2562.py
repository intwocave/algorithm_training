retsu = list()
max = 0

for i in range(9):
    retsu.append(int(input()))
    if retsu[i] > max:
        max = retsu[i]

print(max)
print(retsu.index(max) + 1)