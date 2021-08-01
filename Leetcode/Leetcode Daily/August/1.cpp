// https://leetcode.com/explore/featured/card/august-leetcoding-challenge-2021/613/week-1-august-1st-august-7th/3835/

/**
Making A Large Island


You are given an n x n binary matrix grid. You are allowed to change at most one 0 to be 1.

Return the size of the largest island in grid after applying this operation.

An island is a 4-directionally connected group of 1s.

 

Example 1:

Input: grid = [[1,0],[0,1]]
Output: 3
Explanation: Change one 0 to 1 and connect two 1s, then we get an island with area = 3.
Example 2:

Input: grid = [[1,1],[1,0]]
Output: 4
Explanation: Change the 0 to 1 and make the island bigger, only one island with area = 4.
Example 3:

Input: grid = [[1,1],[1,1]]
Output: 4
Explanation: Can't change any 0 to 1, only one island with area = 4.
 

Constraints:

n == grid.length
n == grid[i].length
1 <= n <= 500
grid[i][j] is either 0 or 1.

**/

// CODE
class Solution {
public:
    
    int dfs(vector<vector<int> > &mat, int row, int col, int id){
        if(row < 0 || col < 0 || row >= mat.size() || col >= mat[0].size() || mat[row][col] != 1) return 0;
        
        mat[row][col] = id;
        
        return 1 + dfs(mat, row+1, col, id) + dfs(mat, row-1, col, id) + dfs(mat, row, col+1, id) + dfs(mat, row, col-1, id);
    }
    
    int largestIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        if(n == 0) return 0;
        int m =grid[0].size();
        
        int gridId = 2;
        unordered_map<int, int> map;    //map[gridId][size]
        map[0] = 0;
        for(int  i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 1) {
                    int size  = dfs(grid, i, j, gridId);
                    map[gridId] = size;
                    gridId++;
                }
            }
        }
        
        int maxArea = map[grid[0][0]];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 0) {
                    int ans = 1;
                    unordered_set<int> set;
                    if(i > 0 and grid[i-1][j] != 0) set.insert(grid[i-1][j]);
                    if(j > 0 and grid[i][j-1] != 0) set.insert(grid[i][j-1]);
                    if(i < n-1 and grid[i+1][j] != 0) set.insert(grid[i+1][j]);
                    if(j < m-1 and grid[i][j+1] != 0) set.insert(grid[i][j+1]);
                    
                    for(auto x : set) ans += map[x];
                    
                    maxArea = max(maxArea, ans);
                }
            }
        }
        return maxArea;
    }
};
