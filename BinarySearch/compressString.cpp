//O(n) Approach and O(n)Space
string solve(string s) {
    string s1 = "";
    s1 += s[0];
    for(int i=1; i<s.size(); i++) {
        if(s[i]!=s[i-1]) s1 +=s[i];
    }
    return s1;
}

//O(n) Approach and O(1) Space
string solve(string s) {
    int j=1;
    for(int i=1; i<s.size(); i++) {
        if(s[i]!=s[i-1]) s[j++] = s[i];
    }
    return s.substr(0,j);
}
