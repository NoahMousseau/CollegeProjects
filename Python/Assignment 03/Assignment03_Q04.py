string1="to be or not to be that is the question"
string2=""
x=""
cipherTextMain=""
length1=len(string1)
cipherText1=""
cipherText2=""
cipherText3=""
y=""
for i in range(0, length1):
    x=(string1[i])
    if(ord(x)!=32):
        string2=string2+x
#removed spaces
print(string1)
print(string2)
length2=len(string2)
for i in range(0, length2,4):
    y=(string2[i])
    cipherText1=cipherText1+y
for i in range(1, length2,2):
    y=(string2[i])
    cipherText2=cipherText2+y
for i in range(2, length2,4):
    y=(string2[i])
    cipherText3=cipherText3+y
cipherTextMain=cipherText1+cipherText2+cipherText3
print(cipherTextMain)
#I spent an hour and a half on this trying to get this to work. Thing is, from the examples it gives, a 3rd rail
#cipher doesnt make sense. Just to show an example, "to be or not to be that" would start with the ciphertext "te  ea",
#not " toeh". Granted, I tried removing spaces to get closer to the sample output, but this didn't work.
#In my program, I show the sample input, that same sample input without space, and the 3rd rail cipher of the input
#without spaces. 
