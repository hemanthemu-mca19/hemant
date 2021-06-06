// https://leetcode.com/explore/challenge/card/june-leetcoding-challenge-2021/603/week-1-june-1st-june-7th/3769/

/**

Longest Consecutive Sequence

Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

You must write an algorithm that runs in O(n) time.

 

Example 1:

Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.
Example 2:

Input: nums = [0,3,7,2,5,8,4,6,0,1]
Output: 9
 

Constraints:

0 <= nums.length <= 105
-109 <= nums[i] <= 109

**/


// CODE

// O(N) Approach using set

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        int ans = 0;
        for(auto x  :  nums) s.insert(x);
        for(auto x : nums){
            if(s.find(x-1) == s.end()) {    //previous element is not present then
                int n = x+1;
                while(s.find(n) != s.end()) n++;
                ans = max(ans, n-x);
            } 
        }
        return ans;
    }
};
