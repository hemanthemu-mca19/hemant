#include <bits/stdc++.h>
    using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin >> n;
        int primes[n+1];
        primes[1]= 0;
        primes[0] = 0;
        for (int i=2; i < n+1; i++)
            primes[i] = 1;

        for (int i = 2; i <= sqrt(n); i++)
        {
            if(primes[i] == 1){
                for (int j = i*i; j < n+1; j = j + i)
                {
                    primes[j] = 0;
                }
                
            }
        }

        for (int i = 2; i < n; i++)
        {
            if(primes[i] == 1){
                cout<< i << ", ";
            }
        }
        
         cout << endl;   
    }
    return 0;
}           