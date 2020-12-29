
#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    //code goes here
    string str;
    cin >> str;
    int len = str.length();
    int ans = 1;
    if(len==1) {
        cout<< ans;
        return ;
    }
    int cnt = 1;
    for(int i=1; i<len; i++)
    {
       if (str[i] == str[i-1]) cnt++;
       else {
           ans = max(cnt, ans);
           cnt = 1;
       }
    }
    ans = max(cnt, ans);
    cout << ans;
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
    int t=1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}


