//Noah Mousseau

#include <iostream>

using namespace std;

int main()
{
    //Gets a valid size for triangle from user
    int size;
    cout << "Triangle App!\n";
    cout << "Enter the size of the triangles [3,4,5,6,7]: ";
    cin >> size;
    while (size<3||size>7) {
        cout << "Invalid input. Try again. ";
        cin >> size;
    }
    cout << "\n";

    //Prints the four triangles

    //First triangle
    for (int i = 1; i <= size; i++) {
        for (int j = i; j >= 1; j--) {
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";

    //Second triangle
    int spaces = 2 * size - 2;
    for (int i = size; i > 0; i--) {
        for (int j = 0; j < size - i; j++) {
            cout << " ";
        }
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";

    //Third triangle
    for (int i = size; i > 0; i--) {
        for (int j = 1; j <= size; j++) {
            if (j >= i) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << "\n";
    }
    cout << "\n";

    //Fourth triangle
    for (int i = 1; i <= size; i++) {
        for (int j = i; j <= size; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}