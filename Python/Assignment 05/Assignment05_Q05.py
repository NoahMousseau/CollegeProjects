def add():
    tuple1=(1,2)
    tuple2=(3,4)
    a=tuple1[0]
    b=tuple1[1]
    c=tuple2[0]
    d=tuple2[1]
    e=(a*d)+(b*c)
    f=(b*d)
    print(str(tuple1)+" + "+str(tuple2)+" = ("+str(e)+","+str(f)+")")
def multiply():
    tuple1=(1,2)
    tuple2=(3,4)
    a=tuple1[0]
    b=tuple1[1]
    c=tuple2[0]
    d=tuple2[1]
    e=a*c
    f=b*d
    print(str(tuple1)+" * "+str(tuple2)+" = ("+str(e)+","+str(f)+")")
add()
multiply()
