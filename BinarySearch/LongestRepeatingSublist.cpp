// https://binarysearch.com/problems/Longest-Repeating-Sublist-After-K-Updates

/**

Longest Repeating Sublist After K Updates
Given a list of integers nums and an integer k, consider an operation where we update the value of any number in the list. Return the length of the longest sublist containing repeating numbers given that we can perform k operations.

Constraints

k ≤ n ≤ 100,000 where n is the length of nums
Example 1
Input
nums = [7, 5, 5, 3, 2, 5, 5]
k = 2
Output
6
Explanation
We can change [3, 2] to 5s to get [7, 5, 5, 5, 5, 5, 5].

**/

// CODE

int solve(vector<int>& nums, int k) {
  int n = nums.size();
  unordered_map<int, int> mp;
  int l=0, r=0, max_cnt=0, win_len=0;

  while(r<n) {
    max_cnt = max(max_cnt, ++mp[nums[r++]]);
    if(win_len - max_cnt < k){
        win_len++;
    }
    else {
       --mp[nums[l++]];
    }
  } 
  return win_len;
}
