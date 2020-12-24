
#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    //code goes here
    int n;
    cin >> n;
    if (n==1){
        cout<< 1;
        return ;
    }
    if(n < 4) {
        cout << "NO SOLUTION";
        return ;
    }
    int odd =1, even =2;
    while(even <= n){
        cout << even << " ";
        even += 2;
    }
    while(odd <= n){
        cout << odd << " ";
        odd += 2;
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


