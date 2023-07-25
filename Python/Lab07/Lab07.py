with open("credit.txt","r")as mainRef:
    nameSpaceCard=[]
    x=0
#Converts the lines of text into a list called nameSpaceCard
    for line in mainRef:
        lineSplitList=line.split()
        first=str(lineSplitList[0])
        second=str(lineSplitList[1])
        cardNumber=str(lineSplitList[2])
        fullNameStr=(first+" "+second)
        nameSpaceCard.append(fullNameStr)
        nameSpaceCard.append(cardNumber)
#Checks to see if user's input name is in the list, if it is, creates a duplicate of the original (as parts of the duplicate are
#deleted in the code), and finds the name the user input and the associated credit card numbers. It then puts these into a list,
#and prints out the name the user input and that name's associated credit card numbers. If the name is not in the list of names, the
#program asks the user if they want to try to put in a new name or not
    while x==0:
        userInput1=input("Enter first and last names with a space between: ")
        printingList=[]
        if (userInput1 in nameSpaceCard):
            dupliNameSpaceCard=nameSpaceCard
            for item in dupliNameSpaceCard:
                if item==userInput1:
                    cardIndexNumber=dupliNameSpaceCard.index(item)+1
                    printingList.append(dupliNameSpaceCard[cardIndexNumber])
                    dupliNameSpaceCard.remove(userInput1)
            print("Cards for "+str(userInput1)+": "+str(printingList))
        else:
            print("The name is not in the database")
        userInput2=input("Do you want to try another name (enter y for yes, n for no?) ")
        if userInput2=="n":
            x=1
