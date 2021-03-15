#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];

int gridPaths(int i, int j, int n) {
	if (n==1 and dp[1][1] = "*" ) return 0;
	if (n==1 and dp[1][1] = "." ) return 1;
	
	if()
}
	
int main() {
	int n;
	cin >> n;
	for(int i=1; i<=n; i++)
		for(int j=0; j<=n; j++)
			cin >> dp[i][j];
	
	cout << gridPaths(1, 1, n) << endl;
	return 0;
}
