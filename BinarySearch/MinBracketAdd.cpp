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
