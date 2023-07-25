def string_total():
    numbers=input("Enter a sequence of digits with nothing separating them: ")
    total=0
    y=""
    z=0
    length=len(numbers)
    for i in range(0,length):
        y=(numbers[i])
        z=int(y)
        total=total+z
    print("The total of the digits in the string you entered is: "+str(total))
string_total()
