roomNumber={'CS1010':3004,'CS102':4501,'CS103':6755,'NT110':1244,'CM241':1411}
instructor={'CS1010':'Haynes','CS102':'Alvarado','CS103':'Rich','NT110':'Burke','CM241':'Lee'}
meetingTime={'CS1010':'8:00 a.m.','CS102':'9:00 a.m.','CS103':'10:00 a.m.','NT110':'11:00 a.m.','CM241':'1:00 p.m.'}
userInput=input("Enter a course number: ")
if str(userInput) in roomNumber:
    print("The detailers for course "+str(userInput)+" are:")
    print("Room:", end=" ")
    print(roomNumber[str(userInput)])
    print("Instructor:", end=" ")
    print(instructor[str(userInput)])
    print("Time:", end=" ")
    print(meetingTime[str(userInput)])
else:
    print(str(userInput)+" is an invalid course number")
