/** https://binarysearch.com/problems/Group-Integers **/

bool solve(vector<int>& nums) {
    if(nums.size()<2) return false;
    if(nums.size() == 2 and nums[0]!=nums[1]) return false; 
    map<int, int> mp;
    int temp = 0;
    for(auto x : nums) mp[x]++;
    for(auto x:mp) {
        if(temp == 0) temp = x.second;
        else temp = __gcd(temp, x.second);
        if(temp == 1) return false;
    }
    return true;
}
