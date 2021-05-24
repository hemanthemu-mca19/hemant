// https://leetcode.com/problems/longest-repeating-character-replacement/

/**

424. Longest Repeating Character Replacement

You are given a string s and an integer k. You can choose any character of the string and change it to any other uppercase English character. You can perform this operation at most k times.

Return the length of the longest substring containing the same letter you can get after performing the above operations.

 

Example 1:

Input: s = "ABAB", k = 2
Output: 4
Explanation: Replace the two 'A's with two 'B's or vice versa.
Example 2:

Input: s = "AABABBA", k = 1
Output: 4
Explanation: Replace the one 'A' in the middle with 'B' and form "AABBBBA".
The substring "BBBB" has the longest repeating letters, which is 4.
 

Constraints:

1 <= s.length <= 105
s consists of only uppercase English letters.
0 <= k <= s.length

**/

// CODE

class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> char_count(26,0);
        int l=0, r=0, max_cnt=0, win_len=0;
        while(r < s.size()){
            max_cnt = max(max_cnt, ++char_count[s[r++]-'A']);
            if(win_len - max_cnt < k){
                win_len++;
            }
            else{
                --char_count[s[l++]-'A'];
            }
        }
        return win_len;
    }
};
