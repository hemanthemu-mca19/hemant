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
      for(int i=0; i <((n+1)/2); i++)
      {
        if(i==j)
        {
          cout <<sortedArr[j];
          break;
        }
        else
        {
          cout << sortedArr[j] << " " << sortedArr[i] << " ";
          j--;
        }
      }
      cout << endl;
    }
    return 0;
  }