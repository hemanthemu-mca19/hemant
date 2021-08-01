// https://leetcode.com/explore/challenge/card/july-leetcoding-challenge-2021/612/week-5-july-29th-july-31st/3833/

/**
Trapping Rain Water

Solution
Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

 

Example 1:


Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.
Example 2:

Input: height = [4,2,0,3,2,5]
Output: 9
 

Constraints:

n == height.length
0 <= n <= 3 * 104
0 <= height[i] <= 105

**/

// CODE
class Solution {
public:
    int trap(vector<int>& nums) {
        int n = nums.size();
        if(n < 3) return 0;
        int lmax = 0, rmax = 0;
        
        vector<int> prefix(n, 0);
        
        for(int i=0; i<n-1; i++) {
            if(lmax > nums[i] ) prefix[i] = lmax - nums[i];
            else lmax = nums[i];
        }
//         [0,1,0,2,1,0,1,3,2,1,2,1]
//         [0,1,0,2,1,0,1,3,2,1,2,1]
        // for(auto x :nums) cout << x <<" ";
        // cout<<"\n";
        // for(auto x :prefix) cout << x <<" ";
        for(int i = n-1; i>0; i--) {
            if(rmax > nums[i]) prefix[i] = min(prefix[i], rmax - nums[i]);
            else {
                rmax = nums[i];
                prefix[i] = 0;
            }
        }
        // cout<<"\n";
        // for(auto x :prefix) cout << x <<" ";
        int ans = 0;
        for(auto x : prefix) ans += x;
        
        return ans;
    }
};
