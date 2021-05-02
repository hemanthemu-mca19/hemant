//O(nlogn) Approach
bool solve(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    if(nums[n-1]>2*nums[n-2]) return true;
    else return false;  
}
//O(n) Approach
bool solve(vector<int>& nums) {
    int first = nums[0], second = INT_MIN;
    int n = nums.size();
    for(int i=1; i<n; i++){
        if(nums[i]>first){
            second = first;
            first =  nums[i];    
        }
        else if(nums[i]>second){
            second = nums[i];
        }
    }
    if (first>2*second) return true;
    else return false;
}
