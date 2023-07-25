/*==========================================================

 Title:       Assignment 10 - Wizard Identification using Classes
 Course:      CSC 1100
 Author:      Noah Mousseau
 Date:        11/1/2022
 Description: This programs allows the user to input a set of information, an age, first name,
              last name, and ID number, and uses a set of functions within a class to create and
              object containing this information

 ==========================================================
*/

#include <iostream>

using namespace std;

//Create your class Wizard here.
class Wizard {
    private: //Creates the 4 variables used to give the class attributes as private
    int age;
    string firstName;
    string lastName;
    int ID;
    public: //Creates the 8 functions to ascribe values to the variables and get those values
        void set_wizardAge(int newAge) { //Sets the wizard's age
            age = newAge;
        }
        int get_wizardAge() { //Gets and returns the wizard's age
            return age;
        }
        void set_wizardFirstName(string newFirstName) { //Sets the wizard's first name
            firstName = newFirstName;
        }
        string get_wizardFirstName() { //Gets and returns the wizard's first name
            return firstName;
        }
        void set_wizardLastName(string newLastName) { //Sets the wizard's last name
            lastName = newLastName;
        }
        string get_wizardLastName() { //Gets and returns the wizard's last name
            return lastName;
        }
        void set_wizard_ID (int newID) { //Sets the wizard's ID number
            ID = newID;
        }
        int get_wizard_ID() { //Gets and returns the wizard's ID number
            return ID;
        }
};

int main() {
//DO NOT MODIFY THE MAIN()!!!!
    int wizardAge, wizard_ID;
    string wizardFirstName, wizardLastName;
    
    cin >> wizardAge >> wizardFirstName >> wizardLastName >> wizard_ID;
    
    Wizard wiz;
    wiz.set_wizardAge(wizardAge);
    wiz.set_wizard_ID(wizard_ID);
    wiz.set_wizardFirstName(wizardFirstName);
    wiz.set_wizardLastName(wizardLastName);
    
    cout << wiz.get_wizardAge() << "\n";
    cout << wiz.get_wizardLastName() << ", " << wiz.get_wizardFirstName() << "\n";
    cout << wiz.get_wizard_ID();
    
    return 0;
}
