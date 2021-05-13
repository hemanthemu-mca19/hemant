/** https://binarysearch.com/problems/Largest-Elements-in-Their-Row-and-Column **/

int solve(vector<vector<int>>& matrix) {
    int m = matrix.size(), n = matrix[0].size();
    vector<int> r, c;
    int mx;
    for (int i = 0; i < m; i++) {
        mx = 0;
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 1) mx++;
        }
        r.push_back(mx);
    }
    for (int i = 0; i < n; i++) {
        mx = 0;
        for (int j = 0; j < m; j++) {
            if (matrix[j][i] == 1) mx++;
        }
        c.push_back(mx);
    }
    mx = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 1 and r[i] == 1 and c[j] == 1) mx++;
        }
    }
    return mx;
}
