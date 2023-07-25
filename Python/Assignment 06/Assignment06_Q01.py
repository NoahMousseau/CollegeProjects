value=1
while(value==1):
    userInput1=input("Enter a number: ")
    userInput2=input("Enter another number: ")
    added=float(userInput1)+float(userInput2)
    print("The sum of the numbers you entered is: "+str(float(added)))
    userInput3=input("Do you want to do that again? (y/n): ")
    if (userInput3=="n"):
        value=0
