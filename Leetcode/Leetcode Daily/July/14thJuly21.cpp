// https://leetcode.com/explore/challenge/card/july-leetcoding-challenge-2021/609/week-2-july-8th-july-14th/3813/
/**

Custom Sort String

Solution
order and str are strings composed of lowercase letters. In order, no letter occurs more than once.

order was sorted in some custom order previously. We want to permute the characters of str so that they match the order that order was sorted. More specifically, if x occurs before y in order, then x should occur before y in the returned string.

Return any permutation of str (as a string) that satisfies this property.

Example:
Input: 
order = "cba"
str = "abcd"
Output: "cbad"
Explanation: 
"a", "b", "c" appear in order, so the order of "a", "b", "c" should be "c", "b", and "a". 
Since "d" does not appear in order, it can be at any position in the returned string. "dcba", "cdba", "cbda" are also valid outputs.
 

Note:

order has length at most 26, and no character is repeated in order.
str has length at most 200.
order and str consist of lowercase letters only.

**/

// CODE
// TC O(26+ O(str.length) + 26 +26)
// SC O(26+26)
class Solution {
public:
    string customSortString(string order, string str) {
        vector<int> count(26,0);
        for( auto ch : str) count[ch-'a']++;
        
        vector<int> ord(order.size(), -1);
        for(int i=0; i<order.size(); i++) ord[i] = order[i]-'a';
        
        str = "";
        for(int i=0; i<ord.size(); i++){
            int index = ord[i];
            while(count[index] > 0){
                str += (index + 'a');
                count[index]--;
            }
        }
        for(int index=0; index<26; index++){
            while(count[index] > 0){
                str += (index + 'a');
                count[index]--;
            }
        }
        return str;
    }
};
