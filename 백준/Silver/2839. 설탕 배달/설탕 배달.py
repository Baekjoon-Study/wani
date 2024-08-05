n = int(input())
cnt = 0
kg_3 = 3 ; kg_5 = 5
while True:
    if n % kg_5 == 0 and n != 0:
        n = n - kg_5
        cnt += 1
    elif n % kg_3 == 0 and n != 0:
        n = n - kg_3
        cnt += 1
    elif n - kg_5 >= 0:
        n = n - kg_5
        cnt += 1
    elif n - kg_3 >= 0:
        n = n - kg_3
        cnt += 1
    elif n == 0:
        print(cnt)
        break
    else:
        print(-1)
        break