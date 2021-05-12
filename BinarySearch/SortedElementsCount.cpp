/** https://binarysearch.com/problems/Sorted-Elements **/

int solve(vector<int>& nums) {
    vector<int> nums1;
    nums1 = nums;
    sort(nums1.begin(), nums1.end());
    int cnt = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == nums1[i]) cnt++;
    }
    return cnt;
}
