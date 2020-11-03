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
      int sortedArr[n];
      for(int i=0; i<n; i++)
        cin >> sortedArr[i];
      
      int j = n-1;
      int count = 0;
      for(int i=0; i!=j; i++)
      {
        if(count%2 == 0)
        {
          cout << sortedArr[j] << " ";
          j--;
          i--;
          count++;
        }
        else
        {
          cout << sortedArr[i] << " ";
          count++;
        }
      }
      cout <<sortedArr[j] << endl;
        
      }
    return 0;
  }
