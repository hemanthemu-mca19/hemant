bool solve(string s) {
    int n= s.length();
    int i=0, j= n-1;
    if(s[i]=='B' && s[j]=='B') return false;
    while(i<n && s[i]!='B'){
        if(s[i] == 'R') return true;
        i++;
    }
    while(j>0 && s[j]!='B'){
        if(s[j] == 'R') return true;
        j--;
    }
    return false;
}
