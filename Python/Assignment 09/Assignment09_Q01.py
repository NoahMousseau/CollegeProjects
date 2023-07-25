with open("WorldSeries.txt","r") as mainRef:
    winDict={}
    teamYearDict={}
    start=1903
    for line in mainRef:
        if start!=1904 and start!=1994:
            string=str(line)
            stripString=string.replace("\n","")
            if stripString=="New York Yankees ":
                stripString="New York Yankees"
            teamYearDict[start]=stripString
        start+=1
    valueList=teamYearDict.values()
    noDupliList=[]
    for i in valueList:
        if i not in noDupliList:
            noDupliList.append(i)
    for i in noDupliList:
        winDict[str(i)]=0
    for i in noDupliList:
        for j in valueList:
            if str(i)==str(j):
                winDict[str(i)]+=1
    userInput=input("Enter a year in the range 1903-2009: ")
    if int(userInput)==1904 or int(userInput)==1994:
        print("The world series wasn't played in the year "+str(userInput))
    elif int(userInput)<1903:
        print("The world series wasn't played in the year "+str(userInput))
    elif int(userInput)>2009:
        print("The data for the year 2010 is not included in our database")
    else:
        for i in teamYearDict:
            if int(userInput)==i:
                print("The team that won the world series in "+str(userInput)+" is the "+str(teamYearDict[i]))
                teamName=teamYearDict[i]
                teamWins=winDict[teamName]
                print("They won the world series "+str(teamWins)+" times")
