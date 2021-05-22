// https://binarysearch.com/problems/Largest-Rectangle-Submatrix

/**

Largest Rectangle Submatrix
Given a two-dimensional integer matrix consisting only of 1s and 0s, return the area of the largest rectangle containing only 1s.

Constraints

0 ≤ n, m ≤ 250 where n and m are the number of rows and columns in matrix
Example 1
Input
matrix = [
    [1, 0, 0, 0],
    [1, 0, 1, 1],
    [1, 0, 1, 1],
    [0, 1, 0, 0]
]
Output
4
Explanation
The biggest rectangle here is the 2 by 2 square of 1s on the right.

**/

// CODE



int solve(vector<vector<int>>& matrix) {
    int m = matrix.size(), n = matrix[0].size();
    int area = 0;
    // Prepare Histogram

    for (int i = 1; i < m; i++) 
        for (int j = 0; j < n; j++) if(matrix[i][j] == 1) matrix[i][j] += matrix[i - 1][j];
       
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            int len = INT_MAX;
            for(int k=j; k<n; k++) {
                len = min(len, matrix[i][k]);
                int wid = (k-j+1);
                area = max(area, len*wid);
            }
        }
    }

    return area;
}
