#include <bits/stdc++.h>
#define int long long
  using namespace std;
#define TT int tt; cin >>tt; while(tt--)
  
  
  signed main()
  {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    
    TT 
    {
      int flag = 0;
      string tcard;
      string pcard;
      cin >> tcard;
      for(int i = 1; i<6; i++)
      {
        cin>>pcard;
        if(tcard[0] == pcard[0] || tcard[1] == pcard[1])
        {
          flag = 1;
        }
        else 
          continue;
      }
      
      if(flag == 0) cout << "NO" << endl;
      else cout << "YES" << endl;
      //flag = 0;
        
    }
    
    return 0;
  }
