#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t;
    scanf("%d", &t);
    while(t--)
    {
      int n, k;
      scanf("%d", &n);
      int arr[n];
      for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
      scanf("%d", &k);
      int ind1 = -1,ind2 = -1;
      int i =0;
      int j = n-1;
      int flag = -1;
      while(i < j)
      {
        if((arr[i] + arr[j]) == k)
        {  
          ind1 = i;
          ind2 = j;
          i++;
          flag = 0;
          break;
        }
        else if (arr[i] + arr[j] > k)
        {  
          j--;
        }
        else
          i++;
        
      }
      
      //for(auto it:res)
      if(flag == -1) cout << "no answer";
      else  cout << ind1 << " " << ind2 ;
      cout << endl;
    }
    
    return 0;
  }