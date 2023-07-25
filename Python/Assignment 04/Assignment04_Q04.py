userList=[]
total=0
high=0
low=100000000000000000
average=0.0
#Just needed a really high number to start from to find the minimum
for i in range(0,10):
    a=input("Enter a number: ")
    userInt=int(a)
    total=total+userInt
    userList.append(userInt)
    if (userInt>high):
        high=userInt
    if (userInt<low):
        low=userInt
average=sum(userList)/len(userList)
total=float(total)
high=float(high)
low=float(low)
print("Low: "+str(low))
print("High: "+str(high))
print("Total: "+str(total))
print("Average: "+str(average))
