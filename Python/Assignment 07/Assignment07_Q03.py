import json
import urllib.request
import turtle
handle=urllib.request.urlopen("https://earthquake.usgs.gov/earthquakes/feed/v1.0/summary/4.5_month.geojson")
data=handle.read()
eData=json.loads(data)
earthquakes=eData.get("features")
tupleList=[]
for i in range(len(earthquakes)):
    earthquake=earthquakes[i]
    properties=earthquake.get("geometry")
    coord=properties.get("coordinates")
    longLat=[]
    longLat.append(coord[0])
    longLat.append(coord[1])
    tupleList.append(tuple(longLat))
#Prints the first 10 coordinate values
for i in range(0,10):
    print(tupleList[i])
screen=turtle.getscreen()
screen.screensize(400,400)
screen.setworldcoordinates(-200,-200,200,200)
myTurtle=turtle.Turtle()
screen.screensize(400,400)
screen.setworldcoordinates(-200,-200,200,200)
myTurtle.hideturtle()
turtle.hideturtle()
for i in range(0,4):
    myTurtle.forward(200)
    myTurtle.right(180)
    myTurtle.forward(200)
    myTurtle.right(90)
myTurtle.left(90)
long=[i[0] for i in tupleList]
lat=[i[1] for i in tupleList]
#The following for i in range statement will plot all earthquake longitude and latitude data, not just 10 points
for i in range(len(tupleList)):
    myTurtle.penup()
    myTurtle.setheading(90)
    myTurtle.goto(0,0)
#Long negative and positive changing direction and moving
    if long[i]>0:
        myTurtle.right(90)
        myTurtle.forward(long[i])
    if long[i]<0:
        myTurtle.left(90)
        myTurtle.forward(-1*long[i])
#Lat negative and postive changing direction and moving
    if lat[i]>0 and long[i]>0:
        myTurtle.left(90)
        myTurtle.forward(lat[i])
    elif lat[i]>0 and long[i]<0:
        myTurtle.right(90)
        myTurtle.forward(lat[i])
    if lat[i]<0 and long[i]>0:
        myTurtle.right(90)
        myTurtle.forward(-1*lat[i])
    elif lat[i]<0 and long[i]<0:
        myTurtle.left(90)
        myTurtle.forward(-1*lat[i])
    myTurtle.dot(10,"black")
myTurtle.setheading(90)
