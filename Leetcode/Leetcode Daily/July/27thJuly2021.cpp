// https://leetcode.com/explore/challenge/card/july-leetcoding-challenge-2021/611/week-4-july-22nd-july-28th/3828/

/**
3Sum Closest

Given an array nums of n integers and an integer target, find three integers in nums such that the sum is closest to target. Return the sum of the three integers. You may assume that each input would have exactly one solution.

 

Example 1:

Input: nums = [-1,2,1,-4], target = 1
Output: 2
Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
 

Constraints:

3 <= nums.length <= 10^3
-10^3 <= nums[i] <= 10^3
-10^4 <= target <= 10^4

**/

// Code
// tc(n logn + n^2)
// sc O(1)
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n =  nums.size();
        sort(nums.begin(), nums.end());
        int left, right;
        int diff = INT_MAX;
        int ans;
        for(int i=0; i<n; i++) {
            left = i+1, right = n-1;
            while(left < right) {
                if(abs(nums[left]+nums[right]+nums[i] - target) < diff){
                    ans = nums[left]+nums[right]+nums[i];
                    diff = abs(nums[left]+nums[right]+nums[i] - target);
                }
                if(nums[left]+nums[right]+nums[i] == target) return target;
                if(nums[left]+nums[right]+nums[i] < target) left++;
                else right--;
            }
        }
        return ans;
    }
};

