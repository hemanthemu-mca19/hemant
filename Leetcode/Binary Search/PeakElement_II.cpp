// https://leetcode.com/problems/find-a-peak-element-ii/

/**
1901. Find a Peak Element II
Medium

Share
A peak element in a 2D grid is an element that is strictly greater than all of its adjacent neighbors to the left, right, top, and bottom.

Given a 0-indexed m x n matrix mat where no two adjacent cells are equal, find any peak element mat[i][j] and return the length 2 array [i,j].

You may assume that the entire matrix is surrounded by an outer perimeter with the value -1 in each cell.

You must write an algorithm that runs in O(m log(n)) or O(n log(m)) time.

 

Example 1:



Input: mat = [[1,4],[3,2]]
Output: [0,1]
Explanation: Both 3 and 4 are peak elements so [1,0] and [0,1] are both acceptable answers.
Example 2:



Input: mat = [[10,20,15],[21,30,14],[7,16,32]]
Output: [1,1]
Explanation: Both 30 and 32 are peak elements so [1,1] and [2,2] are both acceptable answers.
 

Constraints:

m == mat.length
n == mat[i].length
1 <= m, n <= 500
1 <= mat[i][j] <= 105
No two adjacent cells are equal.

**/

// Code
//  TC (m log(n) )
// SC O(1)

class Solution {
public:
    int binarySearch(vector<vector<int>>& mat, int index){
        if(mat[index].size()==1) return 0;
        int l=0, r = mat[index].size()-1;
        while(l<r) {
            int mid = (l+r)>>1;
            if(mat[index][mid] > mat[index][mid+1]) r = mid;
            else l = mid+1;
        }
        return l;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        vector<int> peak_coordinates = {0,0};
        int rows = mat.size(), col = mat[0].size();
        
        for(int i=0; i<rows; i++) {
            int col_index = binarySearch(mat, i);
            if(( (i > 0) ? mat[i][col_index] > mat[i-1][col_index] : 1 ) and  ( (i < rows-1) ? mat[i][col_index] > mat[i+1][col_index] : 1) ) {
                peak_coordinates = {i, col_index};
                break;
            }
        }
        return peak_coordinates;
    }
};
