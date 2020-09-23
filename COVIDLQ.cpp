#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, v;
		cin >> n;
		int arr[n];
		int j = 0;
		for(int i = 0; i < n; i++){
			cin >> v;
			if(v == 1)
				arr[j++] = i;
		}
		
		int flag = 0;
	
		for(int i = j-1; i >= 1; i--){
			if(arr[i] - arr[i-1] < 6){
				flag = 1;
				break;
			}

		}
		if(flag == 1)
			cout << "NO" << endl;
		else
		{
				cout << "YES" << endl;
		}
		
		
	}

	return 0;
}
