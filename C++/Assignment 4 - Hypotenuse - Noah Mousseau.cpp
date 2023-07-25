/*==========================================================

 Title:       Assignment4 - Hypotenuse
 Course:      CSC 1100
 Author:      Noah Mousseau
 Date:        9/20/22
 Description: This program gets 2 sides of a triangle, compares them against each other, then
              finds the hypotenuse from those sides

 ==========================================================
*/

using namespace std;

#include <iostream>
#include <cmath>
#include <ostream>

int main() {
    double side1;
    double side2;
    double side3;
    cin>>side1>>side2; //Gets the user input for the starting 2 sides of the triangle

    //Compares each side of the two given sides to one another
    cout<<(side1==side2)<<endl;
    cout<<(side1<side2)<<endl;
    cout<<(side1>side2)<<endl;
    
    side3 = round(sqrt((side1*side1)+(side2*side2))); //Finds the hypotenuse of the 2 given sides
    cout<<"The hypotenuse of the triangle is "<<side3; //Prints the hypotenuse of the 2 given sides
    
    return 0;
}




