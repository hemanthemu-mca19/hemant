// https://leetcode.com/problems/permutation-sequence/

/**
60. Permutation Sequence
Hard

The set [1, 2, 3, ..., n] contains a total of n! unique permutations.

By listing and labeling all of the permutations in order, we get the following sequence for n = 3:

"123"
"132"
"213"
"231"
"312"
"321"
Given n and k, return the kth permutation sequence.

 

Example 1:

Input: n = 3, k = 3
Output: "213"
Example 2:

Input: n = 4, k = 9
Output: "2314"
Example 3:

Input: n = 3, k = 1
Output: "123"
 

Constraints:

1 <= n <= 9
1 <= k <= n!
**/

// CODE
// TC O(n^2)
// SC O(n) extra

class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> numbers;
        int fact = 1;
        for(int i=1; i<n; i++){
           numbers.push_back(i);
            fact *= i;
        }
        numbers.push_back(n);
        
        k--;
        string ans = "";
        while(true){
            ans += (numbers[k/fact]+'0');
            numbers.erase(numbers.begin()+(k/fact));
            if(numbers.size()==0) break;
            k %= fact;
            fact /= numbers.size();
        }
        return ans;
    }
};
