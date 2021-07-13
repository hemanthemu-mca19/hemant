// https://leetcode.com/explore/challenge/card/july-leetcoding-challenge-2021/609/week-2-july-8th-july-14th/3812/

/**
Find Peak Element

Solution
A peak element is an element that is strictly greater than its neighbors.

Given an integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

You may imagine that nums[-1] = nums[n] = -∞.

You must write an algorithm that runs in O(log n) time.

 

Example 1:

Input: nums = [1,2,3,1]
Output: 2
Explanation: 3 is a peak element and your function should return the index number 2.
Example 2:

Input: nums = [1,2,1,3,5,6,4]
Output: 5
Explanation: Your function can return either index number 1 where the peak element is 2, or index number 5 where the peak element is 6.
 

Constraints:

1 <= nums.length <= 1000
-231 <= nums[i] <= 231 - 1
nums[i] != nums[i + 1] for all valid i.

**/

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
       int n = nums.size();
        if(n==1) return 0;                   // single element is always a peak element
		if(nums[0]> nums[1]) return 0;     // check if first element satisfies the condition
        if(nums[n-1] > nums[n-2]) return n-1;    // check if last element satisfies the condition
        
        int left=0,right=nums.size()-1;
        
        while(left<right){
            int mid = left+(right-left)/2;
            if(nums[mid]> nums[mid-1] && nums[mid]>nums[mid+1]){    //check if mid element satisfies the condition
                return mid;
            }
            if(nums[mid] > nums[mid-1] && nums[mid]<nums[mid+1]){      
                left = mid+1;     //move left to mid+1 as nums[mid+1] > nums[mid], thus our answer  lies on right side
            }
            else{
				right=mid;         //move right to mid as either nums[mid-1] is more than nums[mid] or nums[mid] is more than nums[mid+1] 
            }
        }
        return -1; 
    }
};
