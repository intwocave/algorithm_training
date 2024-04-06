n = int(input())
retsu = input().split()
retsu = list(map(int, retsu))

max = retsu[0]
min = retsu[0]

for i in range(n-1):
    if retsu[i+1] > max:
        max = retsu[i+1]
    elif retsu[i+1] < min:
        min = retsu[i+1]

print(min, max)