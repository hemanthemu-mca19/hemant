#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t;
    cin >> t;
    while(t--)
    {
      int n;
      cin >> n;
      int rent[n];
      for(int i =0; i<n; i++)
        cin >> rent[i];
      
      int prev, next, count = 0;
      for( int i = 0; i<n; i++)
      {
        prev = i-1;
        next = i+1;
        if(i == 0 and rent[i] > rent[next])
          {
            cout << i << " ";
            count++;
          }
        
        else if (i == n-1 and rent[i] > rent[prev])
          {
            cout << i << " ";
            count++;
          }
        
        else if (rent[i] > rent[next] and rent[i] > rent[prev])
          {
            cout << i << " ";
            count++;
          }
        else
          continue;
      }
      
      if(count == 0)
        cout << "-1";
      cout << endl;
    }
    return 0;
  }