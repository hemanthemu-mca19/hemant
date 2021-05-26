// https://binarysearch.com/problems/Verify-Max-Heap

/**

Verify Max Heap
Given a list of integers nums, return whether it represents a max heap. That is, for every i we have that:

nums[i] ≥ nums[2*i + 1] if 2*i + 1 is within bounds
nums[i] ≥ nums[2*i + 2] if 2*i + 2 is within bounds
Constraints

0 ≤ n ≤ 100,000 where n is the length of nums
Example 1
Input
nums = [4, 2, 3, 0, 1]
Output
true

**/

// CODE

bool solve(vector<int>& nums) {
    int n = nums.size();
    for(int i=0; i<n/2; i++){
        if(2*i+1 < n and nums[i] < nums[2*i+1]) return false;
        if(2*i+2 < n and nums[i] < nums[2*i+2]) return false;
    }
    return true;
}
