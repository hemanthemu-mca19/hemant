#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
int dp[1001][1001];

int gridPaths(int n) {
	for(int i=n; i>=1; i--){
		for(int j=n; j>=1; j--){
			if (dp[i][j] == 1) {
		  	dp[i][j] = 0;
		  	continue;
 		  }
		  if(i==n and j==n) dp[i][j] = 1;
		  else{
		  	int op1 = (j==n) ? 0 : dp[i][j+1];
		  	int op2 = (i==n) ? 0 : dp[i+1][j];
		  	dp[i][j] = (op1 + op2) % mod;
		  }	
		}
	}
	return dp[1][1];
}
	
int main() {
	int n;
	cin >> n;
	char ch;
	for(int i=1; i<=n; i++)
		for(int j=1; j<=n; j++){
			cin >> ch;
			if(ch=='.') dp[i][j] = 0;
			else dp[i][j] = 1;
		}

	cout << gridPaths(n) << endl;
	return 0;
}
