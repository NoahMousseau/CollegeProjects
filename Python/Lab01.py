def falling_distance(t):
    d=(1/2)*9.8*t**2
    print("Falling distance for an object that has been falling for "+str(t)+" seconds is")
    print(str(d)+" meters")
falling_distance(10)
def future_value(P,i,t):
    i=i*0.01
    F=P*(1.0+i)**t
    i=i/0.01
    print("The information for your account is: ")
    print("Present value: $ "+str(P))
    print("Interest rate: % "+str(i))
    print("After "+str(t)+" months, the value of your account will be $ "+str(F))
future_value(10000,0.02,18)
