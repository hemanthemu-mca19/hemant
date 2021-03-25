class Solution {
public:
    bool t[202][10002]; //dp[arraysize][sum]
    
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        for(auto x:nums) sum += x;
        if(sum%2 != 0) return false;
        else {
            t[0][0] = true;
            for(int i=1; i<=n; i++)     t[i][0]=true;
            for(int i=1; i<=sum/2; i++) t[0][i]=false;
            
            for(int i=1; i<=n; i++){
                for(int j=1; j<=sum/2; j++){
                    if(j >= nums[i-1]) t[i][j]=(t[i-1][j] || t[i-1][j-nums[i-1]]);
                    else t[i][j]=t[i-1][j];
                }
            }
        }
        return t[n][sum/2];
    }
};
