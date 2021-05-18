// https://binarysearch.com/problems/Largest-Sum-After-K-Negations

/**
Largest Sum After K Negations
You are given a list of integers nums and an integer k. Consider an operation where you pick an element in nums and negate it. Given that you must make exactly k operations, return the maximum resulting sum that can be obtained.

Constraints

n ≤ 100,000 where n is the length of nums
k < 2 ** 31
Example 1
Input
nums = [1, 0, -5, -3]
k = 4
Output
9
**/

// CODE
int solve(vector<int>& nums, int k) {
   int n = nums.size();
   if(n==0) return 0;
   sort(nums.begin(), nums.end());
   int i=0;
    while(nums[i]<0){
        if(k==0) break;
        nums[i] = abs(nums[i]);
        i++, k--;
    }
   int sum=0, mn = INT_MAX;
   for(i=0; i<n; i++) {
       sum += nums[i];
       mn  = min(mn, abs(nums[i]));
   }
   if(k%2 != 0) {
       sum = sum - (2*mn);
   }
   return sum;
}
