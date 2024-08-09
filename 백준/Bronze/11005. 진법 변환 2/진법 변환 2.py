l='0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ'
b_list = []
n,b = map(int,input().split())
while n > 0:
    i = n % b
    b_list.insert(0,l[i])
    n = n // b
print(''.join(b_list))