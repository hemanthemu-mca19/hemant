// https://leetcode.com/problems/combination-sum-ii/

/**
40. Combination Sum II
Medium

Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.

Each number in candidates may only be used once in the combination.

Note: The solution set must not contain duplicate combinations.

 

Example 1:

Input: candidates = [10,1,2,7,6,1,5], target = 8
Output: 
[
[1,1,6],
[1,2,5],
[1,7],
[2,6]
]
Example 2:

Input: candidates = [2,5,2,1,2], target = 5
Output: 
[
[1,2,2],
[5]
]
 

Constraints:

1 <= candidates.length <= 100
1 <= candidates[i] <= 50
1 <= target <= 30
**/

// CODE
// TC: O(2^n)* O(K) 2^n for trying almost all possibilites and O(k) for puting numbers into some data structure here i.e. a vector
// SC: answer space + temp answer keeping space i.e. in worst case is O(n)

class Solution {
public:
    vector<vector<int>> combinations;
    void helper(vector<int>& nums, int target, int index, vector<int> ans) {
        if(target == 0) return combinations.push_back(ans);
        if(index >= nums.size() || target < 0) return;
        
        for(int i = index; i<nums.size(); i++) {
            if(i!=index and nums[i]==nums[i-1]) continue;
            ans.push_back(nums[i]);
            helper(nums, target-nums[i], i+1, ans);
            ans.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> ans;
        sort(candidates.begin(), candidates.end());
        helper(candidates, target, 0, ans);
        return combinations;
    }
};
