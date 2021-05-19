// https://binarysearch.com/problems/Repeated-K-Length-Substrings

/**
Repeated K-Length Substrings
Given a string s and an integer k, return the number of k-length substrings that occur more than once in s.

Constraints

n ≤ 100,000 where n is the length of s.
k ≤ 10
Example 1
Input
s = "abcdabc"
k = 3
Output
1

**/


int solve(string s, int k) {
  if(k>s.size()) return 0;
  unordered_map<string, int> mp;
  string str = "";

  for(int i= 0; i<s.size()-k+1; i++) {
      str = s.substr(i, k);
      mp[str]++;
  }
  int cnt = 0;
  for( auto x : mp)
    if(x.second > 1) cnt++;
 return cnt;
}
