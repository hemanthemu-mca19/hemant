#include <bits/stdc++.h>
#define int long long
#define TT int tt; cin >>tt; while(tt--)
  using namespace std;
  
  signed main()
  {
    TT
    {
		string s;
		cin >> s;
		int len = s.length();
		int lastIndex[256];
		for (int i = 0; i < 256; i++)
			lastIndex[i] = -1;
		int longest = 0, count = 0;
  		int j = 0;
  		for (int i = 0; i < len; i++)
  		{
        int index = s[i];
  			j = max(j, lastIndex[index]+1);
  			longest = max(longest, i-j+1);
  			lastIndex[index] = i;
  		}
		cout << longest << endl;
    }
    return 0;
  }