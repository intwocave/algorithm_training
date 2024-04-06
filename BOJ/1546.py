n = int(input())
seiseki = list(map(int, input().split()))

max = seiseki[0]

for i in range(n-1):
    if seiseki[i+1] > max:
        max = seiseki[i+1]

sum = 0

for i in range(n):
    sum = sum + seiseki[i] / max * 100

avg = sum / n

print(avg)