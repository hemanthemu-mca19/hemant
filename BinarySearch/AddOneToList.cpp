// https://binarysearch.com/problems/Add-One-to-List

/**
Add One to List
You are given a list of integers nums, representing a decimal number and nums[i] is between [0, 9].

For example, [1, 3, 9] represents the number 139.

Return the same list in the same representation except modified so that 1 is added to the number.

Constraints

1 ≤ n ≤ 100,000 where n is the length of nums.
Example 1
Input
nums = [1, 9, 1]
Output
[1, 9, 2]
Example 2
Input
nums = [9]
Output
[1, 0]
**/

// CODE

vector<int> solve(vector<int>& nums) {
    int n = nums.size()-1;
    while (nums[n] == 9) {
        nums[n--] = 0;
    }
    if(n== -1) nums[0] = 1, nums.push_back(0);
    else nums[n] += 1;
    return nums;
}
