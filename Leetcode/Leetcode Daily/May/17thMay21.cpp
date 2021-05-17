
// https://leetcode.com/explore/challenge/card/may-leetcoding-challenge-2021/600/week-3-may-15th-may-21st/3746/

/**
Given a list of words, each word consists of English lowercase letters.
Let's say word1 is a predecessor of word2 if and only if we can add exactly one letter anywhere in word1 to make it equal to word2. For example, "abc" is a predecessor of "abac".
A word chain is a sequence of words [word_1, word_2, ..., word_k] with k >= 1, where word_1 is a predecessor of word_2, word_2 is a predecessor of word_3, and so on.
Return the longest possible length of a word chain with words chosen from the given list of words.
 
Example 1:
Input: words = ["a","b","ba","bca","bda","bdca"]
Output: 4
Explanation: One of the longest word chain is "a","ba","bda","bdca".
**/

// CODE

class Solution {
public:
    
    static bool comparator(string &a, string &b) {
        return a.size() < b.size();
    }
    
    int longestStrChain(vector<string>& words) {
        sort(words.begin(), words.end(), comparator);   
        // for(auto x : words) cout<< x << " ";
        
        int count = 0;
        unordered_map<string, int> mp;
        
        for(auto  word:words ) {
            for( int k = 0; k < word.size(); k++ ) {
                string subs = word.substr(0,k) + word.substr(k+1); //forming substring from the current word by deleting a character from it.
                int curr_count;
                if( mp.find(subs) == mp.end() )
                    curr_count = 1;
                else curr_count = mp[subs] + 1;
                
                mp[word] = max(mp[word], curr_count); 
            }
            count = max(mp[word], count);
        }
        // for(auto x : mp) cout<<x.first<<" "<<x.second<<endl;
        
        return count;
    }
};
