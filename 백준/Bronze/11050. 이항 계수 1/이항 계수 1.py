a, b = map(int,input().split())
n = 1
for i in range(a,a-b,-1):
    n *= i
for j in range(1,b+1):
    n /= j
print(int(n))