from cImage import *
def scaleImage(oldImage,xScale,yScale):
    oldW=oldImage.getWidth()
    oldH=oldImage.getHeight()
    newIm=EmptyImage(oldW*xScale,oldH*yScale)
    for r in range(oldW*xScale):
        for c in range(oldH*yScale):
            pixel = oldImage.getPixel(r // xScale, c // yScale)
            newIm.setPixel(r, c, pixel)
    return newIm

def showOld(imagefile):
    oldImage=FileImage(imagefile)
    width=oldImage.getWidth()
    height=oldImage.getHeight()
    secWin=ImageWin("Original",width,height)
    newImage=scaleImage(oldImage,1,1)
    newImage.setPosition(0,0)
    newImage.draw(secWin)
    
def new(imageFile,x,y):
    oldImage=FileImage(imageFile)
    width=oldImage.getWidth()
    height=oldImage.getHeight()
    myWin = ImageWin("Integer Scaling", width * (x), height * (y))
    newImage = scaleImage(oldImage,x,y)
    newImage.setPosition(0,0)
    newImage.draw(myWin)
    showOld(imageFile)
new("butterfly.gif",2,2)
#Only accepts int parameters to scale, 2 being double, 3 being triple, and so on
