class Solution {
public:
    long long sum(long long N, long long M){
        // code here
        //Apply Euler method to find LCM
        if(M > N) swap(N,M);
        //M is smaller
        long long lcm =  1;
        long long n = N, m = M;
        while(true){
            long long r = n%m;
            if(r==0) {
                lcm = m;
                break;
            }
            n = m;
            m = r;
        }
        return (N+M)/lcm;
    }
};
