with open("golf.txt","w") as mainRef:
    userNumber=input("Enter the number of players in the tournament: ")
    for i in range(int(userNumber)):
        userName=input("Enter the name of the player: ")
        userScore=input("Enter the golf score: ")
        mainRef.write(userName+"\n")
        mainRef.write(userScore+"\n")
with open("golf.txt","r") as mainRef:
    sum=0.0
    valueList=[]
    for line in mainRef:
        valueList.append(line)
fixedList=[]
for i in valueList:
    fixedList.append(i.strip())
for i in range(len(fixedList)):
    if (i%2==0):
        print("Name: "+str(fixedList[i]))
    else:
        sum+=float(fixedList[i])
        print("Golf Score: "+str(fixedList[i]))
averageScore=sum/(len(fixedList)/2)
print("Average score = "+str(averageScore))
