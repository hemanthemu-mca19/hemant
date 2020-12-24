
#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    //code goes here
    int n;
    cin >> n;
    int n1, n2, ans =0;
    cin >> n1;
    for(int i=0; i< n-1; i++) {
        cin >> n2;
        if(n1 > n2) {
            ans += (n1-n2);
            n2 = n1;
        }
        n1 = n2;
    }
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


