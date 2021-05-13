/** https://binarysearch.com/problems/Find-Local-Peaks **/

vector<int> solve(vector<int>& nums) {
    vector<int> peaks;
    int n = nums.size();
    if(n<=1) return peaks;
    else if(nums[0]>nums[1]) peaks.push_back(0);
    for(int i=1; i<n-1; i++) 
        if(nums[i]>nums[i-1] and nums[i]>nums[i+1]) peaks.push_back(i);
    if(nums[n-1]>nums[n-2]) peaks.push_back(n-1);
    return peaks;
}
