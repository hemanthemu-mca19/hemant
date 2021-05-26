// https://binarysearch.com/problems/Max-Product-of-Three-Numbers

/**

Max Product of Three Numbers
Given a list of integers nums, find the largest product of three distinct elements.

Constraints

3 ≤ n ≤ 100,000 where n is the length of nums
Example 1
Input
nums = [5, 4, 1, 3, -2, -2]
Output
60
Explanation
We can multiply 5 * 4 * 3

Example 2
Input
nums = [-3, 1, 1, 0]
Output
0
Explanation
We can multiply 1 * 1 * 0

**/

// CODE

int solve(vector<int>& nums) {
    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;
    for (auto x : nums) {
        if(x > max1) {
            max3 = max2;
            max2 = max1;
            max1 = x;
        }
        else if(x > max2) {
            max3 = max2;
            max2 = x;
        }
        else if(x>max3) max3 = x;

        if(x < min1){
            min2 = min1;
            min1 = x;
        }
        else if(x < min2) min2 = x;

    }
    return max(max1*max2*max3, min1*min2*max1);
}
