p = int(input())
plan = [*map(int,input().split())]
real = [*map(int,input().split())]
day = 0
for i in range(p):
    if plan[i] <= real[i]:
        day += 1
print(day)