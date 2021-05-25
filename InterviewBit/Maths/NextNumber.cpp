// https://www.interviewbit.com/problems/next-similar-number/

/**
Next Similar Number
Asked in:  
Amazon
Problem Description

Given a number A in a form of string.

You have to find the smallest number that has same set of digits as A and is greater than A.

If A is the greatest possible number with its set of digits, then return -1.



Problem Constraints
1 <= A <= 10100000

A doesn't contain leading zeroes.



Input Format
First and only argument is an numeric string denoting the number A.



Output Format
Return a string denoting the smallest number greater than A with same set of digits , if A is the largest possible then return -1.



Example Input
Input 1:

 A = "218765"
Input 2:

 A = "4321"


Example Output
Output 1:

 "251678"
Output 2:

 "-1"

**/

// CODE

string Solution::solve(string A) {
    string ans = A;
    auto check = next_permutation(A.begin(), A.end());
    if(check) return A;
    return "-1";
}
