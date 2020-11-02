#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int n;
    cin >> n;
    map<int, pair<int,int>> mp;
    for(int i =0; i <n; i++)
    {
      int temp;
      cin >> temp;
      if(mp.find(temp) == mp.end())
      {
        mp[temp] = {0,i};
      }
      else if (mp[temp].first == 0)
      {
        int d = i - mp[temp].second;
        mp[temp] = {d, i};
      }
      else if (i-mp[temp].second == mp[temp].first)
      {
        mp[temp].second = i;
      }
      else
      {
        mp[temp].second = -1;
      }
    }
    
    int count = 0;
    for(auto it:mp)
    {
      count += (it.second.second != -1 ? 1:0);
    }
    cout << count << endl;
    
    for(auto it:mp)
    {
      if(it.second.second != -1)
      {
        cout << it.first << " " << it.second.first << endl;
      }
    }
    return 0;
  }