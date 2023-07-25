def one(n):
    print("print Numbers Forward:")
    for x in range(n-(n-1),n+1):
        print(str(x)+" ", end = '')
    print(" ")
def two(n):
    print("print Numbers Backward:")
    for x in reversed(range(n-(n-1),n+1)):
        print(str(x)+" ", end = '')
    print(" ")
def three(n):
    y=0
    for x in range(n-(n-1),n+1):
        if(x%2!=0):
            y=y+x
    print("sum of odd numbers: "+str(y))
def four(n):
    y=0
    for x in range(n-(n-1),n+1):
        if(x%2==0):
            y=y+x
    print("sum of even numbers: "+str(y))
def five(n):
    y=0
    for x in range(n-(n-1),n+1):
        y=y+x
    y=y/n
    print("average of numbers: "+str(y))

one(10)
two(10)
three(10)
four(10)
five(10)
