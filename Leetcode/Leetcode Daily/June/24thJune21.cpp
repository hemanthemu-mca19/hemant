// https://leetcode.com/explore/challenge/card/june-leetcoding-challenge-2021/606/week-4-june-22nd-june-28th/3790/

/**
Out of Boundary Paths

Solution
There is an m x n grid with a ball. The ball is initially at the position [startRow, startColumn]. You are allowed to move the ball to one of the four adjacent cells in the grid (possibly out of the grid crossing the grid boundary). You can apply at most maxMove moves to the ball.

Given the five integers m, n, maxMove, startRow, startColumn, return the number of paths to move the ball out of the grid boundary. Since the answer can be very large, return it modulo 109 + 7.

 

Example 1:


Input: m = 2, n = 2, maxMove = 2, startRow = 0, startColumn = 0
Output: 6
Example 2:


Input: m = 1, n = 3, maxMove = 3, startRow = 0, startColumn = 1
Output: 12
 

Constraints:

1 <= m, n <= 50
0 <= maxMove <= 50
0 <= startRow < m
0 <= startColumn < n
**/

// code

class Solution {
public:
    long long int dp[52][52][52];
    
    long long int findPathsHelper(int m, int n, int maxMove, int row, int col){
        //base cases
        if(maxMove < 0) return 0;
        
        if(row < 0 || col < 0 || row >= m || col >= n) return 1;
            
        //memoization
           if(dp[row][col][maxMove] != -1) return  dp[row][col][maxMove];
        
        //recursive call
        long long int total = 0;
        long long int down = findPathsHelper(m, n, maxMove-1, row-1, col);
        long long int top = findPathsHelper(m, n, maxMove-1, row+1, col);
        long long int left = findPathsHelper(m, n, maxMove-1, row, col-1);
        long long int right = findPathsHelper(m, n, maxMove-1, row, col+1);
        
        total = (left+right+top+down) % 1000000007;
        dp[row][col][maxMove] = total;
        return total;
        
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        memset(dp, -1, sizeof(dp));
        long long int ways =  findPathsHelper(m, n, maxMove, startRow, startColumn);
        ways %= 1000000007;
        return ways;
    }
};
