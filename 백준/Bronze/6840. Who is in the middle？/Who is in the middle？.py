l = []
for _ in range(3):
    l.append(int(input()))
del l[l.index(max(l))]
del l[l.index(min(l))]
print(l[0])