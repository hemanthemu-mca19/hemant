// https://binarysearch.com/problems/Unique-Occurrences

/**

Unique Occurrences
Given a list of integers nums, return whether the number of occurrences of every value in the array is unique.

Note: Numbers can be negative.

Constraints

0 ≤ n ≤ 100,000 where n is the length of nums
Example 1
Input
nums = [5, 3, 1, 8, 3, 1, 1, 8, 8, 8]
Output
true
Explanation
There's 1 occurrence of 5, 2 occurrences of 3, 3 occurrences of 1, and 4 occurrences of 8. All number of occurrences are unique.

Example 2
Input
nums = [-3, -1, -1, -1, -2, -2]
Output
true
Explanation
There's 1 occurrence of -3, 2 occurrences of -2, and 3 occurrences of -1. All number of occurrences are unique.

Example 3
Input
nums = [3, 1, 1, 2, 2, 2, 3]
Output
false
Explanation
There are 2 occurrences of 1, and 2 occurrences of 3. So the number of occurrences here is not unique.

**/

//  CODE

bool solve(vector<int>& nums) {
    map<int, int> mp;
    for(auto x : nums) mp[x]++;
    set<int> s;
    for(auto y : mp) {
        int check = y.second;
        if(!s.empty()){
            if(s.find(check) != s.end()) return false;
        }
        s.insert(check);
    }
    return true;
}
