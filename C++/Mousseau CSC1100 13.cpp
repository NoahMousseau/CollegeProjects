/******************************************************************************

Noah Mousseau

*******************************************************************************/
#include <iostream>

using namespace std;

class cashRegister { //A class cashRegister, to contain the amount of cash within, and functions to set and get these values
    private:
    int cashOnHand;
    public:
    void setCashRegister() {
        cashOnHand = 500;
    }
    void setCashRegister(int x) {
        cashOnHand = x;
    }
    int getCurrentBalance() {
        return cashOnHand;
    }
    void acceptAmount(int x) {
        cashOnHand+=x;
    }
};

class dispenserType { //A class dispenserType, to hold the amount of items and their price, with functions to update as needed
    private:
    int numberOfItems;
    int cost;
    public:
    void setDispenserType() {
        cost = 50;
        numberOfItems = 50;
    }
    void setDispenserType(int x, int y) {
        cost = x;
        numberOfItems = y;
    }
    int getNumOfItems() {
        return numberOfItems;
    }
    int getCost() {
        return cost;
    }
    void makeSale() {
        numberOfItems-=1;
    }
};

void sellProduct(cashRegister Register, dispenserType &Type, int amount) { //sellProduct function, to update the register and dispenser
    Type.makeSale();
    Register.acceptAmount(amount);
}

void showSelection() { //Displays the menu
    cout<<"*** Welcome to Candy Shop ***"<<endl;
    cout<<"To select an item, enter"<<endl;
    cout<<"1 for Candy"<<endl;
    cout<<"2 for Chips"<<endl;
    cout<<"3 for Gum"<<endl;
    cout<<"4 for Cookies"<<endl;
    cout<<"5 to exit"<<endl;
}

int main()
{
    int choice; //Two variables to be used in the program
    int userAmount;
    
    //Initializes the 5 required objects
    cashRegister Register;
    Register.setCashRegister();
    
    dispenserType candy;
    candy.setDispenserType(50,2);
    
    dispenserType chips;
    chips.setDispenserType(60,3);
    
    dispenserType gum;
    gum.setDispenserType(45,4);
    
    dispenserType cookies;
    cookies.setDispenserType(60,5);
    
    //Loops to determine when/if the function should continue
    while (choice!=5) { //If user choice changes to 5, stop program
        showSelection(); //Display menu
        cin>>choice; //Get user choice
        //The following 4 if statements are all similar, except for what dispenser they edit
        if (choice==1) {
            if (candy.getNumOfItems()==0) { //Determines if item is sold out
                cout<<"Sorry, this item is sold out."<<endl;
            } else {
                cout<<"Please deposit "<<candy.getCost()<<" cents"<<endl; //Asks user for money
                int price = candy.getCost(); //Gets price of object
                cin>>userAmount; //Gets amount user inputs
                if(userAmount<price) { //Determines if user input amount is equal to cost
                    cout<<"Please deposit another "<<(price-userAmount)<<" cents"<<endl;
                    price = price - userAmount;
                    cin>>userAmount; //Asks user for remaining amount
                } else if (userAmount==price) {
                    cout<<"Collect your item at the bottom and enjoy."<<endl;
                    sellProduct(Register, candy, price); //Updates the register and the selected dispensary
                }
            }
        //The 3 below else if statements are similar to the above, with the same mechanisms
        } else if (choice==2) {
            if (chips.getNumOfItems()==0) {
                cout<<"Sorry, this item is sold out."<<endl;
            } else {
                cout<<"Please deposit "<<chips.getCost()<<" cents"<<endl;
                int price = chips.getCost();
                cin>>userAmount;
                if(userAmount<price) {
                    cout<<"Please deposit another "<<(price-userAmount)<<" cents"<<endl;
                    price = price - userAmount;
                    cin>>userAmount;
                } else if (userAmount==price) {
                    cout<<"Collect your item at the bottom and enjoy."<<endl;
                    sellProduct(Register, chips, price);
                }
            }
        } else if (choice==3) {
            if (gum.getNumOfItems()) {
                cout<<"Sorry, this item is sold out."<<endl;
            } else {
                cout<<"Please deposit "<<gum.getCost()<<" cents"<<endl;
                int price = gum.getCost();
                cin>>userAmount;
                if(userAmount<price) {
                    cout<<"Please deposit another "<<(price-userAmount)<<" cents"<<endl;
                    price = price - userAmount;
                    cin>>userAmount;
                } else if (userAmount==price) {
                    cout<<"Collect your item at the bottom and enjoy."<<endl;
                    sellProduct(Register, gum, price);
                }
            }
        } else if (choice==4) {
            if (cookies.getNumOfItems()==0) {
                cout<<"Sorry, this item is sold out."<<endl;
            } else {
                cout<<"Please deposit "<<cookies.getCost()<<" cents"<<endl;
                int price = cookies.getCost();
                cin>>userAmount;
                if(userAmount<price) {
                    cout<<"Please deposit another "<<(price-userAmount)<<" cents"<<endl;
                    price = price - userAmount;
                    cin>>userAmount;
                } else if (userAmount==price) {
                    cout<<"Collect your item at the bottom and enjoy."<<endl;
                    sellProduct(Register, cookies, price);
                }
            }
        }
        cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
        cout<<""<<endl;
    }
}