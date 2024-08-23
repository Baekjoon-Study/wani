alpha ='abcdefghijklmnopqrstuvwxyz'
n = int(input())
s = input()
result = 0
for i in range(0,n):
    result += (alpha.index(s[i])+1) * 31**i
print(result%1234567891)