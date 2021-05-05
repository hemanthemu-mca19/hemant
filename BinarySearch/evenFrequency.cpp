bool solve(vector<int>& nums) {
    unordered_map<int, int> mp;
    if(nums.size()%2 !=0) return false;
    for(int i=0; i<nums.size(); i++){
        mp[nums[i]]++;
    }
    for(auto x: mp) {
        if(x.second %2 !=0) return false;
    }
    return true;
}

//Bit MAnipulation Approach
bool solve(vector<int>& nums) {
    int a = 0, b = 0;
    for (auto x : nums) {
        a ^= x;
        b ^= x + 1;
    }
    return !a && !b;
}
