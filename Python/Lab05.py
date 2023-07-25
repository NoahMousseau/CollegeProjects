def starString():
    userInput=input("Enter a string ")
    vowelCount=0
    userInputOriginalUpper=userInput.upper()
    userInputList=[char for char in userInput]
    print("Old String: "+userInputOriginalUpper)
    for i in userInputList:
        if i=='a':
            index1=userInputList.index(i)
            userInputList.pop(userInputList.index(i))
            userInputList.insert(index1,'*')
            vowelCount=vowelCount+1
        if i=='e':
            index1=userInputList.index(i)
            userInputList.pop(userInputList.index(i))
            userInputList.insert(index1,'*')
            vowelCount=vowelCount+1
        if i=='i':
            index1=userInputList.index(i)
            userInputList.pop(userInputList.index(i))
            userInputList.insert(index1,'*')
            vowelCount=vowelCount+1
        if i=='o':
            index1=userInputList.index(i)
            userInputList.pop(userInputList.index(i))
            userInputList.insert(index1,'*')
            vowelCount=vowelCount+1
        if i=='u':
            index1=userInputList.index(i)
            userInputList.pop(userInputList.index(i))
            userInputList.insert(index1,'*')
            vowelCount=vowelCount+1
    userInput2=""
    for i in userInputList:
        userInput2=userInput2+i
    print("New String: "+userInput2.upper())
    print("Number of vowel characters: "+str(vowelCount))
starString()
