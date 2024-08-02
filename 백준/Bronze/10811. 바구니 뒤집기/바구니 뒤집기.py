l = []
l_len, n = map(int,input().split())
l = [i+1 for i in range(l_len)]
for _ in range(n):
    j, k = map(int, input().split())
    r = []
    if j == 1:
        r = l[k-1::-1]
    else:
        r = l[k-1:j-2:-1]
    for i in range(j-1,k):
        l[i] = r[i-j+1]
print(*l)