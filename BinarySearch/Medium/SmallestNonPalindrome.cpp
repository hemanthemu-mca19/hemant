// https://binarysearch.com/problems/Lexicographically-Smallest-Non-Palindromic-String

/**
Lexicographically Smallest Non-Palindromic String
You are given a lowercase alphabet string s that is a palindrome. Update one character such that s is no longer a palindrome and is lexicographically smallest.

Constraints

2 ≤ n ≤ 100,000 where n is the length of s
Example 1
Input
s = "racecar"
Output
"aacecar"
Explanation
We can change the first "r" to "a" to get the lexicographically smallest string that is not a palindrome.

**/

// CODE

string solve(string s) {
    int n = s.size();
    for(int i = 0; i<n/2; i++){
        if(s[i] != 'a') {
            s[i] = 'a';
            return s;
        }
    }
    s[n-1] = 'b';
    return s;
}
