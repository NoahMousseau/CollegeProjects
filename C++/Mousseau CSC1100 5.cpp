/******************************************************************************

Noah Mousseau

*******************************************************************************/

#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    double s1; //These 3 lines declare variables for the sides of the triange
    double s2;
    double s3;
    double area; //This declares a value to be used for the area
    cout<<"Enter three sides of a triangle: ";
    cin>>s1>>s2>>s3; //Gets the user's input for the values of the triangle's sides
    double sVal = ((s1+s2+s3)/2); //Computes the value sVal for the area computation
    area = sqrt(sVal*(sVal-s1)*(sVal-s2)*(sVal-s3)); //Computes area
    cout<<"Area of triangle is: "<<area; //Prints out the area of the triangle
}

