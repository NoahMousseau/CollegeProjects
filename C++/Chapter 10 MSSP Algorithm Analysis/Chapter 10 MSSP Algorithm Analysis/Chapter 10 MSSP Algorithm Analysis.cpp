//Chapter 10 
//Maximum Subsequence Sum Problem (MSSP)

//MSSP: Given (possibly negative) integers, A1, A2, ..., AN, find a continuous sub-sequence
//      which maximizes:
//      j
//      E A sub k
//    k - i
//For convenience, the maximum sub-sequence sum is 0, if all integers in the sub-sequence are
//negative

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    
}

//MSSP Algorithm 1:
int maxSubSum1(const vector<int>& a)
{
    /* 1*/ int maxSum = 0;
    /* 2*/ for (int i = 0; i < a.size(); i++) //= > N
        /* 3*/ for (int j = i; j < a.size(); j++) //= > N - i ≤N
        {
            /* 4*/ int thisSum = 0;
    /* 5*/ for (int k = i; k <= j; k++) //= > j - i + 1≤N
        /* 6*/ thisSum += a[k];
    /* 7*/ if (thisSum > maxSum)
        /* 8*/ maxSum = thisSum;
        }
    /* 9*/ return maxSum; // Total = > O(N^3)
}
//Many unnecessary computations are done in algorithm
//Do not recompute subsequence sum from scratch

//MSSP Algorithm 2:
int maxSubSum2(const vector<int>& a)
{
    /* 1*/ int maxSum = 0;
    /* 2*/ for (int i = 0; i < a.size(); i++)
    {
        /* 3*/ int thisSum = 0;
        /* 4*/ for (int j = i; j < a.size(); j++)
        {
            /* 5*/ thisSum += a[j];
            /* 6*/ if (thisSum > maxSum)
                /* 7*/ maxSum = thisSum;
        }
    }
    /* 9*/ return maxSum; //Total = > O(N^2)
} 

//MSSP Algorithm 3:
//Implements a divide and conquer algorithm
//  -Divide: splits the problem into two roughly equal subproblems, which are solved recursively
//  -Conquer: patch together two solutions to obtain full solution
//Maximum subsequence sum can be in one of the following:
//  -left half of input: easily solved recursively
//  -right half of input: easily solved recursively
//  -in both halves: find largest sum in the first half that includes the last element in the first
//                   half, and the largest sum in the second half that includes the first element
//                   in the second half. Then, add the two sums
//Example:
// [4 -3 5 -2 || -1 2 6] -2 => mssp = 4 + 7 = 11
//Driver for divide - and -conquer maximum contiguous subsequence sum algorithm.
int maxSubSum3(const vector<int> &a) {
    return maxSumRec(a, 0, a.size() - 1);
}
//Algorithm 3, partial implementation
int maxSumRec(const vector<int>& a, int left, int right)
{
    /* 1*/ if (left == right) // Base case
        /* 2*/ if (a[left] > 0)
            /* 3*/ return a[left];
        else
            /* 4*/ return 0;
    /* 5*/ int center = (left + right) / 2;
    /* 6*/ int maxLeftSum = maxSumRec(a, left, center); //recursive call
    /* 7*/ int maxRightSum = maxSumRec(a, center + 1, right); //recursive call
    /* 8*/ int maxLeftBorderSum = 0, leftBorderSum = 0; //check centered sequences
    /* 9*/ for (int i = center; i >= left; i--)
    {
        /*10*/ leftBorderSum += a[i];
        /*11*/ if (leftBorderSum > maxLeftBorderSum)
            /*12*/ maxLeftBorderSum = leftBorderSum;
    }
    /*13*/ int maxRightBorderSum = 0, rightBorderSum = 0;
    /*14*/ for (int j = center + 1; j <= right; j++)
    {
        /*15*/ rightBorderSum += a[j];
        /*16*/ if (rightBorderSum > maxRightBorderSum)
            /*17*/ maxRightBorderSum = rightBorderSum;
    }
    /*18*/ return max3(maxLeftSum, maxRightSum,
        /*19*/ maxLeftBorderSum + maxRightBorderSum);
}

//Big O Analysis of Algorithm3 3
//T(N) => Time to solve MSSP of size N
//IF N = 1 => constant time T(1) = 1
//Lines 6 and 7 solve two MSSP of size N/2 each => T(N/2)
//Lines 8 to 17 take O(N)
//Total time:
//  T(1) = 1
//  T(N) = 2T(N/2) + O(N)
//T(N) = 2T(N/2) + O(N) is replaced with T(N) = 2T(N/2) + N

