/*

Arnab loves brackets and any valid sequence of brackets. 
On his birthday, he expected a valid sequence of brackets from his friends.
He is upset because some of his friends deliberately gifted him an invalid sequence.
Now, Arnab decided to fix the sequence himself by moving only one of the brackets in the sequence.

A bracket sequence (S) is valid only if:
1. S is empty
2. S is equal to "(t)", where t is a valid sequence
3. S is equal to "(t1 t2)" ie. concatenation of t1 and t2, where t1 and t2 are valid sequences.

Arnab, being a lazy person wants you to check if the sequence can be made valid by moving just one bracket (if required).
*/


#include <bits/stdc++.h>
#define int long long
#define TT int tt; cin >>tt; while(tt--)
  using namespace std;
  
  signed main()
  {
    TT
    {
       string str;
       cin >> str;
       int count = 0, flag = -1;
       for (int i = 0; i < str.length(); i++)
        {
        	if(str[i] == ')')
        	{
        		count--;
        		if(count <= -2)
        		{	flag = 0;
        			break;
        		}
        	}
        	else if(str[i] == '(')
        		count++;
        	else
        		continue;

        } 

        if(flag == -1 and count == 0)
        	cout<< "Yes";
        else
        	cout << "No";
        cout << endl;
    }

    
    return 0;
  }
 
 