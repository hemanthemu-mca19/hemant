// https://leetcode.com/explore/challenge/card/june-leetcoding-challenge-2021/604/week-2-june-8th-june-14th/3773/

/**

Jump Game VI

Solution
You are given a 0-indexed integer array nums and an integer k.

You are initially standing at index 0. In one move, you can jump at most k steps forward without going outside the boundaries of the array. That is, you can jump from index i to any index in the range [i + 1, min(n - 1, i + k)] inclusive.

You want to reach the last index of the array (index n - 1). Your score is the sum of all nums[j] for each index j you visited in the array.

Return the maximum score you can get.

 

Example 1:

Input: nums = [1,-1,-2,4,-7,3], k = 2
Output: 7
Explanation: You can choose your jumps forming the subsequence [1,-1,4,3] (underlined above). The sum is 7.
Example 2:

Input: nums = [10,-5,-2,4,0,3], k = 3
Output: 17
Explanation: You can choose your jumps forming the subsequence [10,4,3] (underlined above). The sum is 17.
Example 3:

Input: nums = [1,-5,-20,4,-1,3,-6,-3], k = 2
Output: 0
 

Constraints:

 1 <= nums.length, k <= 105
-104 <= nums[i] <= 104


**/

// CODE
class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> dp(n,0);
        dp[n-1] = nums[n-1];
        deque<int> q; //to maintain an increasing sequence of numbers 
        q.push_back(n-1);
        for(int i=n-2; i>=0; i--){
            if(!q.empty() and (q.front()-i) > k) q.pop_front(); // if ith position is far away by k position
            if(!q.empty())
                dp[i] += nums[i] + dp[q.front()];
            while(!q.empty() and dp[q.back()] <= dp[i]) q.pop_back(); // elements from back and inserting current index at proper position in queue i.e. if lesser contributing elements are present at back so we have a better one before them
            q.push_back(i);
        }
        return dp[0];
    }
};
