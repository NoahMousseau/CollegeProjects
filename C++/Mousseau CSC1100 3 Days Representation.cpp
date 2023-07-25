/******************************************************************************

Noah Mousseau

*******************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int days; //Declares a variable for days
    int months; //Declares a variable for months
    int years; //Declares a variable for years
    cout<<"Enter no. of days: ";
    cin>>days; //Gets initial amount of days
    years = round(days/365); //Finds amount of years
    days = days%365; //Subtracts amount of years from days
    months = round(days/30); //Finds amount of months
    days = days%30; //Subtracts amount of months from remaining days, gives final days
    cout<<"Years: "<<years<<endl; //Prints number of years
    cout<<"Months: "<<months<<endl; //Prints number of months
    cout<<"Days: "<<days<<endl; //Prints number of days
}