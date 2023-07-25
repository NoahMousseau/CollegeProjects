with open("fruit.txt","r")as mainRef:
    mainDict={}
    lineCount=1
    for line in mainRef:
        txt=line
        splitLine=txt.split()
        for item in splitLine:
            mainDict[item]=""
with open("fruit.txt","r")as mainRef:
    lineCount=1
    for line in mainRef:
        txt=line
        splitLine=txt.split()
        for item in splitLine:
            if mainDict[item]!=lineCount:
                mainDict[item]+=" "+str(lineCount)
        lineCount+=1
for key in mainDict:
    print(str(key)+" appears in line(s)"+mainDict[key])
