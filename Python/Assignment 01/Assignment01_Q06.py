import turtle
wn = turtle.Screen()
turtle1=turtle.Turtle()
turtle2=turtle.Turtle()
turtle1.penup()
turtle1.left(90)
turtle1.forward(120)
turtle1.right(90)
turtle1.pendown()
for x in range(10,110,5):
    turtle2.forward(x)
    turtle2.left(90)
for x in range(10,110,5):
    turtle1.forward(x)
    turtle1.right(90)
