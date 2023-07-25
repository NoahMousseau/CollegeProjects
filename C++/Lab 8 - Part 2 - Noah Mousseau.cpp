/******************************************************************************

Noah Mousseau

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int number; //Declares a variable number
    cout<<"Enter number of elements you want to insert ";
    cin>>number; //User enters a value to be used for the length and amounts of elements for array
    int values[number]; //Creates an array of length number
    for (int i=0; i<number; i++) { //Loops through array, assigns values to each location in array
        int userValue;
        cout<<"Enter element "<<(i+1)<<":";
        cin>>userValue;
        values[i] = userValue;
    }
    cout<<"\n";
    cout<<"Array after swapping"<<"\n";
    int swapOne = values[0]; //Gets value of unswapped first value in array
    int swapFinal = values[number-1]; //Gets value of unswapped last value in array
    values[0] = swapFinal; //Assigns first value last value
    values[number-1] = swapOne; //Assigns last value first value
    for (int i=0; i<number; i++) { //Prints swapped array
        cout<<values[i]<<" ";
    }
}
