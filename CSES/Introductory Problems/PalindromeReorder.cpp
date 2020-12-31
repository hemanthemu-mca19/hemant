#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    //code goes here
   string str;
   cin >> str;
   int n = str.length();
   vector<int> count(26,0);
   for(int i=0; i <n; i++){
       int idx = str[i] - 'A';
       count[idx] +=1;
   }
   int check = 0;
   for(int i=0; i <26; i++){
       if((count[i]%2) == 1)    check++;
   }
  if(check > 1) {
      cout << "NO SOLUTION"<< endl;
      return ;
  }
  
   //organize the palindrome
    string result;
    for (int i = 0; i < 26; i++){
        if(!(count[i]%2)){
            for(int j = 0; j < count[i]/2; j++) result.push_back(i + 'A');
        }
    }
    for (int i = 0; i < 26; i++){
        if(count[i]%2){
            for(int j = 0; j < count[i]; j++) result.push_back(i + 'A');
        }
    }
    for (int i = 25; i >= 0; i--){
        if(!(count[i]%2)){
            for(int j = 0; j < count[i]/2; j++) result.push_back(i + 'A');
        }
    }
 
    cout << result << endl;
}

int32_t main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
ios_base::sync_with_stdio(false);
cout.tie(NULL);
cin.tie(NULL);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
