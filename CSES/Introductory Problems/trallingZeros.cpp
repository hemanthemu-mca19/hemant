#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    //code goes here
    int n;
    cin >> n;
   int sum = 0;
   while(n >= 5){
       sum += n/5;
       n /= 5;
   }
   cout << sum;
    
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
