l_len, n = map(int,input().split())
l =[]
for i in range(l_len):
    l.append(i+1)
for _ in range(n):
    k, j = map(int,input().split())
    k_key = l[k-1] ; j_key = l[j-1]
    l[k-1] = j_key ; l[j-1] = k_key
for i in range(l_len):
    print(l[i],end=' ')