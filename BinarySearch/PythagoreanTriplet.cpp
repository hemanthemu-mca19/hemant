/** https://binarysearch.com/problems/Pythagorean-Triplets **/

bool solve(vector<int>& nums) {
    unordered_set<int> s;
    int n = nums.size(), x;
    if(n<3) return false;
    for(int i=0; i<n; i++){
        nums[i] *= nums[i];
        s.insert(nums[i]);
    }
    sort(nums.begin(), nums.end());
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++) {
            if(s.find(nums[i]+nums[j]) != s.end()) return true;
        }
    }
    return false;
}
