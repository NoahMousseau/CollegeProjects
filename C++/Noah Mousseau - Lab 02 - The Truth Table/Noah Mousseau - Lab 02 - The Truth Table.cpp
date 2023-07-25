#include <iostream>

using namespace std;

void first(bool A, bool B, bool C);
void second(bool A, bool B, bool C);
void third(bool A, bool B, bool C);
void fourth(bool A, bool B, bool C);
void fifth(bool A, bool B, bool C);

int main()
{
    cout << "The Truth Tables: \n";
    cout << "\n";
    cout << "(A and B) or (A and C)\n";
    first(false, false, false);
    first(false, false, true);
    first(false, true, false);
    first(false, true, true);
    first(true, false, false);
    first(true, false, true);
    first(true, true, false);
    first(true, true, true);
    cout << "\n";
    cout << "(A and C) and (B and !C)\n";
    second(false, false, false);
    second(false, false, true);
    second(false, true, false);
    second(false, true, true);
    second(true, false, false);
    second(true, false, true);
    second(true, true, false);
    second(true, true, true);
    cout << "\n";
    cout << "(A or B) and !(B or C)\n";
    third(false, false, false);
    third(false, false, true);
    third(false, true, false);
    third(false, true, true);
    third(true, false, false);
    third(true, false, true);
    third(true, true, false);
    third(true, true, true);
    cout << "\n";
    cout << "(A or (B and C)) and (!A and !B)\n";
    fourth(false, false, false);
    fourth(false, false, true);
    fourth(false, true, false);
    fourth(false, true, true);
    fourth(true, false, false);
    fourth(true, false, true);
    fourth(true, true, false);
    fourth(true, true, true);
    cout << "\n";
    cout << "((B and C) or (C and A)) and (!(A or B) and C)\n";
    fifth(false, false, false);
    fifth(false, false, true);
    fifth(false, true, false);
    fifth(false, true, true);
    fifth(true, false, false);
    fifth(true, false, true);
    fifth(true, true, false);
    fifth(true, true, true);
}

void first(bool A, bool B, bool C) {
    cout << "Input: A = " << A << " B = " << B << " C = " << C << endl;
    bool result;
    if ((A == true && B == true) || (A == true && C == true)) {
        result = true;
    }
    else {
        result = false;
    }
    cout << "Result: " << result << endl;
};
void second(bool A, bool B, bool C) {
    cout << "Input: A = " << A << " B = " << B << " C = " << C << endl;
    bool result;
    if ((A == true && C == true) && (B == true && C != true)) {
        result = true;
    }
    else {
        result = false;
    }
    cout << "Result: " << result << endl;
};
void third(bool A, bool B, bool C) {
    cout << "Input: A = " << A << " B = " << B << " C = " << C << endl;
    bool result;
    if ((A == true || B == true) && !(B == true || C == true)) {
        result = true;
    }
    else {
        result = false;
    }
    cout << "Result: " << result << endl;
};
void fourth(bool A, bool B, bool C) {
    cout << "Input: A = " << A << " B = " << B << " C = " << C << endl;
    bool result;
    if ((A == true || (B == true && C == true)) && (A != true && B != true)) {
        result = true;
    }
    else {
        result = false;
    }
    cout << "Result: " << result << endl;
};
void fifth(bool A, bool B, bool C) {
    cout << "Input: A = " << A << " B = " << B << " C = " << C << endl;
    bool result;
    if (((B == true && C == true) || (C == true && A == true)) && (!(A == true || B == true) && C == true)) {
        result = true;
    }
    else {
        result = false;
    }
    cout << "Result: " << result << endl;
};