//Complexity Analysis
/*T(N) = 2 T(N / 2) + N
• T(1) = 1
• T(2) = 2 * T(1) + 2 = 4 = 2 * 2 = 21 * 2
• T(4) = 2 * T(2) + 4 = 12 = 4 * 3 = 22 * 3
• T(8) = 2 * T(4) + 8 = 32 = 8 * 4 = 23 * 4
• T(N) = 2k * (k + 1) (N = 2k)
• 2k = N, k = log N(by definition of log)
• T(N) = 2log N * (log N + 1) = N * (log N + 1) =
N log N + N = O(N log N)
• This analysis is valid for N power of 2.
• If N is not a power of 2 = > more complex analysis but
the Big - Oh remains the same.
*/

//MSSP Algorithm 4
/*
Based on the following observation:
– If a[i] is negative, then it cannot possibly be a start of the
optimal subsequence because any subsequence that
starts with it can be improved by beginning with a[i+1]
– Any negative subsequence cannot possibly be a start of
the optimal subsequence => advance i to j+1, if the sum
from a[i] to a[j] is negative
• The algorithm makes only one pass through the
data
• It is an on-line algorithm i.e. at any point in time, it
can give a correct answer to the prohttps://canvas.wayne.edu/courses/191815blem for the
data it has already read
*/
int maxSubSum4(const vector<int>& a)
{
    /* 1*/ int maxSum = 0, thisSum = 0;
    /* 2*/ for (int j = 0; j < a.size(); j++)
    {
        /* 3*/ thisSum += a[j];
        /* 4*/ if (thisSum > maxSum)
            /* 5*/ maxSum = thisSum;
        /* 6*/ else if (thisSum < 0)
            /* 7*/ thisSum = 0;
    }
    /* 8*/ return maxSum;
} //=> Total time = O(N)

/*Example: Binary Search
Binary search:
Given an integer X and an array of integers
A0,A1,..., AN-1, which is pre-sorted and already in
memory, find the element of A such that Ai = X or
return i = -1 if X is not in the array
• Obvious solution:
scan through the list from left to right
=> T(N) = O(N)
• Better strategy:
If x < middle element => search left half of A
If x > middle element => search right half of A
*/
//Binary Search Implementation
template <class Comparable>
int binarySearch(const vector<Comparable>& a, const Comparable& x)
{
    /* 1*/ int low = 0, high = a.size() - 1;
    /* 2*/ while (low <= high)
    {
        /* 3*/ int mid = (low + high) / 2;
        /* 4*/ if (a[mid] < x)
            /* 5*/ low = mid + 1;
        /* 6*/ else if (a[mid] > x)
            /* 7*/ high = mid - 1;
        else
            /* 8*/ return mid; // Found
    }
    /* 9*/ return NOT_FOUND; // NOT_FOUND is defined as -1
}
//T(N) = T(N / 2) + O(1) = > T(N) = O(log N) because we make only one recursive call

//Euclid's Algorithm
/*
Computes the greatest common divisor (gcd) of two integers.
• gcd = largest integer that divides both.
• Example: gcd(50,15) = 5
• The algorithm computes gcd(M,N) assuming M >= N. If N > M
swaps them in the first iteration.
• It computes the remainders until 0 is reached.
• The last nonzero remainder is the answer.
• Example:
M = 1,989, N = 1,590
the sequence of remainders: 399, 393, 6, 3, 0
=> gcd(1989, 1590) = 3.
• Theorem: After two iterations the remainder is at most half of
its original value.
• The number of iterations is at most 2 log N = O(log N)
*/
//Implementation
long gcd(long m, long n)
{
    /* 1*/ while (n != 0)
    {
        /* 2*/ long rem = m % n;
        /* 3*/ m = n;
        /* 4*/ n = rem;
    }
    /* 5*/ return m;
}

//Exponentiation
//Compute X^N where X and N are integers
//  ->Obvious algorithm, use N-1 multiplications => O(N)
//  ->Better algorithm, recursively divide N by 2 based on rules of exponents
//      *Every recursive call decreases the exponent by half, and uses at most 2 multiplications
//      *Total number of multiplications is: 2logN => T(N) = O(logN)
long pow(long x, int n)
{
    /* 1*/ if (n == 0)
        /* 2*/ return 1;
    /* 3*/ if (n == 1)
        /* 4*/ return x;
    /* 5*/ if (isEven(n))
        /* 6*/ return pow(x * x, n / 2);
    else // Handles n = 1
        /* 7*/ return pow(x, n - 1) * x;
}
bool isEven(int n) {
    if (n % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}

