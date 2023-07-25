from cImage import *                    
def redPixel(oldPixel):            
    newRed = 2*oldPixel.getRed()
    newGreen = oldPixel.getGreen()
    newBlue = oldPixel.getBlue()
    if newRed>255:
        newRed=128
    newPixel = Pixel(newRed, newGreen, newBlue)
    return newPixel
def redIntensify(imageFile):            
    oldImage = FileImage(imageFile)
    width = oldImage.getWidth()
    height = oldImage.getHeight()
    myImageWindow = ImageWin("Red Intensify", width * 2, height)
    oldImage.draw(myImageWindow)
    newIm = EmptyImage(width, height)
    for row in range(height):
        for col in range(width):
            oldPixel = oldImage.getPixel(col, row)							
            newPixel = redPixel(oldPixel)							
            newIm.setPixel(col, row, newPixel)
    newIm.setPosition(width + 1, 0)
    newIm.draw(myImageWindow)
    myImageWindow.exitOnClick()
redIntensify("butterfly.gif")        
