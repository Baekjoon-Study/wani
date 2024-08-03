n = int(input())
count = n
for _ in range(n):
    s = input()
    l = []
    for i in range(len(s)):
        if s[i] in l:
            if s[i-1] != s[i]:
                count -= 1
                break
        else:
            l.append(s[i])
print(count)