/******************************************************************************

Noah Mousseau

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    double cenConst = 2.54;
    int inConst = 12;
    double feet;
    double inches;
    cout<< "Enter two integers, one for feet and one for inches: ";
    cin>>feet>>inches;
    cout<< "The numbers you entered are "<<feet<<" for feet and "<<inches<<" for inches."<<endl;
    double totInch = (inConst*feet)+(inches); //Calculates total number of inches
    double totCent = ((feet*inConst)*cenConst)+(inches*cenConst); //Calculates total number of centimeters
    cout<<"The total number of inches = "<<totInch<<endl;
    cout<<"The number of centimeters = "<<totCent<<endl;
}