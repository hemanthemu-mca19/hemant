// https://leetcode.com/explore/challenge/card/july-leetcoding-challenge-2021/611/week-4-july-22nd-july-28th/3829/

/**
Beautiful Array

Solution
For some fixed n, an array nums is beautiful if it is a permutation of the integers 1, 2, ..., n, such that:

For every i < j, there is no k with i < k < j such that nums[k] * 2 = nums[i] + nums[j].

Given n, return any beautiful array nums.  (It is guaranteed that one exists.)

 

Example 1:

Input: n = 4
Output: [2,1,4,3]
Example 2:

Input: n = 5
Output: [3,1,2,5,4]
 

Note:

1 <= n <= 1000
**/

// code
class Solution {
public:
    vector<int> beautifulArray(int n) {
        vector<int> ans;
        ans.push_back(1);
        
        while(ans.size() < n) {
            vector<int> temp;
            
            for(auto ele : ans) {
                if(ele*2 - 1 <= n) 
                    temp.push_back(ele*2 - 1);
            }
            for(auto ele : ans) {
                if(2*ele <= n) 
                    temp.push_back(2*ele);
            }
            ans = temp;
        }
        return ans;
    }
};
