#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int m, n, k, x;
    cin>> m >> n >> k;

    int matrix[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> x;
            matrix[i][j] = x;
        }
        
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << k * matrix[i][j] << " ";
        }
        cout<< endl;
        
    }
    
    return 0;
  }