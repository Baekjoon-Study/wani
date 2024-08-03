s = input()
sec = 0
for i in range(len(s)):
    if ord('A') <= ord(s[i]) <= ord('C'):
       sec += 3 
    elif ord('D') <= ord(s[i]) <= ord('F'):
       sec += 4
    elif ord('G') <= ord(s[i]) <= ord('I'):
       sec += 5
    elif ord('J') <= ord(s[i]) <= ord('L'):
       sec += 6
    elif ord('M') <= ord(s[i]) <= ord('O'):
       sec += 7
    elif ord('P') <= ord(s[i]) <= ord('S'):
       sec += 8
    elif ord('T') <= ord(s[i]) <= ord('V'):
       sec += 9
    elif ord('W') <= ord(s[i]) <= ord('Z'):
       sec += 10
print(sec)