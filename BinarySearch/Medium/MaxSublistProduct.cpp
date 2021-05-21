// https://binarysearch.com/problems/Maximal-Sublist-Product

/**
Maximal Sublist Product
Given a list of integers nums, find the maximum product of integers in any contiguous sublist.

Constraints

1 ≤ n ≤ 100,000 where n is the length of nums
Example 1
Input
nums = [1, 10, 2, 0, 3, 5]
Output
20
Explanation
Maximum product sublist is [1, 10, 2]  and 1 * 10 * 2 = 20
**/

// CODE

int solve(vector<int>& nums) {
    int n = nums.size();
    if(n==1) return nums[0];
    int cnt=0;
    int max_so_far =nums[0], min_so_far=nums[0], global_max=nums[0];
    for(int i=1; i<n; i++) {
        int temp = max(nums[i], max(nums[i]*max_so_far, nums[i]*min_so_far));
        min_so_far = min(nums[i], min(nums[i]*max_so_far, nums[i]*min_so_far));
        max_so_far = temp;
        global_max = max(global_max, max_so_far);
    }
    return global_max;
}
