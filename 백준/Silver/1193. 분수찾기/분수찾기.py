n = int(input())
k = n ; count = 0 ; i = 1 ; S = 0
while k > 0:
    k -= i
    S += i
    count += 1
    i += 1
if S>=n:
    if count % 2 == 1:
        print(f'{1-k}/{count + k}')
    else:
        print(f'{count + k}/{1-k}')