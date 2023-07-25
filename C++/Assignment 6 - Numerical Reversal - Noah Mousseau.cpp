/*==========================================================

 Title:       Assignment 6 - Numerical Reversal
 Course:      CSC 1100
 Author:      Noah Mousseau
 Date:        10/4/2022
 Description: This program takes a number from the user, creates a vector of that size, then gets the user input for
              each space in the vector, and then prints the values of the vector in reverse

 ==========================================================
*/

#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    vector<int> values(0); //Creates a vector called values for user input to be stored
    int amount;
    int userNumber;
    cin>>amount; //Determines the size of the vector and amount of values to be stored
    for (int i=amount; i!=0; i--) {
        cin>>userNumber; //Gets a value for each space in the vector
        values.push_back(userNumber); //Inserts user values into the vector
    }
    for (int i=(amount-1); i!=-1; i--) {
        cout<<values[i]<<" "; //Prints the user input in reverse
    }
}



