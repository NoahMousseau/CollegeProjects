/******************************************************************************

Noah Mousseau

*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;
int betMenu(int initialAmount, string name) { //Function for initializing rules and continuing game
    cout<<"1. Choose any number between 1 to 10"<<"\n";
    cout<<"2. If you win you will get 10 times the amount you bet"<<"\n";
    cout<<"3. If you bet on a wrong number, you will lose your betting amount"<<"\n";
    cout<<"";
    cout<<"-------------------------------------------------------------------------------------"<<"\n";
    int amount = initialAmount; //Sets an independent variable to the inital amount
    cout<<"Your current balance is: $"<<amount<<"\n";
    cout<<name<<", enter money to bet: $";
    int betAmount;
    cin>>betAmount; //Gets amount to bet
    cout<<"Enter your number to bet between 1 and 10: ";
    int betNumber;
    cin>>betNumber; //Gets number to bet on
    if (betAmount > amount) { //Checks if amount bet is larger than amount held, if so, asks again
        while (betAmount > amount) {
            cout<<"Your betting amount is larger than your current amount, pick again!"<<"\n";
            cin>>betNumber;
        }
    }
    srand(time(0)); //Initializes random number generator
    int dice = rand()%10 + 1; //Generates a random number
    if (dice == betNumber) { //Compares if the betNumber is equal to the dice values, if so, a win, if not, a loss
        cout<<"\n";
        cout<<"Good luck this time!"<<"\n";
        int add = betAmount * 10;
        amount += add; //If win, amount bet is multiplied by 10, and added to initial amount held
    } else {
        cout<<"\n";
        cout<<"Bad luck this time!"<<"\n";
        amount -= betAmount; //If lost, amount bet is subtracted from initial amount
    }
    cout<<"\n";
    cout<<"The winning number was: "<<dice<<"\n";
    cout<<"\n";
    cout<<name<<", you have $"<<amount<<"\n";
    char decide = 'y';
    if (amount!=0) { //Determines if user wants to play again
        cout<<"Would you like to play again? y/n"<<"\n";
        cin>>decide;
        if (decide=='y') { //If user wants to continue, program calls itself with new amount
            cout<<"\n";
            cout<<"-------------------------------------------------------------------------------------"<<"\n";
            betMenu(amount, name);
        } else { //If user wishes to quit playing, displays an exit message
            cout<<"\n";
            cout<<"==================================================="<<"\n";
            cout<<"Thanks for playing the game! Your final balance is: "<<amount;
            cout<<"==================================================="<<"\n";
        }
    } else { //If user is out of money to bet, ends program
        cout<<"You have no money left to play";
    }
    return 0;
}

int main()
{
    string name;
    int amount;
    int betNumber;
    int betAmount;
    cout<<"Enter your name: ";
    cin>>name; //Gets user name
    cout<<"Enter deposit amount to play game: $";
    cin>>amount; //Gets user deposit amount
    cout<<"-------------------------------------------------------------------------------------"<<"\n";
    cout<<"RULES OF THE GAME"<<"\n";
    cout<<"-------------------------------------------------------------------------------------"<<"\n";
    betMenu(amount, name); //Calls betMenu to start game
}

