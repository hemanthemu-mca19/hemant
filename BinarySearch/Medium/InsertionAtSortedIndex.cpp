// https://binarysearch.com/problems/Insertion-Index-in-Sorted-List

/**

Insertion Index in Sorted List
Given a list of integers nums, sorted in ascending order, and a number target, return the index where target should be inserted to keep nums sorted. If target already exists in nums, return the largest index where target can be inserted.

This should be done in \mathcal{O}(\log n)O(logn).

Constraints

1 ≤ n ≤ 100,000 where n is the length of nums
Example 1
Input
nums = [1, 2, 4, 5]
target = 3
Output
2
**/

// CODE

int solve(vector<int>& nums, int target) {
    return upper_bound(nums.begin(), nums.end(), target)-nums.begin();
}


// Implemented using Binary search
int solve(vector<int>& nums, int target) {
    int l = 0, r = nums.size() - 1;
    int mid, idx = nums.size();
    while (l <= r) {
        mid = l + (r - l) / 2;
        if (nums[mid] > target) {
            idx = mid;
            r = mid - 1;
        } else
            l = mid + 1;
    }
    return idx;
}
