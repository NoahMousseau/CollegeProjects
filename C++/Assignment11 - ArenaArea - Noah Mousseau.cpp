/*==========================================================

 Title:       Assignment 11 - Arena Area Inheritance
 Course:      CSC 1100
 Author:      Noah Mousseau
 Date:        11/10/2022
 Description: This program contains two classes, one of which is derived from the other. Arena contains
              a function that displays the radius^squared of a given radius. ArenaArea contains two functions,
              one which takes a user input for the radius, and one that computes the area of the given circle
              with the radius

 ==========================================================
*/

#include <iostream>

using namespace std;

//Create classes Arena and ArenaArea here

class Arena { //Arena parent class
    public:
    int radius;
    void display() { //To display the radius^squared
        double r2;
        r2 = radius * radius;
        cout<<r2;
    }
};
class ArenaArea: public Arena { //ArenaArea child class
    private:
    int r;
    public:
    void scan_input() { //Gets user input for radius
        cin>>r;
        radius = r;
    }
    void display() { //Displays the area of a circle
        double A;
        double pi = 3.14;
        double r2 = r*r;
        A = pi*r2;
        cout<<A;
    }
};

int main()
{
    //DO NOT MODIFY ANYTHING IN THE main() !!!
    
    ArenaArea stadium; //Declaring ArenaArea object stadium
    
    stadium.scan_input(); //Read the radius input
    
    stadium.Arena::display(); //Print the radius squared
    
    cout << endl;
    
    stadium.display(); //Print the area of the Arena (stadium) object
    
    return 0;
}
