bool solve(string s) {
    int i=0, j=s.size()-1;
    while(i<j){
        while(!islower(s[i]) && i<s.size()) i++;
        while(!islower(s[j]) && j>0) j--;
        if(islower(s[i]) && islower(s[j]) && s[i] != s[j]) return false;
        i++, j--;
    }
    return true;
}
