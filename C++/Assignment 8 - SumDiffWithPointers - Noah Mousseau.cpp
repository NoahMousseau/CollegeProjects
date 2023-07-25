/*==========================================================

 Title:       Assignment 8 - Sum/Difference with Pointer
 Course:      CSC 1100
 Author:      Noah Mousseau
 Date:        10/18/2022
 Description: This program takes 2 values, an x and a y, and changes x to be the
              sum of x and y, and changes y to be the absolute difference
              between x and y

 ==========================================================
*/

#include <iostream>

using namespace std;

void Modify(int *x, int *y) {
    //Sets the values of number 1 and number 2 to x and y respectively
    int number1 = *x;
    int number2 = *y;
    //Initializes int variables number 3 and number 4
    int number3;
    int number4;
    //Initializes a pointer to number 3 and number 4 the values of number 3
    //and number 4
    int* pNumber3 = &number3;
    int* pNumber4 = &number4;
    //Sums number 1 and number 2
    number3 = number1 + number2;
    //The following 2 if statements are for if number 1 or number 2 are negative
    if (number1<0) {
        number1 = number1*-1;
    }
    if (number2<0) {
        number2 = number2*-1;
    }
    //This if statement checks if the difference is positve or negative, and
    //uses the positive one
    if (number1-number2>0) {
        number4 = number1-number2;
    } else if (number1-number2<0) {
        number4 = number2-number1;
    }
    //Assigns the pointers of x and y to point to number 3 and number 4
    *x = *pNumber3;
    *y = *pNumber4;
}

int main() {
    //DO NOT MODIFY ANYTHING IN THE main() !!!
    
    int x, y;
    
    int *ptr_x = &x;
    int *ptr_y = &y;
    
    cin >> x;
    cin >> y;
    
    Modify(ptr_x, ptr_y);
    
    cout << x << endl;
    cout << y;
                 
    return 0;
}
