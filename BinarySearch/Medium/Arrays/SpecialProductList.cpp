// https://binarysearch.com/problems/Special-Product-List/

/**
Special Product List

Medium

Given a list of integers nums, return a new list such that each element at index i of the new list is the product of all the numbers in the original list except the one at i. Do this without using division.

Constraints

    2 ≤ n ≤ 100,000 where n is the length of nums

Example 1
Input

nums = [1, 2, 3, 4, 5]

Output

[120, 60, 40, 30, 24]

Explanation

120 = 2 * 3 * 4 * 5, 60 = 1 * 3 * 4 * 5, and so on.
Example 2
Input

nums = [3, 2, 1]

Output

[2, 3, 6]

**/

// CODE

vector<int> solve(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n,1);
    // previously ans array will contain the product of elemnts to its right
    for(int i = n-2; i>=0; i--){
        ans[i] = ans[i+1]*nums[i+1];
    }
   
    int pre_multiplied_values = 1; 
    
    for(int i=0; i<n; i++){
        ans[i] = ans[i]*pre_multiplied_values;
        pre_multiplied_values *= nums[i]; 
    }
    return ans;
}

// nums = [1, 2, 3, 4, 5]
// pre  = [1, 1, 2, 6, 24]
// post = [120, 60, 20, 5, 1]
