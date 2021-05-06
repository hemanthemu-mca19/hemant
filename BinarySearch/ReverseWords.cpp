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

//Space Optimised 
string solve(string sentence) {
    int N = sentence.size();
    for (int i = 0, j = 0; i < N;) {
        while (i < N && isspace(sentence[i])) i++;
        if (i >= N) break;
        for (j = i; j < N && !isspace(sentence[j]); j++)
            ;
        reverse(sentence.begin() + i, sentence.begin() + j);
        i = j;
    }
    reverse(sentence.begin(), sentence.end());
    return sentence;
}
