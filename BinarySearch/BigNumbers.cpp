int solve(vector<vector<int>>& mat) {
    int n = mat.size(), m = mat[0].size();
    vector<int> row(n, INT_MIN), col(m, INT_MIN);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            row[i] = max(row[i], mat[i][j]);
            col[j] = max(col[j], mat[i][j]);
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (row[i] == col[j] and row[i] == mat[i][j]) ans++;
        }
    }
    return ans;
}
