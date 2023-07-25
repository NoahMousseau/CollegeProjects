import random
x=0
coinFlip=0
userGuess=0
userCorrect=0
flipNumber=0
#1=Heads
#2=Tails
while x!=9:
    print("Enter 1 for Head")
    print("Enter 2 for Tails")
    print("Enter 9 to exit")
    userInput=input()
    userGuess=int(userInput)
    coinFlip=random.randrange(1,3,1)
    if int(userInput)==9:
        x=9
    if userGuess==coinFlip:
        if int(userInput)!=9:
            print("You Won")
            flipNumber+=1
            userCorrect+=1
        else:
            print("Number of flips "+str(flipNumber))
            print("You Won "+str(userCorrect)+" Time(s)")
    elif userGuess!=coinFlip:
        if int(userInput)!=9:
            print("You Lost")
            flipNumber+=1
        else:
            print("Number of flips "+str(flipNumber))
            print("You Won "+str(userCorrect)+" Time(s)")
