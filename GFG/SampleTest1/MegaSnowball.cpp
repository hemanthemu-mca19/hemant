class Solution {
public:
    int snowball(int N, vector<int> weights){
        // code here
        if(N==0) return 0;
        int sum = 0;
        for(int i=0; i<N; i++) {
            sum += weights[i];
        }
        return sum;
    }
};
