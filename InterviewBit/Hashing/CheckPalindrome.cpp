// https://www.interviewbit.com/problems/check-palindrome/

/**
Check Palindrome!
Easy

Problem Description

Given a string A consisting of lowercase characters.

Check if characters of the given string can be rearranged to form a palindrome.

Return 1 if it is possible to rearrange the characters of the string A such that it becomes a palindrome else return 0.



Problem Constraints
1 <= |A| <= 105

A consists only of lower-case characters.



Input Format
First argument is an string A.



Output Format
Return 1 if it is possible to rearrange the characters of the string A such that it becomes a palindrome else return 0.



Example Input
Input 1:

 A = "abcde"
Input 2:

 A = "abbaee"


Example Output
Output 1:

 0
Output 2:

 1


Example Explanation
Explanation 1:

 No possible rearrangement to make the string palindrome.
Explanation 2:

 Given string "abbaee" can be rearranged to "aebbea" to form a palindrome.
**/

// CODE
int Solution::solve(string A) {
    vector<int> count(26,0);
    if(A.size() == 0 || A.size() == 1) return 1;
    for(auto ch:A) count[ch-'a']++;
    int flag = 0; // to check first or second occurance of a char odd times
    for(int i=0; i<26; i++) {
        if(flag == 0 and count[i]%2 == 1) {
            flag =1;
        }
        else if(flag == 1 and count[i]%2 == 1) return 0;
    }
    return 1;
}
