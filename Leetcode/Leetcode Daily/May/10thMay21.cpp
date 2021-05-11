class Solution {
public:
    int countPrimes(int n) {
        if(n<3) return 0;
       vector<int> p(n, 0); 
        p[0]=1;
        p[1]=1;
        int k=4;
        while(k<n) p[k]=1, k+=2;
        for(int i=3; i*i<=n; i +=2){
            int j=i*i;
            while(j<n){
                p[j] = 1;
                j += i;
            }
        }
        int cnt=0;
        for(int i=0; i<n; i++){
            if(p[i]==0) cnt++;
        }
        return cnt;  
    }
};
