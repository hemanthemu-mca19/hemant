// https://leetcode.com/explore/challenge/card/may-leetcoding-challenge-2021/601/week-4-may-22nd-may-28th/3754/

/**
To Lower Case

Solution
Given a string s, return the string after replacing every uppercase letter with the same lowercase letter.

 

Example 1:

Input: s = "Hello"
Output: "hello"
Example 2:

Input: s = "here"
Output: "here"
Example 3:

Input: s = "LOVELY"
Output: "lovely"
 

Constraints:

1 <= s.length <= 100
s consists of printable ASCII characters.
**/

// CODE

class Solution {
public:
    string toLowerCase(string s) {
        int i=0;
    while(s[i]!='\0'){
           s[i] = tolower(s[i]);
        ++i;
        }
        
        return s;
    }
};

// Without STL
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0; i<s.size(); ++i){
            if(s[i] >= 'A' and s[i] <= 'Z')
                s[i] = s[i]+32;
        }
        
        return s;
    }
};
