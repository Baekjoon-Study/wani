import sys
n = int(input())
l = []
for _ in range(n):
    l.append(int(sys.stdin.readline()))
l = sorted(l)
print(*l,sep='\n')