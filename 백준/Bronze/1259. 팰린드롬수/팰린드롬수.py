l = str(input())

while l != '0':
    if l==l[::-1]:
        print("yes")
    else:
        print("no")
    l = str(input())