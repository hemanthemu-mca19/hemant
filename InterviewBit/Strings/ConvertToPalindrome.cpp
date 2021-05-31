// https://www.interviewbit.com/problems/convert-to-palindrome/

/**
Convert to Palindrome
Asked in:  
Amazon
Problem Description

Given a string A consisting only of lowercase characters, we need to check whether it is possible to make this string a palindrome after removing exactly one character from this.

If it is possible then return 1 else return 0.



Problem Constraints
3 <= |A| <= 105

A[i] is always a lowercase character.



Input Format
First and only argument is an string A.



Output Format
Return 1 if it is possible to convert A to palindrome by removing exactly one character else return 0.



Example Input
Input 1:

 A = "abcba"
Input 2:

 A = "abecbea"


Example Output
Output 1:

 1
Output 2:

 0


Example Explanation
Explanation 1:

 We can remove character ‘c’ to make string palindrome
Explanation 2:

 It is not possible to make this string palindrome just by removing one character 


**/

// CODE

int Solution::solve(string A) {
    int n = A.size();
    int i  = 0, j = n-1;
    bool check;
    while(i<j) {
        if(A[i] != A[j])
            break;
        i++, j--;
    }
    int l1 = i+1, r1 = j;
    int l2 = i, r2 = j-1;
    while(l1<r1) {
        if(A[l1] != A[r1]) break;
        l1++, r1--;
    }
    if(l1>=r1) return 1;
    while(l2<r2) {
        if(A[l2] != A[r2]) break;
        l2++, r2--;
    }
    if(l2>=r2) return 1;
    return 0;
}
