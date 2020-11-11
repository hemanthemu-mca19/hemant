#include <bits/stdc++.h>
#define int long long
#define TT int tt; cin >>tt; while(tt--)
  using namespace std;
  
  signed main()
  {
    TT
    {
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);

		string s,t;
		cin >> s >> t;
		int s1, t1;
		int flag = -1;
		s1 = s.length();
		t1 = t.length();
		cout << "s1: " << s1 << endl;
		cout << "t1: " << t1 << endl;
		int j = 0;
		for (int i = 0; i < s1; ++i)
		{
			if( s1 < t1)
			{
				flag = 0;
				break;
			}
			if(s[i] == t[j] and j < t1)
			{
				i++;
				j++;
			}
			else
			{
				if(s[i] == '+' and t[j] == '-')
				{
					if(t[j+1] == '-')
					{
						j += 2;
						i += 1;
					}	
					else
					{
						flag = 0;
						break;
					}
				}
				else
				{
					flag = 0;
					break;
				}
								
			}
			if(flag == -1)	cout << "Yes";
			else cout << "No";
			cout << endl;
			

		}

    }
    return 0;
  }

  /* TEST CASES:
	s = -+--+  sPlus = 2
	t = -+++	tPlus = 3   diff = 1
--------
-+--+-
--
---
+++
+++
  */
