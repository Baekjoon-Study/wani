n = int(input())
user = list(map(int,input().split()))
print(len(user)-len(set(user)))