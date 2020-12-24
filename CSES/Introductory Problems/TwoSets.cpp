
#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    //code goes here
    int n;
    cin >> n;
    int sum = n*(n+1)/2;
    if(sum%2 !=0){
        cout << "NO" << endl;
        return ;
    }
    
    vector<int> set1, set2;
    if(n%4 ==0){
        for(int i=1; i <= n/4; i++) set1.push_back(i);  // insert first n/4 elements
        for(int i=0; i < n/4; i++) set1.push_back(n-i); // insert last n/4 elements
        for(int i=(n/4)+1; i <= 3*n/4; i++) set2.push_back(i);  //insert rest of the elements
        cout << "YES" << endl;
        cout << set1.size() << endl;
        for(auto &x:set1) cout << x << " ";
        cout<< endl;
        cout << set2.size() << endl;
        for(auto &x:set2) cout << x << " ";
        cout<< endl;
    } else if(n%4 == 3) {
       set1.push_back(1);
       set1.push_back(2);
       set2.push_back(3);
       for(int i=1; i <= n/4; i++) set1.push_back(i+3);  // insert first n/4 elements
        for(int i=0; i < n/4; i++) set1.push_back(n-i); // insert last n/4 elements
        for(int i=((n-3)/4); i < 3*((n-3)/4); i++) set2.push_back(i+4);  //insert rest of the elements
        cout << "YES" << endl;
        cout << set1.size() << endl;
        for(auto &x:set1) cout << x << " ";
        cout<< endl;
        cout << set2.size() << endl;
        for(auto &x:set2) cout << x << " ";
        cout<< endl;
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
