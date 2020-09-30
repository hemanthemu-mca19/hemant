#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t;
    cin>> t;
    while(t--){
      string str;
      cin>> str;
      int n = str.length(), vowel = 0;
      for(int i=0; i<n; i++)
      {
        if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
          vowel++;
      }
      cout << vowel << " " << n-vowel << endl;
    }
    
    return 0;
  }
