/** https://www.interviewbit.com/problems/max-min-05542f2f-69aa-4253-9cc7-84eb7bf739c4/ **/

/**
Problem Description

Given an array A of size N. You need to find the sum of Maximum and Minimum element in the given array.

NOTE: You should make minimum number of comparisons.



Problem Constraints
1 <= N <= 105

-109 <= A[i] <= 109

**/

//CODE

int Solution::solve(vector<int> &A) {
    int n = A.size();
    if(n==0) return 0;
    if(n==1) return A[0]+A[0];
    if(n==2) return A[0]+A[1];
    int mx = INT_MIN, mn = INT_MAX;
    for(int i=0; i<n; i++){
        mn = min(A[i], mn);
        mx = max(A[i], mx);
    }
    return mn+mx;
}
