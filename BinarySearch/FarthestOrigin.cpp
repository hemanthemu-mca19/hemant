// https://binarysearch.com/problems/Furthest-From-Origin

/**
Furthest From Origin
You are given a string s where each character is "L" meaning you moved one unit left, "R" meaning you moved one unit right, or "?" meaning either "L" or "R".

Given you are at position 0, return the maximum possible distance you could be from 0 by replacing "?" with "L" or "R".

Constraints

0 ≤ n ≤ 100,000 where n is the length of s
Example 1
Input
s = "LLRRR??"
Output
3
Explanation
We can replace the two "?" with "R" to move 5 units right and 2 units left, for a total distance of 3 units from 0.

**/

int solve(string s) {
    int q = 0, ans =0;
    for( auto x:s){
        if( x == 'L') ans++;
        else if ( x == 'R' ) ans--;
        else q++;
    }
    return abs(ans)+q;
}
