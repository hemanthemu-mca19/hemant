/*
Tina is given a string S which contains the first letter of all the student names in her class.
She got a curiosity to check how many people have their names starting from the same alphabet. 
So given a string S, she decided to write a code that finds out the count of characters that
occur more than once in the string.

*/

#include <bits/stdc++.h>
#define int long long
#define TT int tt; cin >>tt; while(tt--)
  using namespace std;
  
  signed main()
  {
    TT
    {
		int flag = 0;
    	string s;
    	cin >> s;
    	int alphabet[26];
    	for (int i = 0; i < 26; i++)
	    	alphabet[i] = 0;
	    for (int i = 0; i < s.length(); i++)
		{
			int index = s[i] - 'a';
			//cout << index << endl;
	    	alphabet[index] += 1;
		}
	    for (int i = 0; i < 26; i++)
	    {
	    	if (alphabet[i] > 1)
			{	
				flag =1;
				char c;
				c = i + 97;
		    	cout << c << "=" << alphabet[i] << " ";
			}
	    }
		if (flag == 0) cout << "-1";
    	cout << endl;
    }

    
    return 0;
  }