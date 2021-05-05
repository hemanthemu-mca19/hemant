vector<int> solve(vector<int>& nums) {
    int temp = nums[0], temp2;
    nums[0] = 0;
    for(int i=1; i<nums.size(); i++) {
        temp2 = nums[i];
        nums[i] = temp;
        temp = min(temp2, temp);
    }
    return nums;
}
