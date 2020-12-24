
#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    //code goes here
    int y, x;
    cin >> y >> x;
    int ans = 1;
    if(x >= y){
        if(x%2 != 0){
            ans = x*x - y +1;
        }
        else{
            ans = (x-1)*(x-1) +y;
        }
    }
    else{
        if(y%2 == 0){
            ans = y*y -x +1;
        }
        else{
            ans = (y-1)*(y-1) +x;
        }
    }
    cout << ans << endl;
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
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
