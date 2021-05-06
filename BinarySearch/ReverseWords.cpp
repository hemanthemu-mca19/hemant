string solve(string s) {
    vector<string> v;
    string temp = "";
    for(int i=0; i<s.size(); i++){
        if(s[i] != ' ') temp +=s[i];
        else {
            v.push_back(temp);
            temp = ' ';
        }
    }
    v.push_back(temp);
    string ans ="";
    for(int i=v.size()-1; i>0; i--){
        ans += v[i];
    }
    ans +=' ';
    ans +=v[0];
    return ans.substr(1, s.size());
}
