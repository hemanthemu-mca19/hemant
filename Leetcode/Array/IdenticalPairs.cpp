class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int, int> mp;
        for(int i=0; i<nums.size(); i++) {
            mp[nums[i]]++;
        }
        int sum=0;
        for(auto val: mp){
            if(val.second>=2) sum += val.second*(val.second-1)*(0.5);
        }
        return sum;
    }
};
