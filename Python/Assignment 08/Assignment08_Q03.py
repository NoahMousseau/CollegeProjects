from cImage import *
import math
def drawCircle():
    myImWin = ImageWin("Circle Image",300,300)
    circleImage = EmptyImage(300,300)
    blackPixel = Pixel(0,0,0)
    whitePixel = Pixel(255,255,255)
    distance=(50-300/2)**2+(100-300/2)**2
    for col in range(0,300):
        for row in range(0,300):
            circleImage.setPixel(col,row,whitePixel)
    for col in range(0,300):
        for row in range(0,300):
            if ((300/2-row)**2+(300/2-col)**2<distance):
                circleImage.setPixel(col,row,blackPixel)
    for col in range(0,300):
        for row in range(0,300):
            if ((300/2-row)**2+(300/2-col)**2<distance-300):
                circleImage.setPixel(col,row,whitePixel)
    circleImage.draw(myImWin)
    circleImage.save("circleImage.gif")
    myImWin.exitOnClick()
drawCircle()
