#include <bits/stdc++.h>

using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		int arr[129], visited[256] = {0};
		arr[1] = 0;
			
		for(int i = 2; i <= 129; i++){
			if(visited[arr[i-1]] != 0){
				arr[i] = (i-1) - (visited[arr[i-1]]);
				
			}
			else{
				arr[i] = 0;
					
			}
			visited [arr[i-1]] = i-1;	
		}	
		
		int K, count = 0;
		cout << "\nenter any index (less than 128): ";
		cin >> K;
		
		for(int i = 1; i <= K; i++){
			if(arr[i] == arr[K])
				count++;
		}
		cout << count << endl;
	}
	
	return 0;
}
