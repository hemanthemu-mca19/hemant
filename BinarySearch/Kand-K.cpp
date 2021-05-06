int solve(vector<int>& nums) {
    int ans = -1, n =nums.size(), temp;
    if(n==0) return ans;
    set<int> s;
    for(int i=0; i<n; i++){
        temp = nums[i];
        s.insert(temp);
        if(s.find(-temp) != s.end()) ans = max(ans, abs(temp));
    }
    return ans;
}
//optimised
int solve(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int i = 0;
    int j = nums.size() - 1;
    while (i <= j) {
        if (nums[i] + nums[j] == 0)
            return nums[j];
        else if (nums[i] + nums[j] < 0)
            i++;
        else
            j--;
    }
    return -1;
}
