def remove_duplicates(stringList=[]):
    editList=list(dict.fromkeys(stringList))
    print("original list: "+str(stringList))
    print("list after removing duplicates: "+str(editList))
remove_duplicates(['be','be','is','not','or','question','that','the','to','to'])
