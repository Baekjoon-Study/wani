import sys
n = int(sys.stdin.readline())
l = [0]*10001
for _ in range(n):
    l[int(sys.stdin.readline())] += 1
for i in range(10001):
    if l[i] != 0:
        for k in range(l[i]):
            print(i)