#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    //code goes here
    int n, x, total =0;
    cin >> n;
    vector<int> nums;
    for(int i=0; i<n; i++){
        cin >> x;
        nums.push_back(x);
        total += x;
    }
    int ans = INT_MAX;
    for(int i=0; i<(1<<n); i++){
            int currSum = 0;

        for(int j=0; j<n; j++){
            if(i & (1<<j)) currSum += nums[j];
        }
        ans = min(ans, abs(total - currSum - currSum));
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
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
