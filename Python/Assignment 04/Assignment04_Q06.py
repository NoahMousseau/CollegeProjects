def double_list(stringList=[]):
    listLen=len(stringList)
    editList=[]
    for i in range(listLen):
        editList.append(stringList[i])
        editList.append(stringList[i])
    print(editList)
double_list(['how','are','you'])
