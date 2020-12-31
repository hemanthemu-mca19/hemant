#include<bits/stdc++.h>
using namespace std;
#define int long long

int power(int x, int y){
    
    int res = 1;
    int mod = 1000000007; 
    while(y > 0){
        // if(res > mod) res = res%mod;
        if(y & 1)   res = (res*x)%mod;
        
        // y is even now
        y = y>>1;   // y = y/2
        x = (x*x)%mod;   // x = x^2
    }
    return res;
}
void solve(){
    //code goes here
    string x;
    cin >> x;
    sort(x.begin(), x.end());
    vector<string> ans;
    do{
        ans.push_back(x);
    }while(next_permutation(x.begin(), x.end()));
    cout<< ans.size() << endl;
    for (auto i : ans) {
        cout << i << endl;
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
