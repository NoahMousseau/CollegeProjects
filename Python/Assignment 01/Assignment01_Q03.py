a=0
b=10
for x in range(a,b+1,1):
    print(x, end=" ")
print("")
z=0
for y in range(a,b+1,1):
    z+=y
print("The sum of the integers from "+str(a)+" and "+str(b)+" is "+str(z))
