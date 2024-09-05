n,k=map(int,input().split())
num = [*map(int,input().split())]
num.sort()
print(num[-k])
