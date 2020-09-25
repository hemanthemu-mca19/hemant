#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

bool shuffle(int arr[], int n, int k){
	for(int i = 0; i < k; k++){
		int A[n/k+1];
		int l = 0;
		for(int j = 0; j < n; j+k){
			A[l] = arr[j];
			l++;
		}
		sort(A, A + sizeof(A) );
		for(int j = 0; j < n; j+k){
			arr[j] = A[sizeof(A)/sizeof(A[i])];
		}
	}
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	return 1;
}

int main(){
	int t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int arr[n];
		for (int i = 0; i < n; i++){
			cin >> arr[i];
		}
		
		bool b = shuffle(arr, n, k);
		if (b){
			cout << "yes";
		}
		else{
			cout << "no";
		}
	}
	return 0;	
}
