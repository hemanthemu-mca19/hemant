
#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    //code goes here
    int n; cin>>n;
    cout << n << " ";
    while (n > 1)
    {
        if(n%2 == 0) {
            n /= 2;
            cout << n << " ";
        }
        else {
            n *= 3;
            n++;
            cout << n << " ";
        }
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
    int t=1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}


