bool solve(vector<int>& nums, vector<int>& target) {
    multiset<int> ms;
    for(auto x: nums)   ms.insert(x);
    for(auto y:target)  {
        if(ms.find(y)!=ms.end()) ms.erase(ms.find(y));
    }
    return ms.empty();
}

//Optimised run time
bool solve(vector<int>& nums, vector<int>& target) {
    unordered_map<int, int> mp;
    for (int& x : nums) {
        mp[x]++;
    }
    for (int& x : target) {
        if (--mp[x] == 0) {
            mp.erase(x);
        }
    }
    return mp.size() == 0 ? true : false;
}
