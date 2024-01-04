using namespace std;

#include <iostream>
#include <vector>

//Will be the topic of 1st quiz

//Classes
//Typically, classes are built in two files, an interface file for writing the class' functions and variables, and
// a implementation file that implements the function of the functions from the interface file
class IntCell {
private:
    int storedValue;
public:
    //Default constuctor function
    IntCell() {
        storedValue = 0;
    }
    //Setter function
    IntCell(int initialValue) {
        storedValue = initialValue;
    }
    //Getter/accessor function, constant member function
    int read() const {
        return storedValue;
    }
    void write(int x) { //Mutator function, implicit
        storedValue = x;
    }
    //The below 3 operations are given a default when a class is created, this default can be overwritten with custom versions
    //Destructors are called when an object goes out of scope or is deleted
    //Called using ~(name of class)
    //Copy constructors are called (built in to c++ classes) when a class is duplicated: IntCell B = C, where C is an IntCell object
    //The operator '=' is called when the '=' operator is applied to two objects after they have been created
};

//Parameter passing options
double avg(const vector<int>, int n, bool& errorFlag);
//By value, 'int n' , creates a local copy of the object passed as an argument to a function
//By reference, 'bool& errorFlag' , the value of the object passed to the function can be changed by the function
//by constant reference, 'const vector<int>' , the value of the object passed to the function cannot be changed by the function
//By value is best used for small objects that don't need to be altered
//By reference is best used for all objects that may be altered by the function
//By constant reference is best used for large objects that should not be altered by the function

//Return options
//By value, by reference, and by constant reference
//Use by value for simple datatypes
string findMax();
//Use by reference for if the returned result is an object
string& findMaxReference();
//Use by constant reference if the returned result is an object, the object cannot be modified later on
const string& findMaxConstRef();

//Reference variables
//Reference variables become synonyms for the referenced objects
//Avoids the cost of copying

//Struct and typedef
//struct are similar to classes, but members are public by default
//typedef are used for defining synonyms for existing types, like:
typedef string* ptr_to_string; //Created a synonym for string pointer
//Better to define a class than use typedef

//Function templates
//Effectively the same as functions, but have a type argument that lets the function pass arguments of different types
//Creates a template called Comparable
template <typename Comparable>
//Below is code that would findMax within a vector of comparable items of int, double, etc.
const Comparable& findMax(const vector<Comparable>& a) {
    int maxIndex = 0;
    for (int i = 1; i < a.size(); i++) {
        if (a[maxIndex] < a[i]) {
            maxIndex = i;
        }
    }
    return a[maxIndex];
}
//Comparable objects must provide operator < and operator =

//Can also create class templates
template <typename Object>
class MemoryCell {
//In class MemoryCell, the class data can change based on the datatype used for Object
public:
    explicit MemoryCell(const Object& initialValue = Object()) {
        storedValue = initialValue;
    }
    const Object& read() const {
        return storedValue;
    }
    void write(const Object& x) {
        storedValue = x;
    }
private:
    //Object can be a datatype or class
    Object storedValue;
};

//Operator overloading
class Employee {
public:
    void setValue(const string& n, double s) {
        name = n;
        salary = s;
    }
    void print(ostream& out) const {
        out << name << "(" << salary << ")";
    }
    //Overload the '<' operator to base comparisons on employee salary
    bool operator<(const Employee& rhs) const {
        return salary < rhs.salary;
    }
private:
    double salary;
    string name;
};

int main()
{
    IntCell m; //Creates an object m of class IntCell
    m.write(5);
    cout << "Cell m contents: " << m.read() << endl;

    //Using default copy constructor
    IntCell o = m;
    cout << "Cell o contents: " << o.read() << endl;

    //Does not change o or p objects, because they do not use pointers
    m.write(9);
    cout << "Cell m contents after new write: " << m.read() << endl;

    //Using default '=' operator
    IntCell p;
    p = o;
    cout << "Cell p contents: " << p.read() << endl;

    //Pointer variable: stores the address where another object resides
    //The & operator returns the memory location where an object is located
    //Using pointers
    IntCell* n; //n is a pointer variable
    n = new IntCell(0); //Dynamic object creation
    n->write(7); //-> is the access operator
    cout << "Cell n contents: " << n->read() << endl;
    delete n; //Dynamic object deletion
}