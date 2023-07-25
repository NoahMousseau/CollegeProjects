/*==========================================================

 Title:     Assignment 7 - C++ Care Unit
 Course:  	CSC 1100
 Author:  	Noah Mousseau
 Date:    	10/11/2022
 Description: This program uses different functions to convert
              feet to meters as well as use two separate BMI functions
              and swap two given weights

 ==========================================================
*/

#include <iostream>
#include <cmath>

using namespace std;

//Converts feet to meters
double conversionMeters(double h) {
    double value = h/3.281;
    return value;
}
//Finds BMI given one weight
double BMIcalculator(double w) {
    double value = w/(1.8*1.8);
    return value;
}
//Finds BMI given a weight and height
double BMIcalculator(double w, double h) {
    double value = w/(h*h);
    return value;
}
//Swaps two given weights
void swap(double &w1, double &w2) {
    double w3 = w1;
    w1 = w2;
    w2 = w3;
}

int main() {
    //DO NOT MODIFY MAIN()!!!
    
    double w1, w2, h;
    cin >> w1 >> w2 >> h;

    float index1 = BMIcalculator(w1);
    float index2 = BMIcalculator(w2, conversionMeters(h));

    cout << index1 << " " << index2 << endl;

    swap(w1, w2);

    index1 = BMIcalculator(w1);
    index2 = BMIcalculator(w2, conversionMeters(h));
    cout << index1 << " " << index2 << endl;
}
