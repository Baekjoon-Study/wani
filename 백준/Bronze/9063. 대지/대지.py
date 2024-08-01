n = int(input())
x, y = [], []
for i in range(n):
    xp, yp = map(int, input().split())
    x.append(xp)
    y.append(yp)
print((max(x) - min(x)) * (max(y) - min(y)))