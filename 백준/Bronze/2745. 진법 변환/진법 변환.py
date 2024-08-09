l ='0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ'
s, b = input().split()
result = 0 ; b = int(b)
for i,n in enumerate(s[::-1]):
    result += (b**i)*l.index(n)
print(result)