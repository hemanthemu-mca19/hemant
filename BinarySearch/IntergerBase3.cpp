string solve(int n) {
    string ans = "";
    if (n == 0) return "0";
    while (n > 0) {
        int x = n % 3;
        ans = to_string(x) + ans;
        n /= 3;
    }
    return ans;
}

//Optimised Code
string solve(int n) {
    if (!n) return "0";
    const int B = 32;
    char s[B];
    int k = B - 1;
    while (n) s[k--] = n % 3 + '0', n /= 3;
    return string(s + k + 1, s + B);
}
