bool solve(vector<int>& nums) {
    unordered_map<int,int> mp;
    for(int i=0; i<nums.size(); i++) {
        mp[nums[i]]++;
    }
    for(auto it:mp){
        if(it.first == it.second) return true;
    }
    return false;
}
