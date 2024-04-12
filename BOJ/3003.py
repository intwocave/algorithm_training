arr = input("").split()
pre = (1, 1, 2, 2, 2, 8)

i =0
for a in arr:
    arr[i] = int(a)
    print(pre[i]-arr[i], end=" ")
    i = i+1