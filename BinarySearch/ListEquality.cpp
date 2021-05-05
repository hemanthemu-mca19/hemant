//2*O(n) Approach
int solve(vector<int>& nums) {
    if(nums.size() == 0) return 0;
    int mn = nums[0];
    for(int i=1; i<nums.size(); i++) {
        mn = min(mn, nums[i]);
    }
    int op =0;
    for(int i=0; i<nums.size(); i++) {
        op += nums[i]-mn;
    }
    return op;
}

//O(n) Approach
int solve(vector<int>& nums) {
    if(nums.size() == 0 || nums.size() == 1) return 0;
    int mn = nums[0]+100001, op=0;
    for(int i=0; i<nums.size(); i++) {
        op += nums[i]+100001;
        mn = min(mn, nums[i]+100001);
    }
    return op - (mn*nums.size());
}
