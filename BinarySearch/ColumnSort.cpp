// https://binarysearch.com/problems/Column-Sort

/**
Column Sort
Given a two-dimensional integer matrix, sort each of the columns in ascending order.

Constraints

n, m ≤ 250 where n and m are the number of rows and columns in matrix
Example 1
Input
matrix = [
    [10, 20, 30],
    [5, 5, 3],
    [0, 10, 7]
]
Output
[
    [0, 5, 3],
    [5, 10, 7],
    [10, 20, 30]
]

**/

// CODE

vector<vector<int>> solve(vector<vector<int>>& matrix) {

    int m=matrix.size(), n = matrix[0].size();
    vector<vector<int>> dum(n, vector<int> (m));
    int sz = min(m,n);
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            dum[i][j] = matrix[j][i];
        }
    }
    for(int i=0; i<n; i++)
      sort(dum[i].begin(), dum[i].end());
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            matrix[i][j] = dum[j][i];
        }
    }
    return matrix;
}
