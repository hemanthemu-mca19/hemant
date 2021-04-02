class Solution {
public:
    int dp[102][102][602]; //dp[StrArraySize][0/1]
    int arr[602][2];
    
    int solve(int m, int n, int N) {
        if(N==-1) return 0;
        if(m==0 && n==0) return 0;
        
        if(dp[m][n][N] != -1)  return dp[m][n][N];
        
        if(m>=arr[N][0] && n>=arr[N][1])
            return dp[m][n][N] = max(solve(m, n, N-1), 1+solve(m-arr[N][0], n-arr[N][1], N-1));
        else
            return dp[m][n][N] = solve(m, n, N-1);
    }
    
    int findMaxForm(vector<string>& strs, int m, int n) {
        int N = strs.size();
        for(int i=0; i<N; i++) {
            int zeros = count(strs[i].begin(), strs[i].end(), '0');
            int ones = strs[i].size() - zeros;
            arr[i][0] = zeros;
            arr[i][1] = ones;
        }
        //for(int i=0; i<N; i++) cout << arr[i][0] << " " << arr[i][1] << endl;
        memset(dp, -1, sizeof(dp));
        int ans = solve(m, n, N-1);
        // for(int i=0; i<=m; i++) {
        //     for(int j=0; j<=n; j++) {
        //         for(int k=0; k<N; k++)
        //             cout << dp[i][j][k] << " ";
        //     }
        //     cout << endl;
        // }
        return ans;
    }
};
