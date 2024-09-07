n,m = map(int,input().split())
row = [0]*m
column = 0
r_count = 0
count = 0
for _ in range(n):
    l = list(input())
    if 'X' in l:
        for i in range(len(l)):
            if l[i] == 'X':
                row[i] += 1
    else:
        r_count += 1
for j in row:
    if j == 0:
        count += 1
if count >= r_count:
    print(count)
else:
    print(r_count)