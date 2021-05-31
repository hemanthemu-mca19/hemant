//  https://www.interviewbit.com/problems/reverse-the-string/

/**

Reverse the String
Asked in:  
Qualcomm
Amazon
Microsoft
Cisco
Facebook
Given a string A.

Return the string A after reversing the string word by word.

NOTE:

A sequence of non-space characters constitutes a word.

Your reversed string should not contain leading or trailing spaces, even if it is present in the input string.

If there are multiple spaces between words, reduce them to a single space in the reversed string.



Input Format

The only argument given is string A.
Output Format

Return the string A after reversing the string word by word.
For Example

Input 1:
    A = "the sky is blue"
Output 1:
    "blue is sky the"

Input 2:
    A = "this is ib"
Output 2:
    "ib is this"


**/

// CODE

string Solution::solve(string A) {
    int n = A.size();
    vector<string> words;
    int i = 0;
    string temp = "";
    while(i<n){
        if(A[i]-'a'>=0 and A[i]-'a'<26) temp += A[i];
        else {
            if(temp != "") words.push_back(temp);
            temp = "";
        }
        i++;
    }
    
    if(temp != "") words.push_back(temp);
    // for(auto x:words) cout<<x<<" ";
    string ans = "";
    n = words.size()-1;
    for(int k = n; k>=0; k--){
        ans += words[k];
        ans += " ";
    }
    n = ans.size()-1;
    ans.erase(n);
    return ans;
}
