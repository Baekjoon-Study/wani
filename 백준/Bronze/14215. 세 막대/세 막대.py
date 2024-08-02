a, b, c = map(int, input().split())
if sum([a,b,c]) - max([a,b,c]) <= max([a,b,c]):
    print((sum([a,b,c]) - max([a,b,c])) * 2 - 1)
else:
    print(sum([a,b,c]))