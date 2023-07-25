with open("thisFile.txt","r")as mainRef:
    value=-1
    with open("thatFile.txt","w")as subRef:
        for line in mainRef:
            value+=1
            if (value%2==0):
                subRef.write(line)
