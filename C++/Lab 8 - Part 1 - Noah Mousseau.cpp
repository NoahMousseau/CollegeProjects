/******************************************************************************

Noah Mousseau

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int number; //Declares a variable number
    cout<<"Enter number of elements you want to insert ";
    cin>>number; //Gets length of array for how many values there will be
    int values[number]; //Creates an array with number amount of values
    cout<<"Enter elements in ascending order"<<"\n";
    for (int i=0; i<number; i++) { //Loops through array to assign each element
        int userValue;
        cout<<"Enter element "<<(i+1)<<":";
        cin>>userValue;
        values[i] = userValue;
    }
    cout<<"\n"; 
    int sum = 0; //Declares a variable sum
    int average; //Declares a variable average
    for (int i=0; i<number; i++) { //Loops through array to find the sum by adding each element
        sum = sum+values[i];
        cout<<sum<<"\n";
        cout<<values[i]<<"\n";
    }
    average = sum/number; //Finds the average of the array
    cout<<"The sum of Array is:"<<sum<<"\n";
    cout<<"The avergage of Array is:"<<average<<"\n";
}
