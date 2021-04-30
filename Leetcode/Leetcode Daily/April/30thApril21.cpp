class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        vector<int> a1, a2;
        int num =1;
        a1.push_back(1);
        while(num<=bound and x!=1){
            num *=x;
            a1.push_back(num);
            //cout<<num <<" ";
        }
        int num1 =1;
        a2.push_back(1);
        while(num1<=bound and y!=1){
            num1 *=y;
            a2.push_back(num1);
            //cout<<num1 <<" ";
        }
        set<int> res;
        for(int i=0; i<a1.size(); i++){
            int j = 0;
            while(j<a2.size() and a1[i]+a2[j]<=bound){
                res.insert(a1[i]+a2[j]);
                j++;
            }
        }
        vector<int> ans;
        for(auto x:res){
            ans.push_back(x);
        }
        //sort(ans.begin(), ans.end());
       return ans; 
    }
};
