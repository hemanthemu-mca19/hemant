#include<bits/stdc++.h>
using namespace std;
#define int long long
int mod = 1e9+7;
vector<int> dp(1000001);

int diceCombinations(int n){
	dp[0] = 1;
	for(int i=1; i<=n; i++) {
		for(int j =1; j<=6; j++){
			if(i-j >=0)	dp[i] += dp[i-j];
	    }
	    dp[i] = dp[i]%mod;
	}
	return dp[n];
}
void solve(){
    //code goes here
    int n; cin>>n;
    cout << diceCombinations(n) << endl;
    
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
ios_base::sync_with_stdio(false);
cout.tie(NULL);
cin.tie(NULL);
    int t=1;
    //cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
