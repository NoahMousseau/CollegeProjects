/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Noah Mousseau

int main()
{
    srand(time(0)); //Seeds the random generator using time since 1970
    int x = rand()%91+10; //Assigns a variable x a random number from 10 to 100
    cout<<"The randomly selected number is: "<<x; //Prints the phrase and the variable x
}

