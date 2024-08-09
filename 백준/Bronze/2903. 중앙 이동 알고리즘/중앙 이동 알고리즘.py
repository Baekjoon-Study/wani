n = int(input())
result = 2
for i in range(n):
    result = result + result - 1
print(result**2)