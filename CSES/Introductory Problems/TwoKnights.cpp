
#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    //code goes here
    int n;
    cin >> n;
    for(int i =1; i<=n; i++)
    {
        int sq_i = i*i;
        int total = sq_i * (sq_i -1)/2;
        int attack = 2*2*(i-1)*(i-2);
        int ans = total - attack;
        cout << ans << endl;
    }
    
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
