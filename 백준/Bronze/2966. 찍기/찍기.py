n = int(input())
answer = input()
A = 'ABC'*(n//3+1)
B = 'BABC'*(n//4+1)
G = 'CCAABB'*(n//6+1)
Ac = 0 ; Bc = 0 ; Gc = 0
for i in range(n):
    if answer[i] == A[i]:
        Ac += 1
    if answer[i] == B[i]:
        Bc += 1
    if answer[i] == G[i]:
        Gc += 1
max = max(Ac,Bc,Gc)
print(max)
if Ac == max:
    print('Adrian')
if Bc == max:
    print('Bruno')
if Gc == max:
    print('Goran')