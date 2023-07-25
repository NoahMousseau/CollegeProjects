def intersect(dict1={},dict2={}):
    print('dict1 = '+str(dict1))
    print('dict2 = '+str(dict2))
    dict3={}
    for i in dict1:
        for j in dict2:
            if i==j:
                if dict1[i]==dict2[j]:
                    dict3[i]=dict1[i]
    print('intersection of dict1 and dict2 = '+str(dict3))
intersect(dict1={'Janet':87, 'Logan':62, 'Whitaker':46, 'Alyssa':100, 'Stef':80, 'Jeff':88, 'Kim':52, 'Sylvia':95},dict2={'Logan':62, 'Kim':52, 'Whitaker':52, 'Jeff':88, 'Stef':80, 'Brian':60, 'Lisa':83, 'Sylvia':87})
def is_unique(dict1={}):
    print('dict = '+str(dict1))
    valueCount=0
    for i in dict1:
        value=dict1[i]
        for j in dict1:
            if value==dict1[j]:
                valueCount=valueCount+1
    if valueCount==len(dict1):
        print("is_unique True")
    else:
        print("is_unique False")
is_unique(dict1={'Marty':'Stepp','Stuart':'Reges','Jessica':'Wolk','Allison':'Obourn','Hal':'Perkins'})
is_unique(dict1={'Kendrick':'Perkins','Stuart':'Reges','Jessica':'Wolk','Bruce':'Reges','Hal':'Perkins'})
