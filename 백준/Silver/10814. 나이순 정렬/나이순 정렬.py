t = int(input())
d = {}
for i in range(t):
    d[i] = list(input().split())
sorted_d = dict(sorted(d.items(),key=lambda x:(int(x[1][0]),x[0])))
for result in sorted_d.values():
    print(f'{result[0]} {result[1]}')