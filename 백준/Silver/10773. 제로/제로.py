k = int(input())
num = []
for _ in range(k):
    n = int(input())
    if n == 0:
        if num != []:
            del num[-1]
    else:
        num.append(n)
print(sum(num))