int solve(vector<int>& nums, int target) {
    int res =INT_MIN, i=0, j=nums.size()-1;
    sort(nums.begin(), nums.end());
    while(i<j){
        if(nums[i]+nums[j] < target) res = max(nums[i]+nums[j], res), i++;
        else j--;
    }
    return res;

}
