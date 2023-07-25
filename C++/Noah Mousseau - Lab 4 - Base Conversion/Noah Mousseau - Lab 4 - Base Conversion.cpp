// Noah Mousseau - Lab 4 - Base Conversion

#include <iostream>
#include <vector>

using namespace std;

void baseConverter(int value, int base);

int main()
{
    baseConverter(15, 2);
    baseConverter(38, 16);
    baseConverter(54, 6);
    baseConverter(19, 8);
    baseConverter(27, 3);
}

void baseConverter(int value, int base) {
    //Vector to store individual number outputs
    vector<int> storage;
    cout << "Input number to be converted: " << value << endl;
    cout << "Input base to convert to: " << base << endl;
    //While loop to find individual number outputs and convert bases
    while (value > 0) {
        int mod = value % base;
        storage.push_back(mod);
        value /= base;
    }
    cout << "Output of initial value in base " << base << " is: ";
    int size = storage.size();
    //For loop to reverse the output of the storage vector
    for (int i = size - 1; i > -1; i--) {
        cout << storage[i];
    }
    cout << endl;
};