int solve(vector<int>& nums, int k, int target) {
    int sum =0, n = nums.size();
    for(int i=0; i<n; i++) {
        sum +=nums[i];
    }
    int diff = target - sum;
    if ( (abs(diff)%abs(k) == 0) )
        return abs(diff)/abs(k);
    else
        return abs(diff)/abs(k)+1;
}
