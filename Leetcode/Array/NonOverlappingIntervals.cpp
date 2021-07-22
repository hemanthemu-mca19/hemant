// https://leetcode.com/problems/non-overlapping-intervals/

/**
Medium

Given an array of intervals intervals where intervals[i] = [starti, endi], return the minimum number of intervals you need to remove to make the rest of the intervals non-overlapping.

 

Example 1:

Input: intervals = [[1,2],[2,3],[3,4],[1,3]]
Output: 1
Explanation: [1,3] can be removed and the rest of the intervals are non-overlapping.
Example 2:

Input: intervals = [[1,2],[1,2],[1,2]]
Output: 2
Explanation: You need to remove two [1,2] to make the rest of the intervals non-overlapping.
Example 3:

Input: intervals = [[1,2],[2,3]]
Output: 0
Explanation: You don't need to remove any of the intervals since they're already non-overlapping.
 

Constraints:

1 <= intervals.length <= 2 * 104
intervals[i].length == 2
-2 * 104 <= starti < endi <= 2 * 104
  **/
//   Code
 class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int n = intervals.size();
        int left = 0;
        int right = 1;
        int counter = 0;
        while(right < n) {
            if(intervals[left][1] <= intervals[right][0]) { //non-overlapping
                left = right;
                right++;
            }
            else if(intervals[left][1] <= intervals[right][1]) { //overlapping case 1
                counter++; 
                right++; //delete left
            }
            else if (intervals[left][1] > intervals[right][1]) { //overlapping case 2
                left = right;  //delete left
                counter++;
                right++; 
            }  
        }
        return counter;
    }
}; 
