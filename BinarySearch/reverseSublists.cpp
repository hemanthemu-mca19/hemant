bool solve(vector<int>& nums, vector<int>& target) {
    multiset<int> ms;
    for(auto x: nums)   ms.insert(x);
    for(auto y:target)  {
        if(ms.find(y)!=ms.end()) ms.erase(ms.find(y));
    }
    return ms.empty();
}
