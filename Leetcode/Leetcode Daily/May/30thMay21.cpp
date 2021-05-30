// https://leetcode.com/explore/challenge/card/may-leetcoding-challenge-2021/602/week-5-may-29th-may-31st/3761/

/**
Maximum Gap 
Given an integer array nums, return the maximum difference between two successive elements in its sorted form. If the array contains less than two elements, return 0.

You must write an algorithm that runs in linear time and uses linear extra space.

 

Example 1:

Input: nums = [3,6,9,1]
Output: 3
Explanation: The sorted form of the array is [1,3,6,9], either (3,6) or (6,9) has the maximum difference 3.

**/

// code

class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size(), max_difference = 0;
        // if(n==1) return 0;
        sort(nums.begin(), nums.end());
        for(int i=1; i<n; i++) {
            max_difference = max(max_difference, nums[i]-nums[i-1]);
        }
        return max_difference;
    }
};
