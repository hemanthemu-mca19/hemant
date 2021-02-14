#include<bits/stdc++.h>
using namespace std;
 
int ar[1000001];
 
void sieve()
{
    int N = 1000000;
    for(int i=1;i<=N;i++)
    {
        ar[i] = i;
    }
 
    for(int i=2;i<=N;i++)
    {
        if(ar[i] == i)
        {
            for(int j=2*i;j<=N;j+=i)
            {
                ar[j] = min(ar[j] , i);
            }
        }
    }
}
 
 
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(0);
    // cout.tie(0);
 
    int t , n;
    cin>>t;
    int res[t];
    sieve();
 
    for(int i=0;i<t;i++)
    {
        cin>>n , res[i] = n - ar[n];
        // cout<<n - ar[n]<<"\n";
    }
 
    for(int i=0;i<t;i++)
    cout<<res[i]<<'\n';
}
