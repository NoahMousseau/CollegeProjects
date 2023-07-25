import random
import math
import turtle

def showMontePi(numDarts):
    wn = turtle.Screen()
    drawingT = turtle.Turtle()

    wn.setworldcoordinates(-2, -2, 2, 2)

    drawingT.up()
    drawingT.goto(-1,0)
    drawingT.down()
    drawingT.goto(1,0)

    drawingT.up()
    drawingT.goto(0,1)
    drawingT.down()
    drawingT.goto(0,-1)

    inCircle = 0
    drawingT.up()

    for i in range(numDarts):
        x = random.random()
        y = random.random()

        distance = math.sqrt(x**2 + y**2)

        drawingT.goto(x,y)

        if distance <= 1:
            inCircle = inCircle + 1
            drawingT.color("blue")
        else:
            drawingT.color("red")

        drawingT.dot(5)
    for i in range(numDarts):
        x = random.random()
        y = random.random()

        distance = math.sqrt(x**2 + y**2)

        drawingT.goto(x,-y)

        if distance <= 1:
            inCircle = inCircle + 1
            drawingT.color("blue")
        else:
            drawingT.color("red")

        drawingT.dot(5)
    for i in range(numDarts):
        x = random.random()
        y = random.random()

        distance = math.sqrt(x**2 + y**2)

        drawingT.goto(-x,-y)

        if distance <= 1:
            inCircle = inCircle + 1
            drawingT.color("blue")
        else:
            drawingT.color("red")

        drawingT.dot(5)
    for i in range(numDarts):
        x = random.random()
        y = random.random()

        distance = math.sqrt(x**2 + y**2)

        drawingT.goto(-x,y)

        if distance <= 1:
            inCircle = inCircle + 1
            drawingT.color("blue")
        else:
            drawingT.color("red")

        drawingT.dot(5)

    pi = inCircle/numDarts * 4
    drawingT.penup()
    drawingT.goto(-0.04,-1.15)
    drawingT.pendown()
    drawingT.pencolor("blue")
    drawingT.write(str(pi), move=False, align="Left", font=("Arial",12,"normal"))
    drawingT.hideturtle()
    wn.exitonclick()

showMontePi(1)

