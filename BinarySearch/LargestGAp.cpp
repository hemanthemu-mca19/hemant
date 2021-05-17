//  https://binarysearch.com/problems/Largest-Gap

/**

Given a list of integers nums, return the largest difference of two consecutive integers in the sorted version of nums.

Constraints

n ≤ 100,000 where n is the length of nums

**/

int solve(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int ans = -1;
    for(int i=1; i<nums.size(); i++){
        ans = max(ans, nums[i]-nums[i-1]);
    }
    return ans;
}
