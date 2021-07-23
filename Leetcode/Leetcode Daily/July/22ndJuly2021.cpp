// https://leetcode.com/explore/challenge/card/july-leetcoding-challenge-2021/611/week-4-july-22nd-july-28th/3823/

/**
Partition Array into Disjoint Intervals

Given an array nums, partition it into two (contiguous) subarrays left and right so that:
Every element in left is less than or equal to every element in right.
left and right are non-empty.
left has the smallest possible size.
Return the length of left after such a partitioning.  It is guaranteed that such a partitioning exists.
 
Example 1:
Input: nums = [5,0,3,8,6]
Output: 3
Explanation: left = [5,0,3], right = [8,6]
Example 2:
Input: nums = [1,1,1,0,6,12]
Output: 4
Explanation: left = [1,1,1,0], right = [6,12]
 
Note:
2 <= nums.length <= 30000
0 <= nums[i] <= 106
It is guaranteed there is at least one way to partition nums as described.
**/

// CODE

class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n = nums.size();
        vector<int> greatest(n,-1);
        greatest[0] = nums[0];
        vector<int> least(n);
        least[n-1] = nums[n-1];
        for(int i=1; i<n; i++) {
            greatest[i] = max(greatest[i-1], nums[i]);
        }
        for(int i=n-2; i>=0; i--){
            least[i] = min(least[i+1], nums[i]);
        }
        for(int i=0; i<n-1; i++) {
            if(greatest[i] <= least[i+1]) return i+1;
        }
        return n-1;
    }
};
//      [5,0,3,8,6, 9]
// max =[5, 5, 5, 8, 8, 9]
// min =[0, 0, 3, 6, 6, 9]

//     [1,1,1,0,6,12]
// max = [1,1,1,1,6,12]
// min = [0,0,0,0,6,12]

// optimized code
class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n = nums.size();
        int cur_ele = nums[0];
        int max_ele = nums[0];
        int ans = 1;
        for(int i=1; i<n; i++) {
            if(nums[i] < cur_ele){
                ans = i+1;
                cur_ele = max(cur_ele, max_ele);
            }
            else {
                max_ele = max(nums[i], max_ele);
            }
        }
        return ans;
    }
};
