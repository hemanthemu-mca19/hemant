/** https://binarysearch.com/problems/Interleaved-String **/

string solve(string s0, string s1) {
    string ans = "";
    int i = 0, j = 0;
    int N = s0.length();
    int M = s1.length();
    while (i < N or j < M) {
        if (i < N) ans.push_back(s0[i++]);
        if (j < M) ans.push_back(s1[j++]);
    }
    return ans;
}
