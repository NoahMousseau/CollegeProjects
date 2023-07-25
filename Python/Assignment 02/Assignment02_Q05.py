def inCircle(xPoint,yPoint,r):
#Can use pythagoreum theory to get the a^2 + b^2 = c^2, where c^2 is the length from the center of the circle to the edge, the radius
#a^2 would be the length of the x value from the origin of the circle, (0,0)
#b^2 would be the length of the y value from the origin of the circle, (0,0)
#Used absolute value to deal with negative points, as the circle would be the same in all 4 quadrants of a graph if it is centered at (0,0)
    xPoint=abs(xPoint)
    yPoint=abs(yPoint)
    if((xPoint**2)+(yPoint**2)<=(r^2)):
        print("Point ("+str(xPoint)+" , "+str(yPoint)+") is in the circle with radius "+str(r))
    else:
        print("Point ("+str(xPoint)+" , "+str(yPoint)+") is not in the circle with radius "+str(r))
inCircle(10,10,8)
