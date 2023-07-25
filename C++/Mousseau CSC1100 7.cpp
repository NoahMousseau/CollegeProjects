/******************************************************************************

Noah Mousseau

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    //Initializes variables to be used, 4 ints for the counting of positive, negative,
    //and zeroes, one to be used for the values to be counted, two chars to be converted to their
    //ascii int forms, and two ints that serve as the ascii forms of the chars
    int positive = 0;
    int negative = 0;
    int zeroes = 0;
    int value;
    char main = 'y';
    char boolValue = 'y';
    int aMain = int(main);
    int aBoolValue = int(boolValue);
    //The while loop goes as long as the ascii value of the user y/n matches y
    while (aMain==aBoolValue) {
        cout<<"Enter number: ";
        cin>>value;
        //The if statement is used to determine if a value is positive, negative, or zero
        if (value>0) {
            positive+=1;
        } else if (value<0) {
            negative+=1;
        } else if (value==0) {
            zeroes+=1;
        }
        //Asks the user if they wish to continue
        cout<<"Do you want to continue(y/n)?";
        cin>>boolValue;
        aBoolValue = int(boolValue);
    }
    //Outputs the number of positives, negatives, and zeroes
    cout<<"Postive Number:"<<positive<<endl;
    cout<<"Negative Number:"<<negative<<endl;
    cout<<"Zero Number:"<<zeroes<<endl;
}