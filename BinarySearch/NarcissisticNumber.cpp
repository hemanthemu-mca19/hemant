// https://binarysearch.com/problems/Narcissistic-Number

/**
Narcissistic Number
Given an integer n, return whether it is equal to the sum of its own digits raised to the power of the number of digits.

Example 1
Input
n = 153
Output
true
Explanation
153 = 1 ** 3 + 5 ** 3 + 3 ** 3

**/


// CODE


bool solve(int n) {
    // if(n<0) return false;
    string s = to_string(n);
    int size = s.size();
    int check = n;
    while(n>0) {
        int r = (n%10);
        check -= pow(r,size);
        n /=10;
    }
    return (check == 0);
}
