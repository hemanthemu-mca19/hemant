class Solution {
public:
    int minOperations(int n) {
        int i=0, j=n-1, sum=0;
        while(i<j){
            sum += j-i;
            i++, j--;
        }
        return sum;
    }
};
