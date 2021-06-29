// https://leetcode.com/explore/challenge/card/june-leetcoding-challenge-2021/606/week-4-june-22nd-june-28th/3794/

/**
Remove All Adjacent Duplicates In String

Solution
You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them.

We repeatedly make duplicate removals on s until we no longer can.

Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.

 

Example 1:

Input: s = "abbaca"
Output: "ca"
Explanation: 
For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".
Example 2:

Input: s = "azxxzy"
Output: "ay"
 

Constraints:

1 <= s.length <= 105
s consists of lowercase English letters.

**/

// CODE O(n) space and O(2*n)time complexity
class Solution {
public:
    string removeDuplicates(string s) {
       stack<char> st;
        for (char c:s){
            if(!st.empty() and st.top() == c) st.pop();
            else st.push(c);
        }
        string ans = "";
        while(!st.empty()){
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }
};


// CODE O(1) space and O(n)time complexity
class Solution {
public:
    string removeDuplicates(string s) {
       int n = s.size();
        if(n<2) return s;
        int i = 0;
        while(i+1 < s.size()){
            if(s[i]==s[i+1]){
                s.erase(i,2);
                if(i>0) i--;
            }
            else i++;
        }
        return s;
    }
};
