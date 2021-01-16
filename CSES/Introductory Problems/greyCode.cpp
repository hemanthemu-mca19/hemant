#include<bits/stdc++.h>
using namespace std;

int main(){
    int t=1;
    //cin>> t;
    while(t--){
        int n;
        cin>> n;
        vector<string> v;
        v.push_back("0");
        v.push_back("1");
        if(n <= 0) {
            cout << v[0] <<endl;
            return 0;
        }
        if(n == 1) {
            cout << v[0] <<endl;
            cout << v[1] <<endl;
            return 0;
        }
        for(int i=2; i<(1<<n); i <<= 1){
            for(int j=i-1; j>=0; j--){
                v.push_back(v[j]);
            }
            
            for(int k=0; k<i; k++){
                v[k] = "0" + v[k];
            }
            for(int k=i; k<(i<<1); k++){
                v[k] = "1" + v[k];
            }
        }
        
        for(int i=0; i<v.size(); i++){
            cout << v.at(i) << endl;
        }
    }
    return 0; 
}
