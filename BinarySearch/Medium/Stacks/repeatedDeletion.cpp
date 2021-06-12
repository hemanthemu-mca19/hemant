// https://binarysearch.com/problems/Repeated-Deletion

/**

Repeated Deletion
Medium

Given a string s, repeatedly delete the earliest consecutive duplicate characters.

Constraints

n ≤ 100,000 where n is the length of s.
Example 1
Input
s = "abbbaac"
Output
"c"
Explanation
"bbb" are the earliest consecutive duplicate characters which gets deleted. So we have "aaac".
"aaa" then gets deleted to end up with "c".

**/

// CODE

string solve(string s) {
    int n = s.size();
    if(n==0 || n==1) return s;
    stack<char> st;
    int flag = 0, j=0;
    while(j<n){
        if(!st.empty() and  s[j] == st.top()) {
            flag = 1;
            j++;
        }
        else if (!st.empty() and flag == 1) {
            st.pop();
            flag = 0;
        }
        else {
            st.push(s[j]);
            j++;
        }

    }
    if (!st.empty() and flag == 1) {
            st.pop();
            flag = 0;
    }
    string ans = "";
    while(!st.empty()){
        ans = st.top() + ans;
        st.pop();
    }
    return ans;
}
