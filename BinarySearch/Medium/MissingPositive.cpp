// https://binarysearch.com/problems/First-Missing-Positive

/**

First Missing Positive
Given a list of integers nums, find the first missing positive integer. In other words, find the lowest positive integer that does not exist in the list. The list can contain duplicates and negative numbers as well.

Constraints

n ≤ 100,000 where n is the length of nums.
Example 1
Input
nums = [1, 2, 3]
Output
4
Example 2
Input
nums = [3, 4, -1, 1]
Output
2
Example 3
Input
nums = [1, 2, 0]
Output
3
Example 4
Input
nums = [-1, -2, -3]
Output
1

**/

// CODE
// Solution with extra Space 
int solve(vector<int>& nums) {
    vector<int> positives(100001,-1);
    for(auto x:nums) if(x>0) positives[x] = 1;
    for(int i=1; i<100001; i++) if(positives[i]==-1) return i;
    return 1;
}

// Without Extra Space

int solve(vector<int>& nums) {
    int  n = nums.size();
    for(int i=0; i<n; i++) if(nums[i]<=0) nums[i] = n+1;
    for(int i=0; i<n; i++){
        if(abs(nums[i]) <= n) nums[abs(nums[i])-1] = -abs(nums[abs(nums[i])-1]);
    }
    for(int i=0; i<n; i++) if(nums[i] > 0) return i+1;
    return n+1;
}
