/*
We all know Chatur and Rancho from 3 idiots. 
Rancho got Chatur exam paper, but since he is a prankster, he decided to meddle with the words present in the paper. 
He changes all the words in the paper into palindromes.
To do this, he follows two rules:
1. In one operation he can only reduce the value of an alphabet by 1, i.e he can change d to c, 
but he cannot change c to d or d to b.
2. The alphabet a will not be reduced any further. 

Each reduction in the value of any alphabet is counted as a single operation.
Find the minimum number of operations required to convert a given string into a palindrome.

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
		int len = s.length();
		int j = len -1;
		int sum = 0;
		for(int i =0; i <len/2; i++)
		{
			sum += abs((s[i] - 'a' ) - (s[j] - 'a') );
			j--;
			//cout << sum << endl;
		}
		cout << sum << endl;

    }

    
    return 0;
  }