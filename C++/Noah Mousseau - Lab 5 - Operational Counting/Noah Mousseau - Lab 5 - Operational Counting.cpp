#include <iostream>
#include <array>

using namespace std;

void mth1(int input, int info[]);
void mth2(int input, int info[]);

int main()
{
    //Array to store sum and amount of operations outside of functions
    int info[2];
    int in;
    cout << "Enter an integer number: ";
    cin >> in;
    cout << "Using method 1, 'for loop': " << endl;
    mth1(in, info);
    cout << "Sum: " << info[0] << endl;
    cout << "Operations: " << info[1] << endl;
    cout << "Using method 2, 'formula': " << endl;
    mth2(in, info);
    cout << "Sum: " << info[0] << endl;
    cout << "Operations: " << info[1] << endl;
}

void mth1(int input, int info[]) {
    int sum = input;
    int count = 0;
    for (int i = 1; i < input; i++) {
        sum += i;
        count++;
    }
    info[0] = sum;
    info[1] = count;
};
void mth2(int input, int info[]) {
    //There are always only 3 operations in this formula, *, +, and /
    int operations = 3;
    int sum = ((input * (input + 1)) / 2);
    info[0] = sum;
    info[1] = operations;
};