// https://www.interviewbit.com/problems/first-missing-integer/

/**


Asked in:  
Model N
InMobi
Amazon
Given an unsorted integer array, find the first missing positive integer.

Example:

Given [1,2,0] return 3,

[3,4,-1,1] return 2,

[-8, -7, -6] returns 1

Your algorithm should run in O(n) time and use constant space.

**/

// CODE

int Solution::firstMissingPositive(vector<int> &A) {
    int n = A.size();
    for( int i=0; i<n; i++) {
        if(A[i]<1) A[i] = n+1;
    }
    for(int i=0; i<n; i++) {
        if(abs(A[i])<n+1) {
            A[abs(A[i])-1] = - abs(A[abs(A[i])-1]);
        }
    }
    for(int i = 0; i<n; i++){
        if(A[i]>0) return i+1;
    }
    return n+1;
}
