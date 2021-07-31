// https://leetcode.com/problems/longest-palindromic-subsequence/

/**

516. Longest Palindromic Subsequence
Medium

3645

224

Add to List

Share
Given a string s, find the longest palindromic subsequence's length in s.

A subsequence is a sequence that can be derived from another sequence by deleting some or no elements without changing the order of the remaining elements.

 

Example 1:

Input: s = "bbbab"
Output: 4
Explanation: One possible longest palindromic subsequence is "bbbb".
Example 2:

Input: s = "cbbd"
Output: 2
Explanation: One possible longest palindromic subsequence is "bb".
 

Constraints:

1 <= s.length <= 1000
s consists only of lowercase English letters.

**/

// CODE
class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n = s.size();
        if(n<2) return n;
        
        vector<vector<int> > dp(n, vector<int> (n, 1));
        
        for(int l = 2; l<=n; l++) {
            for(int i=0; i<n-l+1; i++) {
                int j = i+l-1;
                if(l ==2 and s[i] == s[j]) {
                    dp[i][j] = 2;
                }
                else if (s[i] == s[j]) {
                    dp[i][j] = 2 + dp[i+1][j-1];
                }
                else {
                    dp[i][j] = max(dp[i+1][j], dp[i][j-1]);
                }
            }
        }
        return dp[0][n-1];
    }
};
