bool solve(int n) {
    map<int, int> mp;
    int sum =n;
    for(int i=0; i<INT_MAX; i++){
        n = sum;
        sum =0;
        while(n>0){
            int r = n%10;
            sum += r*r;
            n /=10;
        }
        if(sum ==1) return true;
        else{
            if(mp.find(sum) != mp.end()) return false;
            mp.insert({i, sum});
        }
    }
    return true;
}
