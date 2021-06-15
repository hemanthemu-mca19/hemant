// https://binarysearch.com/problems/Next-Integer-Permutation/

/**

Next Integer Permutation
Hard

Given an integer n, return the next bigger permutation of its digits.

If n is already in its biggest permutation, rotate to the smallest permutation.

Constraints

n < 2 ** 31
Example 1
Input
n = 527
Output
572
Example 2
Input
n = 321
Output
123
Explanation
321 is already the biggest permutation so it rotates to the smallest.

**/

// CODE

int solve(int n) {
    string s  = to_string(n);
    if(s.size() == 0 || s.size()==1) return n;
    int breakp = -1;
    int i;
    for(i = s.size()-1; i>0; i--) {
        if(s[i] > s[i-1]) {
            breakp = i-1;
            break;
        }
    }

    if(breakp == -1){
        sort(s.begin(), s.end());
        return stoi(s);
    }
    int k;
    for(k = s.size()-1; k>=0; k--) {
        if(s[k] > s[breakp]) {
            swap(s[breakp], s[k]);
            reverse(s.begin()+breakp+1,s.end());
            break;
        }
    }
    
    return stoi(s);
}


