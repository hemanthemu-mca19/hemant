// https://leetcode.com/explore/challenge/card/july-leetcoding-challenge-2021/612/week-5-july-29th-july-31st/3831/

/**
01 Matrix

Solution
Given an m x n binary matrix mat, return the distance of the nearest 0 for each cell.

The distance between two adjacent cells is 1.

 

Example 1:


Input: mat = [[0,0,0],[0,1,0],[0,0,0]]
Output: [[0,0,0],[0,1,0],[0,0,0]]
Example 2:


Input: mat = [[0,0,0],[0,1,0],[1,1,1]]
Output: [[0,0,0],[0,1,0],[1,2,1]]
 

Constraints:

m == mat.length
n == mat[i].length
1 <= m, n <= 104
1 <= m * n <= 104
mat[i][j] is either 0 or 1.
There is at least one 0 in mat.

**/

// CODE
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int row = -1, col = -1;
        queue<pair<int, int> > queue;
        vector<vector<int> > dist(m, vector<int>(n, INT_MAX));
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
               if(mat[i][j] == 0) {
                   queue.push({i,j});
                   dist[i][j] = 0;
               }
            }
        }
        
         // we have queue for bfs
        vector<int> dx = {1, 0, 0, -1};
        vector<int> dy = {0, 1, -1, 0};
        while(!queue.empty()) {
            pair<int, int> add = queue.front();
            queue.pop();
            for(int i=0; i<4; i++) {
                int row = add.first + dx[i];
                int col = add.second + dy[i];
                if(row < 0 || col < 0 || row >= m || col >= n ) continue;
                else if(dist[row][col] > 1 + dist[add.first][add.second]){
                    dist[row][col] = 1 + dist[add.first][add.second];
                    queue.push({row, col});
                }
            }
        }
        
        return dist;
    }
};
