#include <iostream>

using namespace std;

//Algorithm Analysis
//An algorithm is a step-by-step procedure for solving a problem in a
//finite amount of time
//Algorithm analysis determines an algorithm's performance characteristics
//Running time, is expressed as T(N) for some function T of input size N
//2 ways to determine:
//  -Experimental studies, running programs
//  -Asymptotic algorithm analysis
//Asymptotic uses a high level description of the algorithm
//Categorizes running time as a mathematical function T(N) of input size N
//Can be used to evaluate the speed of an algorithm independent of hardware or software

//Big O Notation
//Definition: T(N) = O(f(N)) if there are positive constants c and n0, such that
//T(N) <= cf(N) when N >= n0
//  f(N) is an asymptotic upper bound on T(N)

//Big O Growth Rates
//Big O establishes a relative order among functions with respect to their growth rates:
//  -N^2 = O(N^3) -> N^3 grows faster than N^2
//  -N^2 and 2N^2 grow at the same rate

//Typical Big O growth rates:
//C - constant
//logN - logarithmic
//log^2(N) - log-squared
//log^k(N) - poly-logarithmic
//N - linear
//NlogN - 
//N^2 - quadratic
//N^3 - cubic
//2^N - exponential

//To analyze algorithms:
//Use the running time of an algorithm, not the entire program
//Main factors are the algorithm used and the input for the algorithm
//Running time:
//  -Worst case complexity: the worst input (that takes the most operations from an
//   algorithm and results in the longest running time) from amoong the choices for
//   possible inputs of a given size
//  -Best case complexity: the best input (that takes the least operations from an 
//   algorithm and results in the fastest running time) from among the choices for
//   possible inputs of a given size
//  -Average case complexity: reflects the typical behavior of an algorithm

int main()
{
    
}

//General Rules:
//Rule 1 - for loops: The running time of a for loop is at most the running time of
//                    the statements inside the for loop (including tests) times the
//                    number of iterations
//Rule 2 - nested loops: Analyze from the inside out. The total running time of a 
//                    statement inside a group of nested loops is the running time of
//                    the statement multiplied by the product of the sizes (number of
//                    iterations) of all loops
//Rule 3 - blocks of consecutive statements: These simply add up, but the largest is
//                    the one that counts
//Rule 4 - if/else: For the fragment:
//  if (condition)
//      s1
//  else
//      s2
//                     the running time of an if/else statement is the running time of 
//                     the test plus the larger of the running times of s1 and s2


//Examples:
//Basic calculation
int sum(int n) {
    int partialSum;
    partialSum = 0; //1
    for (int i = 1; i < n; i++) { //1 + N + 1 + N
        partialSum += i * i * i; //N * 4
        return partialSum; //1
    }
    //T(N) = 6N + 4 = O(N)
}
//Rule 2 example
void rule2(int n, int k) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            k++; // =>O(N^2)
        }
    }
}
//Rule 3 example
void rule3(int n, int a[]) {
    for (int i = 0; i < n; i++) { // => O(N)
        a[i] = 0;
    }
    for (int i = 0; i < n; i++) { // => O(N^2)
        for (int j = 0; j < n; j++) {
            a[i] += a[j] + i + j; // Total => O(N^2)
        }
    }
}
//Recursive functions
long factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    } // => O(N)
    //Poor use of recursion can be easily transformed into a simple loop
}
//Recursive functions further
long fib(int n) {
    if (n <= 1) {
        return 1;
    }
    else {
        return fib(n - 1) + fib(n - 2);
    } // T(N) = T(N-1) + T(N-2) + 3, T(0) = T(1) = 1
      // (3 comes from the test in the if statement, addition, and return)
}