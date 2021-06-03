// https://leetcode.com/problems/max-number-of-k-sum-pairs/

/**

1679. Max Number of K-Sum Pairs
Medium

438

19

Add to List

Share
You are given an integer array nums and an integer k.

In one operation, you can pick two numbers from the array whose sum equals k and remove them from the array.

Return the maximum number of operations you can perform on the array.

 

Example 1:

Input: nums = [1,2,3,4], k = 5
Output: 2
Explanation: Starting with nums = [1,2,3,4]:
- Remove numbers 1 and 4, then nums = [2,3]
- Remove numbers 2 and 3, then nums = []
There are no more pairs that sum up to 5, hence a total of 2 operations.
Example 2:

Input: nums = [3,1,3,4,3], k = 6
Output: 1
Explanation: Starting with nums = [3,1,3,4,3]:
- Remove the first two 3's, then nums = [1,4,3]
There are no more pairs that sum up to 6, hence a total of 1 operation.
 

Constraints:

1 <= nums.length <= 105
1 <= nums[i] <= 109
1 <= k <= 109

**/

// CODE

// HashMap 

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        map<int, int> mp;
        int cnt = 0;
        for(int i=0; i<nums.size(); i++) {
            if(!mp.empty() and mp.find(k-nums[i]) != mp.end()) {
                if(mp[k-nums[i]] > 0) {
                    mp[k-nums[i]]--;
                    cnt++;
                }
            else mp[nums[i]]++;
            }
            else mp[nums[i]]++;
        }
        return cnt;
    }
};

// Two pointers

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int cnt = 0;
        int l = 0, r = nums.size()-1;
        while(l<r){
            if(nums[l]+nums[r] == k) l++, r--, cnt++;
            else if(nums[l]+nums[r] < k) l++;
            else r--;
        }
        return cnt;
    }
};
