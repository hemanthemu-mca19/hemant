/*
And you thought array rotation has no real-life use? 
PrepBud has a password for his locker which he has written on a piece of paper. 
He leaves the paper on the table and goes out for grabbing some food. 
When he comes back he finds that paper is replaced and hence the password is changed. 
He does not remember his password exactly but he tries his best to recall his old password. 
After a long time and lots of effort, he came up with a guess that the original password can be obtained 
by rotating a fake password by 2 places.
Since you are learning programming and you have become a good programmer by now, 
he wants you to write this code to check whether the original password can be obtained 
by rotating a fake password by 2 places.
*/

#include <bits/stdc++.h>
#define int long long
#define TT int tt; cin >>tt; while(tt--)
  using namespace std;
  
  signed main()
  {
    TT
    {
		string fPass, oPass;
		cin >> oPass >> fPass;
    int len = oPass.length();

		string pass1, pass2, left, right;
    
		pass1 = fPass.substr(2,len-2);
    pass2 = fPass.substr(0, len-2);
    left = fPass.substr(0,2);
    right = fPass.substr(len-2, 2);
    string newPass1 = pass1 + left;
    string newPass2 = right + pass2;

		cout << newPass1 << endl;
    cout << newPass2 << endl;
    if(newPass1 == oPass || newPass2 == oPass ) cout << "YES";
    else cout << "NO";
    cout << endl;
    } 
    return 0;
  }

  // string s1;
  //       cin >> s1;
  //       int d =2;
  //       d = s1.length() -d; //right rotation when used
  //       reverse(s1.begin(), s1.begin()+d); 
  //       cout << s1 <<endl;
  //       reverse(s1.begin()+d, s1.end()); 
  //       cout << s1 <<endl;
  //       reverse(s1.begin(), s1.end()); 
  //       cout << s1 <<endl;