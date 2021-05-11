int solve(int n) {
    while (n>=10) {
        int ans = 0;
        while (n>0){
            ans += n%10;
            n /=10;
        }
        n = ans;
    }
    return n;
}
