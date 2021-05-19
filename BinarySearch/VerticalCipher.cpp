// https://binarysearch.com/problems/Vertical-Cipher

/**

Vertical Cipher
Given a string s and an integer k, rearrange s into k rows so that s can be read vertically (top-down, left to right).

Constraints

n ≤ 10,000 where n is the length of s
k ≤ 1,000
Example 1
Input
s = "abcdefghi"
k = 5
Output
["af", "bg", "ch", "di", "e"]
Explanation
This reads vertically as:

["af",
 "bg",
 "ch",
 "di",
 "e"]
**/

//  CODE

vector<string> solve(string s, int k) {
    int n = s.size();
    vector<string> VC;
    if(n==0) return VC;
    for(int i=0; i<k; i++){
        string str = "";
        for(int j=i; j<n; j +=k){
            str += s[j];
        }
        VC.push_back(str);
    }
    return VC;
}
