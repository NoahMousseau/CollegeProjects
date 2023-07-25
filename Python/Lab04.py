def list_range(list1=[]):
    high=0
    low=100000000000000000
    listLen=len(list1)
    theRange=0
    for i in range(listLen):
        a=list1[i-1]
        if (a>high):
            high=a
        if (a<low):
            low=a
    theRange=(high-low)+1
    print("original list: "+str(list1))
    print("list range of values: "+str(theRange))
def is_sorted(list1=[]):
    listLen=len(list1)
    valueTest=0
    print("original list: "+str(list1))
    for i in range(listLen):
        a=list1[i-1]
        b=list1[i]
        if(a<=b):
            valueTest=valueTest+1
    if(valueTest==listLen-1):
        print("the list is sorted")
    else:
        print("the list is not sorted")
list_range([36,12,25,19,46,31,22])
is_sorted([16.1,12.3,22.2,14.4])
is_sorted([1.5,4.3,7.0,19.5,25.1,46.2])
