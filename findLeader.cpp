#include <bits/stdc++.h>
    using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin>> arr[i];

        int Rmax = arr[n-1];
        cout << Rmax << " ";
        for(int i = n-1; i > 0; i--){
            if(arr[i-1] >= Rmax){
                Rmax=arr[i-1];
                cout<<Rmax<<" ";
            }
          }
        }
        cout << endl;
    return 0;
}