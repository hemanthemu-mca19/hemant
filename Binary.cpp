#include <bits/stdc++.h>
  using namespace std;
  
  void binary(int n, int k, int arr[])
  {
    if(k == n){
      for(int i =0; i<n; i++)
        cout << arr[i];
      cout << endl;
    return;
    }
      if(arr[k-1] == 0){
        arr[k] = 0;
        binary(n, k+1, arr);
        arr[k] = 1;
        binary(n, k+1, arr);
    }
      else{
        arr[k] = 0;
        binary(n, k+1, arr);
	}
  }
  int main()
  {
    int t;
    cin >> t;
    while(t--)
    {
      int n;
      cin >> n;
      int arr[n], k = 1;
      arr[0] = 0;
      binary(n, k ,arr);
      arr[0] = 1;
      binary(n, k ,arr);
      cout << endl;
    }
    
    return 0;
  }
