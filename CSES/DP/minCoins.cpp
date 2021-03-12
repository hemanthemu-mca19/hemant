#include<bits/stdc++.h>
	using namespace std;
	
	int minCoins(vector<int> coins, int n, int sum) {
		vector<int> dp(1000001, 1000000001);
		
		for(int i=0; i<n; i++) {
			dp[coins[i]] = 1;
		}
		
		for(int i=1; i<=sum; i++) {
			for(int j=0; j<n; j++) {
				if(i-coins[j] > 0)
					dp[i] = min(dp[i], dp[i-coins[j]]+1);
			}
		}
		return (dp[sum] == 1000000001 ? -1 : dp[sum]);
	}
	
	int main() {
		int n, sum;
		cin >> n >> sum;
		
		vector<int> coins(n);
		
		for(int i=0; i<n; i++)
			cin>>coins[i];
		
		cout<< minCoins(coins, n, sum);
		
		return 0;
		}
