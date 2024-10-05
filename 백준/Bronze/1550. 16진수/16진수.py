# 1550
hex = '0123456789ABCDEF'
user = input()
sum = 0
for idx,i in enumerate(user):
    sum += hex.index(i)*16**(len(user)-idx-1)
print(sum)