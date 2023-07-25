/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <iomanip>
#include <string>

//Noah Mousseau

using namespace std;

int main()
{
    double principle; //Declares a double variable for pinciple
    double rate; //Declares a double variable for rate
    double time; //Declares a double variable for time
    cout<<"Enter Principle: ";
    cin>>principle; //Gets the user input for principle
    cout<<"Enter Rate: ";
    cin>>rate; //Gets the user input for rate
    cout<<"Enter Time: ";
    cin>>time; //Gets the user input for time
    double interest;
    interest = ((principle)*(rate)*(time))/100; //Calculates interest
    cout<<"Simple interest is: "<<interest; //Displays interest
}
