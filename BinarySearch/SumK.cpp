bool solve(vector<int>& nums, int k) {
    int i=0, j=nums.size()-1;
    while(i<j) {
        if(nums[i]+nums[j] == k) return true;
        else if(nums[i]+nums[j] > k) j--;
        else i++;
    }
    return false;
}
