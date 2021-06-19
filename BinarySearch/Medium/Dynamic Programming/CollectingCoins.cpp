// https://binarysearch.com/problems/Collecting-Coins

/**

Collecting Coins
Medium

You are given a two-dimensional integer matrix where each cell represents number of coins in that cell. Assuming we start at matrix[0][0], and can only move right or down, find the maximum number of coins you can collect by the bottom right corner.

Constraints

n, m ≤ 100 where n and m are the number of rows and columns in matrix.
Example 1
Input
matrix = [
    [0, 3, 1, 1],
    [2, 0, 0, 4]
]
Output
9
Explanation
We take the following path: [0, 3, 1, 1, 4]

Example 2
Input
matrix = [
    [0, 3, 1, 1],
    [2, 0, 0, 4],
    [1, 5, 3, 1]
]
Output
12
Explanation
We take the following path: [0, 2, 1, 5, 3, 1]

Example 3
Input
matrix = [
    [0, 2, 1],
    [2, 5, 0],
    [4, 1, 3]
]
Output
11
Explanation
We take the following path: [0, 2, 5, 1, 3]

**/

// CODE

int solve(vector<vector<int>>& matrix) {
    int m = matrix.size(), n = matrix[0].size();

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            matrix[i][j] = matrix[i][j] + max( ((i-1 >= 0) ? matrix[i-1][j] : 0), ((j-1 >= 0 ) ? matrix[i][j-1] : 0) );
        }
    }
   
    return matrix[m-1][n-1];
}
