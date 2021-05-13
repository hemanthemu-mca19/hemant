/** https://binarysearch.com/problems/Line-of-People **/

int solve(int n, int a, int b) {
    if(a+b<n) return b+1;
    else if (n-a > 0) return n-a;
    return 0;
}
