import csv
import statistics
with open("iris.csv","r") as mainRef:
    dataList=[]
    csvReader=csv.reader(mainRef)
    titles=next(csvReader)
    for line in csvReader:
        dataList.append(line)
    setosaDict={}
    virginicaDict={}
    versicolorDict={}
    tempList=[]
    average=0
    count=0
    setosaAverageList=[]
    virginicaAverageList=[]
    versicolorAverageList=[]
#The following three "for j in range" statements create dictionaries from the averages of the values for each flower
    for j in range(0,4):
        for i in dataList:
            if "Iris-setosa" in i:
                tempList=i
                average=average+float(tempList[j])
                count+=1
        average=average/count
        setosaAverageList.append(round(average,2))
    average=0
    count=0
    setosaDict["Iris-setosa"]=setosaAverageList
    for j in range(0,4):
        for i in dataList:
            if "Iris-versicolor" in i:
                tempList=i
                average=average+float(tempList[j])
                count+=1
        average=average/count
        versicolorAverageList.append(round(average,2))
    average=0
    count=0
    versicolorDict["Iris-versicolor"]=versicolorAverageList
    for j in range(0,4):
        for i in dataList:
            if "Iris-virginica" in i:
                tempList=i
                average=average+float(tempList[j])
                count+=1
        average=average/count
        virginicaAverageList.append(round(average,2))
    average=0
    count=0
    virginicaDict["Iris-virginica"]=virginicaAverageList
    setosaPetalLength=[]
    virginicaPetalLength=[]
#The following two "for i in datalist" statements make lists out of the petal length of the setosa and versicolor
    for i in dataList:
        if "Iris-setosa" in i:
            tempList=i
            setosaPetalLength.append(round(float(tempList[2]),1))
    for i in dataList:
        if "Iris-virginica" in i:
            tempList=i
            virginicaPetalLength.append(round(float(tempList[2]),1))
#The following series of statements finds the correlation between setosa and virginica petal lengths
    setosaMean=statistics.mean(setosaPetalLength)
    virginicaMean=statistics.mean(virginicaPetalLength)
    setosaStd=statistics.stdev(setosaPetalLength)
    virginicaStd=statistics.stdev(virginicaPetalLength)
    num=0.0
    for i in range(len(setosaPetalLength)):
        num=num+(setosaPetalLength[i]-setosaMean)*(virginicaPetalLength[i]-virginicaMean)
    corValue=round(num/((len(setosaPetalLength)-1)*setosaStd*virginicaStd),2)
    print("setosa petal length: "+str(setosaPetalLength))
    print("virginica petal length: "+str(virginicaPetalLength))
    print("correlation between setosa and virginica petal length: "+"%.2f"%corValue)
