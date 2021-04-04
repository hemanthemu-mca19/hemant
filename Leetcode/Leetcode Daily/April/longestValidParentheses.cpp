class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.length();
        if(n<=1) return 0;
        vector<int> dp(n+1, 0);
        int res=0;
         for(int i=1; i<n; i++) {
             if(s[i]==')' && i-dp[i-1]-1 >=0 && s[i-dp[i-1]-1]=='(') {
                 if(i-dp[i-1]-2 >=0)
                     dp[i] = dp[i-1]+dp[i-dp[i-1]-2]+2;
                 else
                     dp[i] = dp[i-1]+2;
                 res = max(res, dp[i]);
             }
             
         }
        return res;
    }
};
