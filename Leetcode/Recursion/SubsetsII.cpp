// https://leetcode.com/explore/challenge/card/july-leetcoding-challenge-2021/608/week-1-july-1st-july-7th/3799/

/**
Subsets II
Medium

2798

113

Add to List

Share
Given an integer array nums that may contain duplicates, return all possible subsets (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

 

Example 1:

Input: nums = [1,2,2]
Output: [[],[1],[1,2],[1,2,2],[2],[2,2]]
Example 2:

Input: nums = [0]
Output: [[],[0]]
 

Constraints:

1 <= nums.length <= 10
-10 <= nums[i] <= 10
**/

// CODE
class Solution {
public:
    vector<vector<int> > ans;
    void helper(vector<int> &nums, int n, int index, vector<int> temp){
        ans.push_back(temp);
        for(int i=index; i<n; i++) {
            if(i!=index and nums[i] ==nums[i-1]) continue;
            temp.push_back(nums[i]);
            helper(nums, n, i+1, temp);
            temp.pop_back(); 
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        int index = 0;
        vector<int> temp;
        sort(nums.begin(), nums.end());
        helper(nums, n, index, temp);
    
        return ans;
    }
};
