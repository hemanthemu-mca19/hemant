//O(n) Approach
int solve(vector<int>& nums) {
    int n=nums.size();
    for(int i=0; i<n; i++){
        if(nums[i]==i) return i;
    }
    return -1;
}

//O(log n) Approach
int solve(vector<int>& nums) {
    int l=0, r=nums.size()-1;
    if(r==-1) return -1;
    if(nums[0]==0) return 0;
    int mid;
    while(l<r){
        mid = (l+r)/2;
        if(nums[mid]>=mid) r=mid;
        else if(nums[mid]<mid) l=mid+1;
        if(nums[l]==l) return l;
    }
    return -1;
}
