
#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    //code goes here
    int n; cin>>n;
    
    int total = n*(n+1)/2;
    int sum = 0, number;
    for(int i=0; i<n-1; i++){
        cin>> number;
        total -= number;
    }
    cout << total << endl;
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


