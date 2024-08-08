n,m = map(int,input().split())
l = [[[0] * m for _ in range(n)] for _ in range(2)]
result = [[0] * m for _ in range(n)]
for k in range(2):
    for i in range(n):
        s = list(map(int,input().split()))
        l[k][i] = s
for i in range(n):
    for j in range(m):
        result[i][j] = l[0][i][j] + l[1][i][j]
for i in range(n):
    print(*result[i])