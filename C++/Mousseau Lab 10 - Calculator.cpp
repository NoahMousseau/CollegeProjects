/******************************************************************************

Noah Mousseau

*******************************************************************************/
#include <iostream>

using namespace std;

void add(double x, double y) { //Adds two values
    double sum;
    sum = x + y;
    cout<<"Sum "<<sum<<endl;
}
void subtract(double x, double y) { //Subtracts a value from another
    double difference;
    difference = x - y;
    cout<<"Difference "<<difference<<endl;
}
void multiply(double x, double y) { //Multiplies two values
    double product;
    product = x*y;
    cout<<"Product "<<product<<endl;
}
void divide(double x, double y) { //Divides two values
    double quotient;
    quotient = x/y;
    cout<<"Quotient "<<quotient<<endl;
}
void showChoice() { //Creates a menu with options
    int choice = 0;
    double one;
    double two;
    while (choice!=5) { //Determines if menu should continue
        cout<<"MENU"<<endl;
        cout<<"1: Add"<<endl;
        cout<<"2: Subtract"<<endl;
        cout<<"3: Multiply"<<endl;
        cout<<"4: Divide"<<endl;
        cout<<"5: Exit"<<endl;
        cout<<"Enter your choice :";
        cin>>choice;
        if (choice!=5) { //Determines which option and function to use
            cout<<"Enter two numbers: "<<endl;
            cin>>one>>two;
            if (choice==1) {
                add(one, two);
            } else if (choice==2) {
                subtract(one, two);
            } else if (choice==3) {
                multiply(one, two);
            } else if (choice==4) {
                divide(one, two);
            }
        }
    }
}
int main() {
    showChoice();
}
