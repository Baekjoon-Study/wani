def Rev(s):
    s = str(s)
    return(int(s[::-1]))
a,b=input().split()
print(Rev(Rev(a)+Rev(b)))