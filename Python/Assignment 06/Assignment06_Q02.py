import random
userInputName=input("Enter the name of the file to which results should be written: ")
userInputAmount=input("Enter the number of random numbers to be written to the file: ")
amount=int(userInputAmount)
x=0
with open(userInputName,"w") as fileRef:
    while (x!=amount):
        value=random.randrange(1,100)
        value=str(value)
        fileRef.write(value+"\n")
        x=x+1
