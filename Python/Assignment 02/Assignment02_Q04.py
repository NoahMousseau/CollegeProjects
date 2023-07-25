aArea=0
bArea=0
def rectArea(aLength=3, bLength=3, aWidth=4, bWidth=4):
    aArea=aLength*aWidth
    bArea=bLength*bWidth
    if aArea>bArea:
        print("Area A: "+str(aArea))
        print("Area B: "+str(bArea))
        print("Area A is greater than Area B")
    elif bArea>aArea:
        print("Area A: "+str(aArea))
        print("Area B: "+str(bArea))
        print("Area B is greater than Area A")
    else:
        print("Area A: "+str(aArea))
        print("Area B: "+str(bArea))
        print("Area A is equal to Area B")
rectArea(3,4,4,5)
