// https://leetcode.com/explore/challenge/card/june-leetcoding-challenge-2021/605/week-3-june-15th-june-21st/3782/

/**
Number of Subarrays with Bounded Maximum

Solution
We are given an array nums of positive integers, and two positive integers left and right (left <= right).

Return the number of (contiguous, non-empty) subarrays such that the value of the maximum array element in that subarray is at least left and at most right.

Example:
Input: 
nums = [2, 1, 4, 3]
left = 2
right = 3
Output: 3
Explanation: There are three subarrays that meet the requirements: [2], [2, 1], [3].
Note:

left, right, and nums[i] will be an integer in the range [0, 109].
The length of nums will be in the range of [1, 50000].
**/

// CODE
class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int n = nums.size();
        int si = 0, ei = 0;
        int ans = 0;
        int prev_count  = 0;
        while(ei < n) {
            if(nums[ei]>=left and nums[ei] <= right){
                prev_count = ei-si+1;
                ans += prev_count;
            }
            else if(nums[ei]<left){
                ans += prev_count;
            }
            else {
                si = ei+1;
                prev_count = 0;
            }
            ei++;
        }
        return ans;
    }
};
