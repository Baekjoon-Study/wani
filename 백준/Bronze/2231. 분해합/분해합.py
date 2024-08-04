n = int(input())
M = 0
for i in range(1,n):
    m = n-i
    l = sum(int(i) for i in str(m))
    if m + l == n:
        M = m
print(M)