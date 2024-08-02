n, key = map(int, input().split())
a = list(map(int,input().split()))
for i in range(n):
    if a[i] < key:
        print(a[i], end=' ')