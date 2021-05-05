int solve(string s0, string s1) {
    if(s0.size()==0 || s1.size()==0) return 0;
    map<string, int> mp;
    string temp = "";
    int i=0;
    int cnt=0;
    while(i<s0.size()) {
        if(s0[i] != ' ') temp += tolower(s0[i]);
        if(s0[i] ==' ' || i == s0.size()-1) {
            mp[temp] = 1;
            temp = "";
        }
        i++;
    }
    i=0;
    while(i<s1.size()) {
        if(s1[i] != ' ') temp += tolower(s1[i]);
        if(s1[i] ==' ' || i == s1.size()-1) {
            if(mp.find(temp) != mp.end()) {
                cnt++;
                mp.erase(temp);
            }
            temp = "";
        }
        i++;
    }
    return abs(cnt);
}
