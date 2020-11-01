#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int m, n;
    cin >> m >> n;
    int mat[2*m][n];
    for(int i=0; i<2*m; i++)
    {
        for (int j = 0; j < n; j++)
          cin >> mat[i][j];   
    }

    for(int i=0; i<m; i++)
    {
      for (int j = 0; j < n; j++)
          cout << mat[i][j] + mat[i+m][j] << " "; 
      cout << endl;  
    }
    
    for (int i = 0; i < m; i++)
    { 

      for (int j = 0; j < n; j++)
      {
        int ans = 0;
        for (int k = 0; k < n; k++)
        {
          ans += mat[i][k]*mat[m+k][j];
        }
        cout << ans << " ";
      }
      cout << endl;
      
    }

    return 0;
  }