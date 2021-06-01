// https://binarysearch.com/problems/Longest-Alternating-Subsequence

/**

Longest Alternating Subsequence
Given a list of integers nums, return the length of the longest subsequence where the difference between consecutive numbers alternate between positive and negative. The first difference may be either positive or negative.

Constraints

n ≤ 5,000 where n is the length of nums
Example 1
Input
nums = [5, 9, 3, 1, 2, 8, 3, 6]
Output
6
Explanation
One possible longest alternating subsequence is [5, 9, 1, 8, 3, 6] and the differences are [4, -8, 7, -5, 3] which alternate.

**/

// CODE

int solve(vector<int>& nums) {
    int n = nums.size();
    if(n==1) return 1;
   vector<vector<int> > dp(n, vector<int>(2,1));
   int mx = 0;
   for(int i = 0; i < n; i++) {
       for(int j =0; j < i; j++) {
           if(nums[i]>nums[j] and dp[i][0] <= dp[j][1]) dp[i][0] = 1 + dp[j][1];
           else if(nums[i] < nums[j] and dp[i][1] <= dp[j][0]) dp[i][1] = 1 + dp[j][0];
       }
       mx = max(mx, max(dp[i][0], dp[i][1]));
   }
   return mx;
}
