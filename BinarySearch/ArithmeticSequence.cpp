// https://binarysearch.com/problems/Arithmetic-Sequence-Permutation

/**

Arithmetic Sequence Permutation
Given a list of integers nums, return whether you can rearrange the order of nums such that the difference between every consecutive two numbers is the same.

Constraints

n ≤ 100,000 where n is the length of nums
Example 1
Input
nums = [7, 1, 5, 3]
Output
true
Explanation
If we rearrange nums to [1, 3, 5, 7], then the difference between every two consecutive numbers is 2.

Example 2
Input
nums = [1, 5, 1, 5, 1, 5]
Output
false
Explanation
The difference between every consecutive two numbers alternates between 4 and -4.
**/

// CODE

bool solve(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    if(n<3) return true;
    int d = nums[1] - nums[0];
    for(int i=2; i<n; i++) {
        if(nums[i]-nums[i-1] != d) return false;
    }
    return true;
}
