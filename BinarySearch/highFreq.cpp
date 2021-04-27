int solve(vector<int>& nums) {
    int n = nums.size();
    if(n==0) return 0;
    int count[100001];
    memset(count, 0, sizeof(count));
    
    for(int i=0; i<n; i++) {
        count[nums[i]]++;
    }
    int gmax=1, cmax=0;
    for(int i=0; i<n; i++){
        cmax = count[nums[i]];
        if(cmax > gmax)  gmax = cmax;
    }
    return gmax;
}
//map method

int solve(vector<int>& nums) {
    map<int, int> count;
    int mx = 0;
    for (int i = 0; i < nums.size(); i++) mx = max(mx, ++count[nums[i]]);

    return mx;
}
