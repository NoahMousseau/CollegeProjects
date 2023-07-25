def star_string(n):
    if n>0:
        for i in range(n):
            print("*",end="")
        print("")
        star_string(n-1)
star_string(6)
