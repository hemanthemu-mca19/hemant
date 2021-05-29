// https://www.interviewbit.com/problems/longest-common-prefix/

/**
Longest Common Prefix
Asked in:  
Google
Given the array of strings A,
you need to find the longest string S which is the prefix of ALL the strings in the array.

Longest common prefix for a pair of strings S1 and S2 is the longest string S which is the prefix of both S1
and S2.

For Example, longest common prefix of "abcdefgh" and "abcefgh" is "abc"
**/

// CODE
string Solution::longestCommonPrefix(vector<string> &A) {
    string prefix = A[0];
    for(int i = 1; i < A.size(); i++) {
         int j = 0, n = min(A[i].size(), prefix.size());
        string curr_prefix = "";
        while(j<n){
            if(prefix[j] == A[i][j]) curr_prefix += prefix[j++];
            else break;
        }
        prefix = curr_prefix;
        if(prefix == "") return prefix;
    }
    return prefix;
}
