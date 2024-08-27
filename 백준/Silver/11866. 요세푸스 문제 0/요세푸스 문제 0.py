n,k = map(int,input().split())
l = [i+1 for i in range(n)]
result = []
idx = 0
while l != []:
    idx += k-1
    idx = idx % len(l)
    result.append(l.pop(idx))
print(f'<{", ".join(map(str,result))}>')