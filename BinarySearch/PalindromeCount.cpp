/** https://binarysearch.com/problems/Palindrome-Count/ **/
/**
Palindrome Count
You are given a string s and an integer k. Return the number of palindromes you can construct of length k using only letters in s. Letters can be used more than once.

Constraints

n ≤ 100,000 where n is the length of s

**/

//CODE
int solve(string s, int k) {
    unordered_set<char> st;
    int cnt = 0;
    for (auto x : s) {
        if (!st.empty() and st.find(x) != st.end())
            continue;
        else
            st.insert(x), cnt++;
    }

    return (pow(cnt, (k / 2) + k % 2));
}
