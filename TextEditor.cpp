string solve(string s) {
    int n = s.size();
    stack<char> st;
    for(int i=0; i<n; i++) {
        if(s[i] == '<' and s[i+1]=='-') {
            if(!st.empty()){
                st.pop();
            }
            i++;
        }
        else st.push(s[i]);
    }
    string s1 = "";
    while(!st.empty()) s1 += st.top(), st.pop();
    reverse(s1.begin(), s1.end());
    return s1;
}
