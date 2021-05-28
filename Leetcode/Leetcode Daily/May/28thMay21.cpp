// https://leetcode.com/explore/challenge/card/may-leetcoding-challenge-2021/601/week-4-may-22nd-may-28th/3758/

/**

 Maximum Erasure Value

Solution
You are given an array of positive integers nums and want to erase a subarray containing unique elements. The score you get by erasing the subarray is equal to the sum of its elements.

Return the maximum score you can get by erasing exactly one subarray.

An array b is called to be a subarray of a if it forms a contiguous subsequence of a, that is, if it is equal to a[l],a[l+1],...,a[r] for some (l,r).

 

Example 1:

Input: nums = [4,2,4,5,6]
Output: 17
Explanation: The optimal subarray here is [2,4,5,6].
Example 2:

Input: nums = [5,2,1,2,5,2,1,2,5]
Output: 8
Explanation: The optimal subarray here is [5,2,1] or [1,2,5].
 

Constraints:

1 <= nums.length <= 105
1 <= nums[i] <= 104

**/

// code

class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        vector<bool> found(10001, false);
        int curr_sum = 0, max_sum = 0;
        int l = 0, r = 0;
        while(r < nums.size()) {
            if(found[nums[r]])
                while(found[nums[r]]){
                    curr_sum -= nums[l];
                    found[nums[l++]] = false;
                }
            curr_sum += nums[r];
            found[nums[r++]] = true;
                
            max_sum = max(max_sum, curr_sum);
        }
        return max_sum;
    }
};


// Optimised using array instead of set

class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int> s;
        int curr_sum = 0, max_sum = 0;
        int l = 0, r = 0;
        while(r < nums.size()) {
            if(s.find(nums[r]) != s.end())
                while(s.find(nums[r]) != s.end()){
                    curr_sum -= nums[l];
                    s.erase(nums[l++]);
                }
            curr_sum += nums[r];
            s.insert(nums[r++]);
                
            max_sum = max(max_sum, curr_sum);
        }
        return max_sum;
    }
};
