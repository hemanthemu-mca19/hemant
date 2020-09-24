#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
       string str;
       cin >> str;
       int chanceA = n;
       int chanceB = n;
       int goalA = 0, goalB = 0;
       for(int i = 0 ; i < 2*n; i++){
           if(i%2 == 0){
               goalA += (str[i] - '0');
               chanceA--;
           }
           else{
               goalB += (str[i] - '0');
               chanceB--;
           }
            if(goalA > goalB + chanceB){
                cout << i+1 << endl;
                break;
            }
            else if(goalB> goalA+ chanceA){
                cout << i+1 << endl;
                break;
            }
            else if ( goalA == goalB && i == 2*n-1){
                cout << i+1 << endl;
                break;
            }
 
        }
    }
    return 0;
}
