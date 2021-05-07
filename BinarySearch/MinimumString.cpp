int solve(string s, string t) {
    vector<int> cnt(26,0);
    int sum=0;
    for(auto x : s){
        cnt[x-'a']++;
    }
    for(auto x : t){
        cnt[x-'a']--;
    }
    for(auto x:cnt){
        if(x>0) sum +=x;
    }
    return sum;
}
