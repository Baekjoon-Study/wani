n = int(input())
l = list(map(int, input().split()))
key = int(input())
count = 0
for i in range(n):
    if key == l[i]:
        count += 1
print(count)