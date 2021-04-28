int solve(string s) {
   unordered_map<char, int> mp;
    int n = s.size(), i=0;
    for(i=0; i<n; i++){
        if(mp.find(s[i])!=mp.end()) return i;
        else mp.insert({s[i], 1}); 
    }
    return -1;
}
