l = [0]*9 ; M = 0
for i in range(9):
    k = list(map(int,input().split()))
    l[i] = k
    M = max(M,max(k))
print(M)
for i in range(9):
    for j in range(9):
        if l[i][j] == M:
            print(i+1,j+1)
            break