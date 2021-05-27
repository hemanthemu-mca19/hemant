// https://www.interviewbit.com/problems/square-root-of-integer/

/**
Square Root of Integer

Asked in:  
Facebook
Amazon
Microsoft


Given an integar A.

Compute and return the square root of A.

If A is not a perfect square, return floor(sqrt(A)).

DO NOT USE SQRT FUNCTION FROM STANDARD LIBRARY



Input Format

The first and only argument given is the integer A.
Output Format

Return floor(sqrt(A))
Constraints

1 <= A <= 10^9
For Example

Input 1:
    A = 11
Output 1:
    3

Input 2:
    A = 9
Output 2:
    3
    
    **/

// CODE

int Solution::sqrt(int A) {
    
    if(A <= 1) return A;
    if(A < 4) return 1;
    long long int l = 1, r = A/2, val = 1;
    while(l<=r){
        long long int mid = l + (r-l)/2;
        if(mid == A/mid) return mid;
        else if ( mid > A/mid){
            r = mid - 1;
        }
        else {
            l = mid+1;
            val = mid;
        }
    }
    return int(val);
}
