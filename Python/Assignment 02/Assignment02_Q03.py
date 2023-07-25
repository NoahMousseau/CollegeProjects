import random
b=0
evenCount=0
oddCount=0
for x in range(0,100):
    b=random.randrange(0,100,1)
    if(b%2)==0:
        evenCount=evenCount+1
    else:
        oddCount=oddCount+1
print("Out of 100 random numbers, "+str(oddCount)+" were odd, and "+str(evenCount)+" were even.")
