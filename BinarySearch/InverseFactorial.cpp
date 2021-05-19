// https://binarysearch.com/problems/Inverse-Factorial

/**
  Inverse Factorial
The factorial of a number n is defined as n! = n * (n - 1) * (n - 2) * ... * 1.

Given a positive integer a, return n such that n! = a. If there is no integer n that is a factorial, then return -1.

Constraints

0 < a < 2 ** 31
Example 1
Input
a = 6
Output
3
Explanation
3! = 6

Example 2
Input
a = 10
Output
-1
Explanation
10 is not any integer factorial.
**/

// CODE

int solve(int a) {
    if(a==0) return 1;
    if(a==1) return 0;
    int num =1;
    for(int i=2; i<40; i++){
        if(num*i == a) return i;
        else if(num*i > a) break;
        num *=i;
    }
    return -1;
}
