#include <bits/stdc++.h>
    using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int r1, r2;
        cin>> r1 >> r2;
        long long int diff = abs(r1 - r2);
        int count = 0;
        for (long long int i = 1; i <= sqrt(diff); i++)
        {
            if(diff % i == 0)
            {
                if(diff / i == i)
                    count++;
                else count += 2;
            }
        }
        cout << count << endl;
    }
    return 0;
}