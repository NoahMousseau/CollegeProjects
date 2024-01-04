#include <iostream>

using namespace std;
//Recursion
//Recursion requires 2 things:
//  Base Case: The base case that can be solved without making cursive calls
//  Making progress: The recursive call must always make progress towards a base case

int f(int x);

int main()
{
    //Evaluates to 6
    cout << f(2);
}

//A simple recursive function
int f(int x) {
    if (x == 0) {
        return 0; //Base case
    }
    else {
        return 2 * f(x - 1) + x * x; //Recursive call
    }
}
//4 basic rules of recursion
//  1. Must have base case(s) which can be solved without recursion
//  2. Recursive call within the recursive function must make progress towards a base case
//  3. Design rule - check that all recursive calls work
//  4. Compount interest rule - never duplicate work, don't solve the same instance of 
//     a problem in separate recursive calls