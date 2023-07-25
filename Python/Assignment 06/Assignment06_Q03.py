with open("tempconv.txt","w") as fileRef:
    fileRef.write("Fahrenheit  Celcius"+"\n")
    fValue=-11.00
    for i in range(0,21):
        fValue=fValue+1.00
        cValue=(fValue-32)*(5.0/9.0)
        fValueString=str("{:.2f}".format(fValue))
        cValueString=str("{:.2f}".format(cValue))
        fileRef.write("{0:<10}{1:>8}\n".format(fValueString,cValueString))
