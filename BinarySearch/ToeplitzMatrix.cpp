bool solve(vector<vector<int>>& matrix) {
    int n= matrix[0].size(), m = matrix.size();
    for(int i=1; i<n; i++)
        for(int j=1; j<m; j++) 
            if(matrix[j][i] != matrix[j-1][i-1]) return false;
    return true;
}
