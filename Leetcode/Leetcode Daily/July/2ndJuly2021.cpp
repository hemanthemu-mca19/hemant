// https://leetcode.com/explore/challenge/card/july-leetcoding-challenge-2021/608/week-1-july-1st-july-7th/3800/

/**
Find K Closest Elements

Solution

Given a sorted integer array arr, two integers k and x, return the k closest integers to x in the array. The result should also be sorted in ascending order.

An integer a is closer to x than an integer b if:

|a - x| < |b - x|, or
|a - x| == |b - x| and a < b
 

Example 1:

Input: arr = [1,2,3,4,5], k = 4, x = 3
Output: [1,2,3,4]
Example 2:

Input: arr = [1,2,3,4,5], k = 4, x = -1
Output: [1,2,3,4]
 

Constraints:

1 <= k <= arr.length
1 <= arr.length <= 104
arr is sorted in ascending order.
-104 <= arr[i], x <= 104
**/

// CODE
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int start =0, end = arr.size()-1;
        while(end-start >= k){
            if(abs(arr[start]-x) > abs(arr[end]-x)) start++;
            else end--;
        }
        vector<int> ans;
        for(int i=start; i<=end; i++){
            ans.push_back(arr[i]);
        }
        return ans;
    }
};
