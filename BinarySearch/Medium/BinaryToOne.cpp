int solve(string s) {
    int ans = 0, ones = 0;
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] == '1')
            ones++;
        else {
            if (ones) {
                ans += ones + 1;
                ones = 1;
            } else
                ans++;
        }
    }
    if (ones > 1) ans += ones + 1;
    return ans;
}
/**
Reduce Binary Number to One
You are given a string s containing "1"s and "0"s which represents a binary number. Return the number of steps it would take to reduce the number to "1" with these rules:

If the number is even, divide by 2
Otherwise, add 1
Constraints

1 ≤ n ≤ 100,000 where n is the length of s
Example 1
Input
s = "101"
Output
5
Explanation
"101" is 5 in binary.

5 is odd so we add one and get 6
6 is even so we divide by 2 and get 3
3 is odd so we add one and get 4
4 is even so we divide by 2 and get 2
2 is even so we divide by 2 and get 1
Example 2
Input
s = "111"
Output
4
Explanation
"111" is 7 in binary.

7 is odd so we add one and get 8
8 is even so we divide by 2 and get 4
4 is even so we divide by 2 and get 2
2 is even so we divide by 2 and get 1
**/
