/**   **/

class NumMatrix {
public:
    vector<vector<int>> T;
    NumMatrix(vector<vector<int>>& matrix) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int m = matrix.size(), n= matrix[0].size();
        T.resize(m+1, vector<int> (n+1));
        for(int i =0; i<=m; i++)    T[i][0] = 0;
        for(int j =0; j<=n; j++)    T[0][j] = 0;
        for(int i=1; i<=m; i++) {
            for(int j=1; j<=n; j++) {
                T[i][j] = matrix[i-1][j-1] + T[i-1][j] + T[i][j-1] - T[i-1][j-1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
            ios_base::sync_with_stdio(false);
            cin.tie(NULL);
            cout.tie(NULL);
            return (T[row2+1][col2+1]-T[row1][col2+1]-T[row2+1][col1]+T[row1][col1]);
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */

/**

Given a 2D matrix matrix, handle multiple queries of the following type:

Calculate the sum of the elements of matrix inside the rectangle defined by its upper left corner (row1, col1) and lower right corner (row2, col2).
Implement the NumMatrix class:

NumMatrix(int[][] matrix) Initializes the object with the integer matrix matrix.
int sumRegion(int row1, int col1, int row2, int col2) Returns the sum of the elements of matrix inside the rectangle defined by its upper left corner (row1, col1) and 
lower right corner (row2, col2).
 

**/
