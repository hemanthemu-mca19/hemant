bool solve(string s0, string s1) {
    if(s0.size()!=s1.size()) return false;
    vector<int> count(26, 0);
    for(int i=0; i<s0.size(); i++) {
        int c0 = s0[i]-'a';
        int c1 = s1[i]-'a';
        count[c0]++, count[c1]--;
    }
    for(auto val: count){
        if(val != 0) return false;
    }
    return true;
}
