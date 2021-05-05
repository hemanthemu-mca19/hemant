//O(n) space 
//O(n) time complexity

int solve(string s) {
    stack<char> st;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '(') st.push('(');
        else if(!st.empty()) {
            if(st.top() == '(') st.pop();
            else st.push(')');
        }
        else st.push(s[i]);
    }
    return st.size();
}


// Space Optimised Code O(1) space
int solve(string s) {
    int left =0, stack=0;
    for(auto c: s){
        if(!stack and c==')') left++;
        else if(c=='(') stack++;
        else stack--;
    }
    return stack+left;
}
