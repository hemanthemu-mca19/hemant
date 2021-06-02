// https://leetcode.com/explore/challenge/card/june-leetcoding-challenge-2021/603/week-1-june-1st-june-7th/3765/

/**
 Interleaving String

Solution
Given strings s1, s2, and s3, find whether s3 is formed by an interleaving of s1 and s2.

An interleaving of two strings s and t is a configuration where they are divided into non-empty substrings such that:

s = s1 + s2 + ... + sn
t = t1 + t2 + ... + tm
|n - m| <= 1
The interleaving is s1 + t1 + s2 + t2 + s3 + t3 + ... or t1 + s1 + t2 + s2 + t3 + s3 + ...
Note: a + b is the concatenation of strings a and b.

 

Example 1:


Input: s1 = "aabcc", s2 = "dbbca", s3 = "aadbbcbcac"
Output: true
Example 2:

Input: s1 = "aabcc", s2 = "dbbca", s3 = "aadbbbaccc"
Output: false
Example 3:

Input: s1 = "", s2 = "", s3 = ""
Output: true
 

Constraints:

0 <= s1.length, s2.length <= 100
0 <= s3.length <= 200
s1, s2, and s3 consist of lowercase English letters.

**/

// CODE

// Using DP

class Solution {
public:
    unordered_map<string, bool> mp;
    
    bool solve(string s1, string s2, string s3, int l1, int l2, int l3, int i, int j, int k) {
        // base case
        if(k==l3){
            if(i==l1 and j==l2) return true;
            else return false;
        }
        string key = to_string(i)+"#"+to_string(j)+"#"+to_string(k);
        
        if(mp.find(key) != mp.end()) return mp[key];
        
        if(i>=l1) {
            return mp[key] = (s2[j]==s3[k])?  solve(s1,s2,s3, l1, l2, l3, i, j+1, k+1):false;
        }
        else if(j>=l2) {
            return mp[key] = (s1[i]==s3[k])? solve(s1,s2,s3, l1, l2, l3, i+1, j, k+1):false;
        }
        
        bool op1 = false, op2 = false;
        if(s1[i]==s3[k]) op1 = solve(s1,s2,s3, l1, l2, l3, i+1, j, k+1);
        if(op1 != true and s2[j]==s3[k]) op2 = solve(s1,s2,s3, l1, l2, l3, i, j+1, k+1);
        
        return mp[key] = op1 or op2;
    }
    
    bool isInterleave(string s1, string s2, string s3) {
        cin.tie(NULL);
        cout.tie(NULL);
        ios_base::sync_with_stdio(false);;
        int len1 = s1.size(), len2 = s2.size(), len3 = s3.size();
        
        if(len3 != len1+len2) return false;
        mp.clear();
        return solve(s1, s2, s3, len1, len2, len3, 0, 0, 0);
    }
};
