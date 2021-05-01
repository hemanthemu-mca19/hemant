//O(nlogn) Approach
bool solve(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    if(nums[n-1]>2*nums[n-2]) return true;
    else return false;  
}
