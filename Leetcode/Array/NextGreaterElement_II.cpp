// https://leetcode.com/problems/next-greater-element-ii/

/**
Next Greater Element II
Medium

2802

96

Add to List

Share
Given a circular integer array nums (i.e., the next element of nums[nums.length - 1] is nums[0]), return the next greater number for every element in nums.

The next greater number of a number x is the first greater number to its traversing-order next in the array, which means you could search circularly to find its next greater number. If it doesn't exist, return -1 for this number.

 

Example 1:

Input: nums = [1,2,1]
Output: [2,-1,2]
Explanation: The first 1's next greater number is 2; 
The number 2 can't find next greater number. 
The second 1's next greater number needs to search circularly, which is also 2.
Example 2:

Input: nums = [1,2,3,4,3]
Output: [2,3,4,-1,4]
 

Constraints:

1 <= nums.length <= 104
-109 <= nums[i] <= 109
**/

// code
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        stack<int> st;
        vector<int> ans(n);
        for(int i=2*n-1; i>=0; i--){
            if(st.empty()) {
                ans[i%n] = -1;
            }
            else if(!st.empty() and st.top()>nums[i%n]) {
                ans[i%n] = st.top();
                
            }
            else {
                while(!st.empty() and st.top()<=nums[i%n]) st.pop();
                if(!st.empty()) ans[i%n] = st.top();
                else ans[i%n] = -1;
            }
            st.push(nums[i%n]);
        }
        return ans;
    }
};
