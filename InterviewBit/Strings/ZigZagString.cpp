// https://www.interviewbit.com/problems/zigzag-string/

/**

Zigzag String
Asked in:  
Paypal
The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P.......A........H.......N
..A..P....L....S....I...I....G
....Y.........I........R
And then read line by line: PAHNAPLSIIGYIR
Write the code that will take a string and make this conversion given a number of rows:

string convert(string text, int nRows);
convert("PAYPALISHIRING", 3) should return "PAHNAPLSIIGYIR"
**Example 2 : **
ABCD, 2 can be written as

A....C
...B....D
and hence the answer would be ACBD.

**/

// CODE

string Solution::convert(string A, int B) {
    int n = A.size();
    if(n==0 || n==1 || B==1) return A;
    vector<string> ans(B);
    int dir = 1, k=0;
    for(int i=0; i<n; i++){
        ans[k] += A[i];
        if(k==0) dir =1;
        if(k==B-1) dir = -1;
        k += dir;
    }
    string result = "";
    for(auto x : ans) result += x;
    return result;
}
