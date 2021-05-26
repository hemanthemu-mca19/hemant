// https://www.interviewbit.com/problems/palindrome-integer/

/**

Palindrome Integer
Asked in:  
HCL
Determine whether an integer is a palindrome. Do this without extra space.

A palindrome integer is an integer x for which reverse(x) = x where reverse(x) is x with its digit reversed.
Negative numbers are not palindromic.

Example :

Input : 12121
Output : True

Input : 123
Output : False

**/

// CODE

int Solution::isPalindrome(int A) { 
    int rev = 0;
    if(A == 0) return true;
    if(A%10 == 0 ) return false;
    while(A > rev) {
        int r = A%10;
        rev = rev * 10 + r;
        A /= 10;
    }
    return (A==rev || A == (rev/10));
}
