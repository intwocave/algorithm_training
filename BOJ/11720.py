n = int(input())
retsu = input()
sum = 0

for i in range(n):
    sum = sum + int(retsu[i:i+1])

print(sum)