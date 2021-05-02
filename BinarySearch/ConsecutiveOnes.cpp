bool solve(vector<int>& nums) {
    int count1=0, n =nums.size();
    for(int i=0; i<n; i++) {
        if(nums[i]==1 and count1 !=0) return false;
        else if(nums[i]==1){
            while(nums[i]==1) {
                count1++, i++;
            }
        }
    }
    return true;
}
