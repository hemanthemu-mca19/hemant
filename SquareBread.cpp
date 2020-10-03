#include <bits/stdc++.h>
  using namespace std;
  
  int gcd(int l, int b)
  {
    if(l==0 || b==0)
      return 3000;
    if(l%b == 0)
      return b;
      
    gcd(b, l%b);
  }
  
  int main()
  {
    int t;
    cin>> t;
    while(t--){
      int l, b;
      cin>> l >> b;
      int g = gcd(l,b);
      cout << l*b/(g*g) << endl;
    }
    
    return 0;
  }
