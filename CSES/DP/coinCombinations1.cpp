#include<bits/stdc++.h>
#define mod  1000000007
using namespace std;
 
int coinCombinations(int n, vector<int> &coins, int sum, vector<int> &dp) {
    if(sum == 0) return 1;
    if(dp[sum] != -1) return dp[sum];
    dp[sum] = 0;
    for(int i=0; i<n; i++) {
        if(sum>=coins[i]) dp[sum] = (dp[sum] + coinCombinations(n, coins, sum-coins[i],dp)) %mod;
    }
    return dp[sum];
}
int main() {
    int n, sum;
    cin >> n >> sum;
    vector<int> coins(n);
    for(int i=0; i<n; i++)  cin >> coins[i];
    vector<int> dp(sum+1,-1);
    cout << coinCombinations(n, coins, sum, dp);
    return 0;
}
