#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while (t--)
    {
        string str;
        cin>> str;
        int n, count =0;
        n = str.length();
        for(int i = 0; i < n; i++){
            if(str[i] == 'x' && str[i+1] == 'y' || str[i] == 'y' && str[i+1] == 'x'){
                count++;
                i++;
            }
        }
        cout << count <<endl;
    }
    return 0;
}