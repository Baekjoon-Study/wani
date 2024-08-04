n = int(input())
for _ in range(n):
    j, s = input().split()
    j = int(j)
    for i in range(len(s)):
        for k in range(j):
            print(s[i],end='')
    print()