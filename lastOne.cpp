#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t;
    cin >> t;
    while(t--)
    {
        int n, x;
        cin >> n;
        int arr[n];
        for (long long int i = 0; i < n; i++)
        {
            cin >> x;
            arr[i] = x;
        }
        long long int index = -1;
        for (long long int i = 0; i < n; i++)
        {
            if(arr[i] == 1)
            {
                index = i;
            }
        }
        cout << index << endl;
        
    }
    
    return 0;
  }
