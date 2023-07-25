/******************************************************************************

Noah Mousseau

*******************************************************************************/

#include <iostream>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int amount; //Declares a variable amount
    cout<<"Enter amount: ";
    cin>>amount; //Gets the user input value for amount
    int hundred; //This line, and the following 5, declare the variables
    int fifty;
    int twenty;
    int ten;
    int five;
    int one;
    /*
    The 6 following if-else statements are used to determine the amount of size of
    bills to be used in the user given amount, starting from 100 and going down to 1
    */
    if (amount>=100) { 
        hundred = floor(amount/100);
        amount = amount - (hundred*100);
    } else {
        hundred = 0;
    }
    if (amount>=50) {
        fifty = floor(amount/50);
        amount = amount - (fifty*50);
    } else {
        fifty = 0;
    }
    if (amount>=20) {
        twenty = floor(amount/20);
        amount = amount - (twenty*20);
    } else {
        twenty = 0;
    }
    if (amount>=10) {
        ten = floor(amount/10);
        amount = amount - (ten*10);
    } else {
        ten = 0;
    }
    if (amount>=5) {
        five = floor(amount/5);
        amount = amount - (five*5);
    } else {
        five = 0;
    }
    if (amount>=1) {
        one = amount;
    } else {
        one = 0;
    }
    //The following 6 lines print out the amount of sized bills required for the 
    //user's given amount
    cout<<"$100 : "<<hundred<<endl;
    cout<<"$50 : "<<fifty<<endl;
    cout<<"$20 : "<<twenty<<endl;
    cout<<"$10 : "<<ten<<endl;
    cout<<"$5 : "<<five<<endl;
    cout<<"$1 : "<<one<<endl;
}
