/*
Tina has a string S. 
She really likes the letter a. She calls a string good if strictly more than half of the characters in that string are a's. 
For example "aaacb", "acaa" are good strings, and "baba", "abbba"," "(empty string) are not.
Tina can erase some characters from her string S. 
She would like to know what is the length of the longest string remaining after erasing some characters (possibly zero) to get a good string. 
It is guaranteed that the string has at least one a in it, so the answer always exists.
*/

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
		int aCount = 0, len = s.length();
		for (int i = 0; i < len; i++)
		{
			if(s[i] == 'a')
				aCount++;
			else
				continue;
		}
		int mid = len/2;
		if(aCount > mid)
			cout << len;
		else
			cout << (2*aCount)-1;
		cout << endl;
    }

    return 0;
  }