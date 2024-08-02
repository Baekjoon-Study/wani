n = int(input())
l = list(map(int,input().split()))
m = max(l) ; sum = 0
for i in l:
    sum += i/m * 100
print(f'{sum/n:.6f}')