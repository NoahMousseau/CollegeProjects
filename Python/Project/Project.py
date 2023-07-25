#Goals:
#Open data from a file and convert it to a dictionary
#Display a menu with the corresponding details on what the user can do based on their input
#Look up an email address from a name
#Add a new name and email address
#Change an existing name's associated email address
#Delete a name and email address
#Stop/quit the program and save dictionary to a file
with open("emails.txt","r")as mainRef:
    mainDict={}
    for line in mainRef:
        lineStr=str(line)
        splitStr=lineStr.split()
        key=splitStr[0]
        value=splitStr[1]
        mainDict[key]=value
def choices():
    userDecision=input("Enter your choice: ")
    if str(userDecision)=="1":
        lookUp()
    if str(userDecision)=="2":
        add()
    if str(userDecision)=="3":
        change()
    if str(userDecision)=="4":
        delete()
    if str(userDecision)=="5":
        quitProgram()
def menu():
    print("")
    print("Menu")
    print("-------------------------------")
    print("1. Look up an email address")
    print("2. Add a new name and email address")
    print("3. Change an existing email address")
    print("4. Delete a name and email address")
    print("5. Quit the program")
    print("")
    choices()
def lookUp():
    userInput=input("Enter name: ")
    keyDict=mainDict.keys()
    keyList=[]
    for i in keyDict:
        keyList.append(i)
    if str(userInput) in keyList:
        print("Name: "+str(userInput))
        print("Email: "+mainDict[str(userInput)])
    else:
        print("The specified name was not found")
    menu()
def add():
    userName=input("Enter name: ")
    keyDict=mainDict.keys()
    keyList=[]
    for i in keyDict:
        keyList.append(i)
    if str(userName) in keyList:
        print("That name already exists")
    else:
        userEmail=input("Enter email address: ")
        mainDict[str(userName)]=str(userEmail)
        print("Name and address have been added")
    menu()
def change():
    userName=input("Enter name: ")
    keyDict=mainDict.keys()
    keyList=[]
    for i in keyDict:
        keyList.append(i)
    if str(userName) in keyList:
        mainDict.pop(str(userName))
        userEmail=input("Enter the new email address: ")
        mainDict[userName]=userEmail
        print("Information updated")
    else:
        print("The specified name was not found")
    menu()
def delete():
    userName=input("Enter name: ")
    keyDict=mainDict.keys()
    keyList=[]
    for i in keyDict:
        keyList.append(i)
    if str(userName) in keyList:
        mainDict.pop(str(userName))
        print("Information deleted")
    else:
        print("The specified name was not found")
    menu()
def quitProgram():
    with open("emails.txt","w")as mainRef:
        for key in mainDict:
            mainRef.write(str(key)+" ")
            writeStr=str(mainDict[key])+"\n"
            mainRef.write(writeStr)
    print("Information saved")
menu()
