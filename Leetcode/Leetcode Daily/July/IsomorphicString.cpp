// https://leetcode.com/explore/challenge/card/july-leetcoding-challenge-2021/609/week-2-july-8th-july-14th/3811/

/**
Isomorphic Strings

Solution
Given two strings s and t, determine if they are isomorphic.

Two strings s and t are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

 

Example 1:

Input: s = "egg", t = "add"
Output: true
Example 2:

Input: s = "foo", t = "bar"
Output: false
Example 3:

Input: s = "paper", t = "title"
Output: true
 

Constraints:

1 <= s.length <= 5 * 104
t.length == s.length
s and t consist of any valid ascii character.
**/

// CODE
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size();
        if(n==0) return true;
        unordered_map<char, char> mp;
        unordered_set<char> set;
        for(int i=0; i<n; i++) {
            if(mp.find(s[i]) == mp.end()) {
                if(set.find(t[i]) != set.end()) return false;
                mp[s[i]] = t[i];
                set.insert(t[i]);
            }
            else{
                if(mp[s[i]] != t[i]) return false;
            }
        }
        return true;
        
    }
};
