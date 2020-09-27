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
        char arr[10];
        for(int i = 0; i < 10; i++){
            arr[i] =  str[i];
        }
        for(int j = 0; j < n-1; j++){
            string str1;
            cin>> str1;
            for(int k = 0; k < 10; k++){
                if(arr[k] == '1' && str1[k] == '1')
                    arr[k] = '0';
                else if(arr[k] == '0' && str1[k] == '1')
                    arr[k] = '1';
            }
        }

        int count = 0;
        for(int i = 0; i < 10; i++){
            if(arr[i] == '1')
                count++;
        }
        cout << count << endl;

    }

    return 0;
}