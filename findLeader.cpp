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
        {
            cin >> x;
            arr[i] = x;
        }

        vector<int> leader;
        for (int i = 0; i < n-1; i++)
        {
            if(arr[i] >= arr[i+1])
                leader.push_back(arr[i]);
        }
        leader.push_back(arr[n-1]);
        int l = leader.size();
        
        vector<int>::iterator it;

    for (it = leader.end() - 1; it >= leader.begin(); it--)
        cout << *it << " ";
    cout << endl;
    }
    return 0;
}