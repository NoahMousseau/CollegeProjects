with open("books.txt","r")as mainRef:
    books={}
    for line in mainRef:
        lineString=str(line)
        lineList=lineString.split(",")
        title=str(lineList[0])
        author=str(lineList[1]).strip()
        books.update({author:title})
    print(books)
        
