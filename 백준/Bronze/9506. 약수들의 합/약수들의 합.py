n = int(input())
while n != -1:
    l = [] ; sum = 0
    for i in range(1,n):
        if n % i == 0:
            sum += i
            l.append(str(i))
    if sum == n:
        print(f'{n} = {" + ".join(l)}')
    else:
        print(f'{n} is NOT perfect.')
    n = int(input())