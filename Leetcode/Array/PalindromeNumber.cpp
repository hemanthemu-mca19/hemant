//Approach 1
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int r=0;
        vector<int> v;
        while(x>0){
            v.push_back(x%10);
            x /=10;    
        }
        int n = v.size();
        for(int i=0; i<n; i++){
            if(v[i]!=v[n-i-1]) return false;
        }
        return true;
    }
};

//optimised approach(Reverse half of the number then compare)
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || x%10==0 and x!=0) return false;
       int y=0;
        while(x>y) {
            y = y*10+x%10;
            x /=10;
        }
        return (x==y || x==y/10);
    }
};
