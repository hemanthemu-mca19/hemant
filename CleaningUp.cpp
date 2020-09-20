#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, n, m, k;
	cin >> t;
	while(t--){
		cin >> n >> m;
		int jobs[n+1] = {0};
		
		for(int i = 1; i <= m; i++){
			cin >> k;
			jobs[k] = 1;
		}
		
		int finaljobs[n-m+1] = {0};
		int j = 0;
		for(int i = 1; i <= n+1; i++){
			if(jobs[i] == 0){
				finaljobs[j] = i;
				j++;
			}
		}
		for(int i = 0; i < n-m; i += 2)
			cout << finaljobs[i] << " ";
		cout << endl;
		
		for(int i = 1; i < n-m; i += 2)
			cout << finaljobs[i] << " ";
		cout << endl;
		
	}
	return 0;
}