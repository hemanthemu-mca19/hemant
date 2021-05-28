// https://binarysearch.com/problems/Matrix-Prefix-Sum

/**

Matrix Prefix Sum
Given a two-dimensional integer matrix, return a new matrix A of the same dimensions where each element is set to A[i][j] = sum(matrix[r][c]) for all r ≤ i, c ≤ j.

Constraints

n, m ≤ 250 where n and m are the number of rows and columns in matrix
matrix[i][j] ≤ 2**12
Example 1
Input
matrix = [
    [2, 3],
    [5, 7]
]
Output
[
    [2, 5],
    [7, 17]
]

**/

// CODE

vector<vector<int>> solve(vector<vector<int>>& matrix) {
    if(matrix.size()==0 || matrix[0].size() == 0) return matrix;
    int m = matrix.size();
    int n = matrix[0].size();
    cout<<m<<" "<<n;
    vector<vector<int>> newMatrix(m, vector<int>(n));

    newMatrix[0][0] = matrix[0][0];
    for (int i = 1; i < n; i++) 
        newMatrix[0][i] = newMatrix[0][i-1] + matrix[0][i];
    
    for (int i = 1; i < m; i++) 
        newMatrix[i][0] = newMatrix[i-1][0] + matrix[i][0];

    for(int i=1; i< m; i++) {
        for(int j=1; j<n; j++) {
            newMatrix[i][j] = matrix[i][j] + newMatrix[i-1][j] + newMatrix[i][j-1] - newMatrix[i-1][j-1];
        }
    }
    return newMatrix;
    }

// Space Optimization

vector<vector<int>> solve(vector<vector<int>>& matrix) {
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[0].size(); j++) {
            if (j != 0) {
                matrix[i][j] += matrix[i][j - 1];
            }
        }
        for (int j = 0; j < matrix[0].size(); j++) {
            if (i != 0) {
                matrix[i][j] += matrix[i - 1][j];
            }
        }
    }

    return matrix;
}
