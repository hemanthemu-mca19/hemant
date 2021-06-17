// https://leetcode.com/explore/challenge/card/june-leetcoding-challenge-2021/605/week-3-june-15th-june-21st/3781/

/**
Generate Parentheses:
Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

 

Example 1:

Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]
Example 2:

Input: n = 1
Output: ["()"]
 

Constraints:

1 <= n <= 8

**/

// CODE

class Solution {
public:
    void helper(vector<string> &ans, string s, int open, int close, int max) {
        // base case
        if(s.size() == 2*max) {
            ans.push_back(s);
            return;
        }
        
        //recursive calls
        if(open < max) helper(ans, s+'(', open+1, close, max);
        if(close < open) helper(ans, s+')', open, close+1, max);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        
        helper(ans, "", 0, 0, n);
        return ans;
    }
};
