class Solution {
public:
    bool isIdealPermutation(vector<int>& A) {
        cout << A.size() <<endl;
        for(int i=0; i<A.size(); i++) {
            if(abs(A[i]-i)>1)return false;
        }
        return true;
    }
};
