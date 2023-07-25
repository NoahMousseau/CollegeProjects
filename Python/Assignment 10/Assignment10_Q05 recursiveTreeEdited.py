import turtle
import random

def tree(t, trunkLength):
    if  trunkLength < 5:     #check for base case
        t.dot("green")
        return
    else:
        angle=random.randrange(15,45)
        branch=random.randrange(5,25)
        t.forward(trunkLength)
        t.right(angle)
        tree(t, trunkLength - branch)
        t.left(angle*2)
        tree(t, trunkLength - branch)
        t.right(angle)
        t.backward(trunkLength)

import turtle
t = turtle.Turtle()
t.color("#5A271C")
t.left(90)
trunkLength = 100
tree(t, trunkLength)
