/*==========================================================

 Title:     Assignment 13 (Final) - C++ Currency Translation Machine
 Course:  	CSC 1100
 Author:  	Noah Mousseau
 Date:    	11/29/2022
 Description: This program takes a user input, and calculates a conversion amount and fee,
              then adds them up, and displays all this information in the console and a file

 ==========================================================
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

class ctm {
    public: //Declares all variables to be used
    int choice;
    double number;
    double euro = 0.98; //Declares conversion for Euro
    double yuan = 6.77; //Declares conversion for Yuan
    double pound = 0.83; //Declares conversion for Pound
    double fee;
    double total;
    double totalAmount;
    public:
    void intro() { //Gets user input for what converter to be used, makes sure it is 1-3
        cin>>choice;
        if ((choice<=0)||(choice>3)) {
            while ((choice<=0)||(choice>3)) {
                cout<<"Invalid entry, Please enter a number between 1-3:"<<endl;
                cin>>choice;
            }
        }
    }
};

class amount: public ctm {
    public:
    void calculations() { //Calculates and outputs the input amount, converted amount, fee, and total amount
        cin>>number; //Gets user input for amount to conver
        printf("%.2f",number);
        if (choice==1) { //Determines which unit to use
            cout<<" Yuan"<<endl;
        } else if (choice==2) {
            cout<<" Euro"<<endl;
        } else if (choice==3) {
            cout<<" Pounds"<<endl;
        }
        if (choice==1) { //Gets converted total and fee based on conversion used, and displays it
            total = number/yuan;
            printf("%.2f %s\n",total,"dollars");
            fee = total*0.05;
            printf("%.2f %s\n",fee,"dollars");
        } else if (choice==2) {
            total = number/euro;
            printf("%.2f %s\n",total,"dollars");
            fee = total*0.05;
            printf("%.2f %s\n",fee,"dollars");
        } else if (choice==3) {
            total = number/pound;
            printf("%.2f %s\n",total,"dollars");
            fee = total*0.05;
            printf("%.2f %s\n",fee,"dollars");
        }
        totalAmount = fee+total; //Gets total amount due in dollars, and displays it
        printf("%.2f %s\n",totalAmount,"dollars");
    }
};

class rc: public amount {
    public:
    void rctype() { //Creates a file with the receipt information
        ofstream MyFile("receipt.txt"); //Creates a file and filestream
        total = floor(total*100.0)/100.0; 
        number = floor(number*100.0)/100.0;
        fee = floor(fee*100.0)/100.0;
        totalAmount = floor(totalAmount*100.0)/100.0;
        if(choice==1) { //Determines what units to be displayed and used
            MyFile<<number<<".00 Yuan"<<endl;
            MyFile<<total<<" dollars"<<endl;
            MyFile<<fee<<" dollars"<<endl;
            MyFile<<totalAmount<<" dollars"<<endl;
        } else if (choice==2) {
            MyFile<<number<<".00 Euro"<<endl;
            MyFile<<total<<" dollars"<<endl;
            MyFile<<fee<<" dollars"<<endl;
            MyFile<<totalAmount<<" dollars"<<endl;
        } else if (choice==3) {
            MyFile<<number<<".00 Pounds"<<endl;
            MyFile<<total<<" dollars"<<endl;
            MyFile<<fee<<" dollars"<<endl;
            MyFile<<totalAmount<<" dollars"<<endl;
        }
        MyFile.close(); //Closes the file stream
    }
};

int main()
{
    //No need to modify main as everything should be handled in the classes
    rc obj; 
    obj.ctm::intro();
    obj.amount::calculations();
    obj.rctype();
    
    return 0;
}

