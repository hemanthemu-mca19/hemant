int solve(int x, int y) {
    int xny = x ^ y;
    int cnt=0;
    while(xny >  0){
        if(xny & 1) cnt++;
        xny >>= 1;
    }
    return cnt;
}
