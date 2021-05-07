string solve(string s) {
    int n = s.size();
    string st = "";
    for(int i=0; i<n; i++) {
        if(i+1 < s.size() && s[i] == '<' and s[i+1]=='-') {
            if(st.size()){
                st.pop_back();
            }
            i++;
        }
        else st += s[i];
    }
    return st;
}
