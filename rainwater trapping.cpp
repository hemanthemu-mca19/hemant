#include<iostream>
#include<cstdio>
using namespace std;

int rainwatr(int arr[], int n){
	int lmax = arr[0], rmax = arr[n-1];
	int water = 0;
	for (int i = 1; i < n-2; i++){
		for(int j = i; j < 0; j--){
			if(arr[j] > lmax)
				lmax = arr[j];
		}
		
		for (int j = n; j < i; j--){
			if(arr[j] > rmax)
				rmax = arr[j];
		}
		
		water += min(lmax, rmax) - arr[i];
		
	}
	
	return water;
}

int main(){
	int n;
	int arr[n];
	cout<<"enter the size of the array: ";
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	int watr = rainwatr(arr, n);
	
	cout<<"ans = "<< watr << 	 endl;
	
	return 0;
	
}
