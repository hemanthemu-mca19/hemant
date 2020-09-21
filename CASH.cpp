#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long int n, k;
		cin >> n >> k;
		int arr[n];
		long long int sum = 0;
		for(long long int i = 0; i < n; i++){
			cin >> arr[i];
			sum += arr[i];
		}
		int r = sum % k;
		cout << r << endl;
	}
	return 0;
}
