n, x = input().split()
x = int(x)
retsu = tuple(input().split())

for i in retsu:
    if x > int(i):
        print(i+' ', end='')