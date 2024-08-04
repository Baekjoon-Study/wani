s = input() + '  '
l = len(s) -2
for i in range(len(s)):
    if s[i] == 'c':
        if s[i+1] == '=':
            l -= 1
            continue
        elif s[i+1] == '-':
            l -= 1
            continue
    elif s[i] == 'd':
        if s[i+1] == 'z' and s[i+2] == '=':
            l -= 2
            continue
        elif s[i+1] == '-':
            l -= 1
            continue
    elif s[i] == 'l' and s[i+1] == 'j':
        l -= 1
        continue
    elif s[i] == 'n' and s[i+1] == 'j':
        l -= 1
        continue
    elif s[i] == 's' and s[i+1] == '=':
        l -= 1
        continue
    elif s[i-1] != 'd' and s[i] == 'z' and s[i+1] == '=':
        l -= 1
        continue
print(l)