// https://leetcode.com/problems/word-ladder/

/**
127. Word Ladder
Hard

5592

1467

Add to List

Share
A transformation sequence from word beginWord to word endWord using a dictionary wordList is a sequence of words beginWord -> s1 -> s2 -> ... -> sk such that:

Every adjacent pair of words differs by a single letter.
Every si for 1 <= i <= k is in wordList. Note that beginWord does not need to be in wordList.
sk == endWord
Given two words, beginWord and endWord, and a dictionary wordList, return the number of words in the shortest transformation sequence from beginWord to endWord, or 0 if no such sequence exists.

 

Example 1:

Input: beginWord = "hit", endWord = "cog", wordList = ["hot","dot","dog","lot","log","cog"]
Output: 5
Explanation: One shortest transformation sequence is "hit" -> "hot" -> "dot" -> "dog" -> cog", which is 5 words long.
Example 2:

Input: beginWord = "hit", endWord = "cog", wordList = ["hot","dot","dog","lot","log"]
Output: 0
Explanation: The endWord "cog" is not in wordList, therefore there is no valid transformation sequence.
 

Constraints:

1 <= beginWord.length <= 10
endWord.length == beginWord.length
1 <= wordList.length <= 5000
wordList[i].length == beginWord.length
beginWord, endWord, and wordList[i] consist of lowercase English letters.
beginWord != endWord
All the words in wordList are unique.
**/


// CODE
class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        bool ispresent = false;
        unordered_set<string> wordsSet;
        //make set of wordsList
        for(auto w : wordList){
            if(w == endWord) ispresent = true;
            wordsSet.insert(w);
        }
        //endword not present ? no feasible path return 0
        if(ispresent == false) return 0;
        
        // int n = wordList.size();
        //taking queue for BFS
        queue<string> queue;
        queue.push(beginWord);
        int depth =0;
        
        while(!queue.empty()) {
            depth++;
            int currLevel = queue.size();
            while(currLevel--) {
                string curr_word = queue.front();
                queue.pop();
                for(int i=0; i<curr_word.size(); i++) {
                    for(char x = 'a'; x <= 'z'; x++){
                        string temp =  curr_word;
                        temp[i] = x;
                        if(temp == curr_word) continue;
                        if(temp == endWord) return depth+1;
                        if(wordsSet.find(temp) != wordsSet.end()) {
                            queue.push(temp);
                            wordsSet.erase(temp);
                        }
                    }
                }
            }
        }
        return 0;
    }
};
