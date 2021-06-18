// https://binarysearch.com/problems/Hoppable

/**
Hoppable

Medium

Given an integer list nums where each number represents the maximum number of hops you can make, determine whether you can reach to the last index starting at index 0.

Constraints

    n ≤ 100,000 where n is the length of nums.

Example 1
Input

nums = [1, 0, 0, 0]

Output

false

Example 2
Input

nums = [2, 4, 0, 1, 0]

Output

true

Explanation

We can jump from index 0 to 1, and then jump to the end.
Example 3
Input

nums = [1, 1, 0, 1]

Output

false

Explanation

We can't go past index 2 of the array.

**/

// CODE
bool solve(vector<int>& nums) {
    int n = nums.size();
    if(n<2) return true;
    if(nums[0] == 0) return false;
    vector<int> pos(n,0);
    int max_so_far = 0;
    for(int i=0; i<n; i++){
        pos[i] = i+nums[i];
        max_so_far = max(pos[i], max_so_far);
        if(max_so_far == i) return false;
        else if(max_so_far >= n-1) return true;
    }
    return (max_so_far >= n-1);
}
