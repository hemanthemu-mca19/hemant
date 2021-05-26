// https://binarysearch.com/problems/ASCII-String-to-Integer

/**
ASCII String to Integer
You are given a string s containing digits from "0" to "9" and lowercase alphabet characters. Return the sum of the numbers found in s.

Constraints

1 ≤ n ≤ 100,000 where n is the length of s
Example 1
Input
s = "11aa32bbb5"
Output
48
Explanation
Since 11 + 32 + 5 = 48.

Example 2
Input
s = "abc"
Output
0
Explanation
There's no digits so it defaults to 0.

Example 3
Input
s = "1a2b30"
Output
33
Explanation
Since 1 + 2 + 30 = 33.

**/

// CODE

int solve(string s) {
    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
        string temp = "";
        while (s[i] - 0 > 57 and i < s.size()) i++;
        while (s[i] - 0 <= 57 and i < s.size()) {
            temp += s[i++];
        }

        if (temp != "") {
            int n = stoi(temp);
            ans += n;
        }
    }
    return ans;
}
