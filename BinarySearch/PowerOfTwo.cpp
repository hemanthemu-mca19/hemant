bool solve(int n) {
    if(n==0) return false;
    if (n==1) return true; 
    int x=1;
    for(int i=0; i<33; i++){
        x *=2;
        if(x==n) return true;
        if(x>n) return false;
    }
    return false;
}

//Check 2^30 is divisible by n or not
const int tester = 1 << 30;

bool solve(int n) {
    return n > 0 && tester % n == 0;
}
