s = input().upper()
l = [0]*26 ; count = 0
for i in range(len(s)):
    l[ord(s[i])-65] += 1
M = max(l)
for i in range(26):
    if l[i] == M:
        count += 1
if count == 1:
    print(chr(l.index(M)+65))
else:
    print('?')