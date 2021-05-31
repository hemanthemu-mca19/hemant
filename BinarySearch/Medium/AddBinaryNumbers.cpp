//  https://binarysearch.com/problems/Add-Binary-Numbers

/**
Add Binary Numbers
Given two strings a and b that represent binary numbers, add them and return their sum, also as a string.

The input strings are guaranteed to be non-empty and contain only 1s and 0s.

Constraints

n ≤ 100,000 where n is the length of a
m ≤ 100,000 where m is the length of b
Example 1
Input
a = "1"
b = "1"
Output
"10"
Example 2
Input
a = "111"
b = "1"
Output
"1000"

**/

// CODE
string solve(string a, string b) {
    string ans = "";
    int m = a.size(), n = b.size();
    if(m<n) swap(b,a);
    m = a.size(), n = b.size();
    int i = n-1, j = m-1;
    int carry = 0;
    while(i>=0){
        int x = (a[j] - '0') + (b[i] - '0') + carry;
        carry = x/2;
        if(x%2 == 1) ans = '1' +ans;
        else ans = '0' + ans;
        i--, j--;
    }
    while( j >= 0){
        int x = (a[j] - '0') + carry;
        carry = x/2;
        x %= 2;
        if(x == 1) ans = '1' +ans;
        else ans = '0' + ans;
        j--;
    }
    if(carry == 1) ans = "1" + ans;
    i =0;
    while(ans[i] == '0' and  i < ans.size()) i++;
    if(i == ans.size()) ans = "0";
    else ans = ans.substr(i);
    return ans;
}
