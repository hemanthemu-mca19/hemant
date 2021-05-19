//  https://binarysearch.com/problems/Split-List

/**

Split List
Given a list of integers nums, return whether you can partition the list into two non-empty sublists such that every number in the left sublist is strictly less than every number in the right sublist.

Constraints

n ≤ 100,000 where n is the length of nums.
Example 1
Input
nums = [5, 3, 2, 7, 9]
Output
true
Explanation
We can split the list into left = [5, 3, 2] and right = [7, 9]
**/

// CODE

bool solve(vector<int>& nums) {
    int n = nums.size();
    vector<int> left(n), right(n);
    left[0] = nums[0];
    right[n-1] = nums[n - 1];

    for (int i = 1; i < n; i++) left[i] = max(left[i - 1], nums[i]);

    for (int i = n - 2; i >= 0; i--) right[i] = min(nums[i], right[i + 1]);

    for (int i = 0; i < n - 1; i++) {
        if (left[i] < right[i + 1]) return true;
    }

    return false;
}
