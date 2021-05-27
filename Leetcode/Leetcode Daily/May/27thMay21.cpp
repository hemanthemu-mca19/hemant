// https://leetcode.com/explore/challenge/card/may-leetcoding-challenge-2021/601/week-4-may-22nd-may-28th/3757/

/**
Maximum Product of Word Lengths

Solution
Given a string array words, return the maximum value of length(word[i]) * length(word[j]) where the two words do not share common letters. If no such two words exist, return 0.

 

Example 1:

Input: words = ["abcw","baz","foo","bar","xtfn","abcdef"]
Output: 16
Explanation: The two words can be "abcw", "xtfn".
Example 2:

Input: words = ["a","ab","abc","d","cd","bcd","abcd"]
Output: 4
Explanation: The two words can be "ab", "cd".
**/

// CODE

class Solution {
public:
    int maxProduct(vector<string>& words) {
        int n = words.size();
        int maxProd = 0;
        vector<vector<int> > bitset(n, vector<int>(26,0)); //store status for charset of each word
        
        for(int i=0; i<n; i++){
            for(char x : words[i]) {
                bitset[i][x-'a'] = 1;
            }
        }
        
        for(int i=0; i<n; i++){
            
            for(int j=i+1; j<n; j++){
                int cnt = 0;
                for(int k=0; k<26; k++){
                    if(bitset[i][k] * bitset[j][k] == 1) cnt--;
                    
                }
                if(cnt==0) {
                    int prod = words[i].size();
                    prod *= words[j].size();
                    maxProd = max(prod, maxProd);
                }
            }
        }
        return maxProd;
    }
};
