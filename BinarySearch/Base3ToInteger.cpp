/** https://binarysearch.com/problems/Base-3-to-Integer **/

int solve(string s) {
    int x =0;
    for(int i=0; i<s.size(); i++){
        x = 3*x + (s[i]-'0');
    }
    return x;
}
