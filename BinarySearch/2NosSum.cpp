bool solve(vector<int>& nums, int k) {
    map<int, int> mp;
    for(int i=0; i<nums.size(); i++){
        if(!mp.empty()){
            if(mp.find(k-nums[i])!=mp.end()) return true;
        }
        mp.insert({nums[i],1});
    }
    return false;
}
