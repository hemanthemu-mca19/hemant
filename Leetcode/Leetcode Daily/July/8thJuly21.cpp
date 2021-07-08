// https://leetcode.com/explore/challenge/card/july-leetcoding-challenge-2021/609/week-2-july-8th-july-14th/3807/

/**
Maximum Length of Repeated Subarray

Solution
Given two integer arrays nums1 and nums2, return the maximum length of a subarray that appears in both arrays.

 

Example 1:

Input: nums1 = [1,2,3,2,1], nums2 = [3,2,1,4,7]
Output: 3
Explanation: The repeated subarray with maximum length is [3,2,1].
Example 2:

Input: nums1 = [0,0,0,0,0], nums2 = [0,0,0,0,0]
Output: 5
 

Constraints:

1 <= nums1.length, nums2.length <= 1000
0 <= nums1[i], nums2[i] <= 100
**/

// CODE
class Solution {
public:
    vector<vector<int> > dp;
    int findLength(vector<int>& nums1, vector<int>& nums2) {
       int n1 = nums1.size(), n2 = nums2.size();
        if(n1==0 || n2==0) return 0;
        dp.resize(n1+1, vector<int>(n2+1,0));
        for(int i=0; i<=n1; i++) dp[i][0] = 0;
        for(int i=0; i<=n2; i++) dp[0][i] = 0;
        int ans = 0;
        for(int i=1; i<=n1; i++) {
            for(int j=1; j<=n2; j++){
                if(nums1[i-1] == nums2[j-1]) {
                    dp[i][j] = 1+dp[i-1][j-1];
                    ans = max(ans, dp[i][j]);
                }
            }
        }
            return ans;
    }
};
