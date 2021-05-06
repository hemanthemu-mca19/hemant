vector<int> solve(vector<int>& nums) {
    if(nums.size()==0 || nums.size()==1) return nums;
    int i=0, j=0;
    while(nums[i] !=0 && i<nums.size()) i++, j++;
    i++;
    for(; i<nums.size(); i++){
        if(nums[i] != 0) swap(nums[j++], nums[i]);
    }
    return nums;
}
