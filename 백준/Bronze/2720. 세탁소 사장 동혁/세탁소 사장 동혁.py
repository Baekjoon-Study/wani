n = int(input())
l = [0]*4
Q = 25 ; D = 10 ; N = 5 ; P = 1
for _ in range(n):
    l = [0 for _ in range(4)]
    d = int(input())
    while d >= Q:
        l[0] += 1
        d -= Q
    while d >= D:
        l[1] += 1
        d -= D
    while d >= N:
        l[2] += 1
        d -= N
    while d >= P:
        l[3] += 1
        d -= P
    print(*l)