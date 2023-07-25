#include <iostream>

using namespace std;

void propTest(bool A, bool B, bool C, bool D);

int main()
{
    propTest(0, 0, 0, 0);
    propTest(0, 0, 0, 1);
    propTest(0, 0, 1, 0);
    propTest(0, 0, 1, 1);
    propTest(0, 1, 0, 0);
    propTest(0, 1, 0, 1);
    propTest(0, 1, 1, 0);
    propTest(0, 1, 1, 1);
    propTest(1, 0, 0, 0);
    propTest(1, 0, 0, 1);
    propTest(1, 0, 1, 0);
    propTest(1, 0, 1, 1);
    propTest(1, 1, 0, 0);
    propTest(1, 1, 0, 1);
    propTest(1, 1, 1, 0);
    propTest(1, 1, 1, 1);
}

//A = Rocket
//B = Astronaut
//C = Highly trained
//D = educated

void propTest(bool A, bool B, bool C, bool D) {
    //A -> B
    if (!(A && !B)) {
        //B -> C
        if (!(B && !C)) {
            //C -> D
            if (!(C && !D)) {
                //D -> A
                if (!(D && !A)) {
                    cout << "Valid" << endl;
                }
                else {
                    cout << "Invalid, input statement: " << A << " " << B << " " << C << " "<< D << endl;
                }
            }
            else {
                cout << "Invalid, input statement: " << A << " " << B << " " << C << " " << D << endl;
            }
        }
        else {
            cout << "Invalid, input statement: " << A << " " << B << " " << C << " " << D << endl;
        }
    }
    else {
        cout << "Invalid, input statement: " << A << " " << B << " " << C << " " << D << endl;
    }
}