#include <bits/stdc++.h>
    using namespace std;

long long int power (long long int message, long long int expo, int mod) {
    long long int var =1;
    for(int i =1; i<= expo; i++){
        var *= message;
        var %= mod;
    }
    return var;
}

int main() {
    int p, q;
    cout << "Enter two large prime numbers 'p' & 'q' : ";
    cin >> p >> q;
    long long int n = p*q;
    cout << "Value of n  is: "<< n << endl;
    long long int totient_n = (p-1)*(q-1);
    //cout << "Value of totient_n ((p-1)*(q-1)  is: "<< totient_n << endl;
    //Generates a random number e (1<e<totient_n)
    srand(time(NULL));
    long long int e = rand()%totient_n;
    
    while (__gcd(totient_n,e) !=1)
    {
        srand(time(NULL));
        e = rand()%totient_n;
        while (e == 0 || e == 1) {
        srand(time(NULL));
        e = rand()%totient_n;
    }
    
    }
    cout << "Value of e  is: "<< e << endl;
    //e*d mod totient_n = 1;
    
    long long int d, r;
    for (int i = 1; i < INT_MAX; i++)
    {
       if((1+i*totient_n)%e == 0 && (1+i*totient_n)/e != e) {
        d = (1+i*totient_n)/e;
        cout << "Value of d  is: "<< d << endl;
        break;
       }
    
    }
    int message;
    cout << "Enter message for encryption : ";
    cin >> message;
    long long int cipher = power(message, e, n);
    cout << "Encrypted message:" << cipher <<  endl;

    long long int decipher = power(cipher, d, n);
    cout << "Decrypted message:" << decipher << endl;

return 0; 
}