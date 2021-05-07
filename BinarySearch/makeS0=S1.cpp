class Solution {
public:
    int minDistance(string s0, string s1) {
        int n0 = s0.size(), n1 = s1.size();
        vector<vector<int>> lps(n0+1, vector<int> (n1+1, 0));
        
        for(int i=0; i<n0; i++) lps[i][0];
        
        for(int i=0; i<n1; i++) lps[0][i];
        
        for(int i=0; i<n0; i++) {
            for(int j=0; j<n1; j++){
                if(s0[i] == s1[j]) lps[i+1][j+1] = 1+lps[i][j];
                else lps[i+1][j+1] = max(lps[i+1][j], lps[i][j+1]);
            }
        }
        int mx = lps[n0][n1];
        return (n0-mx)+n1-mx;
    }
};
