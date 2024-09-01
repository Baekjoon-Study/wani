c = int(input())
k,b=map(int,input().split())
k = k//2
if k+b >= c:
    print(c)
else:
    print(k+b)