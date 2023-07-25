years=int(input("Enter the number of years: "))
totalRainfall=0.0
for i in range(1,years+1):
    stringYear=("For year "+str(i)+":")
    print(stringYear)
    for j in range(1,13):
        stringMonth=("Enter the rainfall amount for the month "+str(j)+": ")
        userInput=float(input(stringMonth))
        totalRainfall=totalRainfall+userInput
print("For "+str(years*12)+" months")
formatedTotalRainfall="{0:.2f}".format(totalRainfall)
print("Total rainfall: "+formatedTotalRainfall+" inches")
averageMonthlyRainfall=totalRainfall/(years*12)
formatedAMR="{0:.2f}".format(averageMonthlyRainfall)
print("Average monthly rainfall: "+formatedAMR+" inches")
