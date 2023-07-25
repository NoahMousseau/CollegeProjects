/******************************************************************************

Noah Mousseau

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    char value;
    cout<<"Enter any character:";
    //Gets user input character
    cin>>value;
    //Converts char to ASCII int value
    int aVal = int(value);
    //Determines if character is a capital letter
    if (aVal>=65&&aVal<=90) {
        cout<<"Character is a capital letter";
    //Determines if a character is a small letter
    } else if (aVal>=97&&aVal<=122) {
        cout<<"Character is a small letter";
    //Determines if a character is a digit
    } else if (aVal>=48&&aVal<=57) {
        cout<<"Character is a digit";
    //Determines if a character is a special symbol
    } else if ((aVal>=0&&aVal<=47)||(aVal>=58&&aVal<=64)||(aVal>=91&&aVal<=96)||(aVal>=123&&aVal<=127)) {
        cout<<"Character is a special symbol";
    }
}

