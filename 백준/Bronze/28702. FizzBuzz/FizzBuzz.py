l=[]
n = 0
for _ in range(3):
    l.append(input())
    
for i in range(3):
    if l[i] in 'FizzBuzz':
        pass
    else:
        l[i] = int(l[i])
        n = l[i] +3 - i

if n%3==0 and n%5==0:
    print("FizzBuzz")
elif n%3==0:
    print("Fizz")
elif n%5==0:
    print("Buzz")
else:
    print(n)