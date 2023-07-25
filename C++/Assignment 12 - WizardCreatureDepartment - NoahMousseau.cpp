/*==========================================================

 Title:     Assignment 12 - C++ Wizard Creature Department
 Course:  	CSC 1100
 Author:  	Noah Mousseau
 Date:    	11/15/2022
 Description: This program has 3 classes, 2 of which are derived from the parent.
              Within these functions, there are several functions and derived functions
              that can manipulate the variables and information within a class.

 ==========================================================
*/

#include <iostream>
#include <string>

using namespace std;

//Write classes here...

class Creature { //Creates the creature class
    public: //3 variables for the creature class and derived class
    string type = "unknown";
    string name;
    int quantity;
    public:
    void setName(string i) { //Sets name of creature
        name = i;
    }
    void setQuantity(int i) { //Sets quantity of creature
        quantity = i;
    }
    void printStatement() { //Prints information on creature
        cout<<"There's "<<quantity<<" creatures named "<<name<<"\n";
    }
    string getName() { //Returns name of creature
        return name;
    }
    int getQuantity() { //Returns quantity of creature
        return quantity;
    }
    Creature(string i, int j) { //Constructor that creates a creature with given variables
        name = i;
        quantity = j;
    }
    Creature() { //Blank constructor for creature class
        
    }
};

class Phoenix: public Creature { //Creates phoenix class
    private: //Variables of type and color for phoenix
    string type = "phoenix";
    string color;
    public:
    void setColor(string i) { //Function to set color of phoenix
        color = i;
    }
    void printStatement() { //Function to print info about phoenix
        cout<<"There's "<<quantity<<" "<<color<<" "<<type<<"es named "<<name<<"\n";
    }
};

class Basilisk: public Creature { //Creates basilisk class
    private:
    string type = "basilisk"; //Sets type to basilisk
    int quantity = 1; //Sets quantity to 1
    public:
    void printStatement() { //Function to print info on basilisk
        cout<<"There's "<<quantity<<" "<<type<<" named "<<name<<"\n";
    }
};

int main()
{
	//create empty array of size 3 for storing name
    string nameArr[3];

	// Write loop here to record user input as names
	for (int i = 0; i<2; i++) {
	    cin>>nameArr[i];
	}
    // and set third name to “Clover”
    nameArr[2] = "Clover";
    

	Creature c(nameArr[0], 2);
	//print statement from class
	c.printStatement();

	Phoenix p;
	//sets name, quantity and color
	p.setName(nameArr[1]);
	p.setQuantity(3);
	p.setColor("golden");
    //print statement from class
	p.printStatement();

	Basilisk b;
    //sets name
	b.setName(nameArr[2]);
    //prints statement from class
	b.printStatement();
}

