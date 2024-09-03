n = int(input())
t = n
new = 100
count = 0
while new != n:
    count += 1
    if t < 10:
        new = t*10 + t
    else:
        ten = t//10
        one = t%10
        new = (ten+one)%10 + t%10 *10
    t = new
print(count)