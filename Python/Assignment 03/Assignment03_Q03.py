def vowels_and_consonants(string=""):
    length=len(string)
    x=0
    y=""
    con=0
    vow=0
    for i in range(0,length):
        y=(string[i])
        x=ord(y)
        if(x==97 or x==101 or x==105 or x==111 or x==117):
            vow=vow+1
        else:
            con=con+1
    print("The string you entered includes "+str(vow)+" vowels and "+str(con)+" consonants")
vowels_and_consonants("california")
