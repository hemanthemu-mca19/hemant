/** https://www.interviewbit.com/problems/pick-from-both-sides/ **/

/**
Problem Description

Given an integer array A of size N.

You can pick B elements from either left or right end of the array A to get maximum sum.

Find and return this maximum possible sum.

NOTE: Suppose B = 4 and array A contains 10 elements then

You can pick first four elements or can pick last four elements or can pick 1 from front and 3 from back etc . you need to return the maximum possible sum of elements you can pick.


Problem Constraints
1 <= N <= 105

1 <= B <= N

-103 <= A[i] <= 103



Input Format
First argument is an integer array A.

Second argument is an integer B.



Output Format
Return an integer denoting the maximum possible sum of elements you picked.

**/

//CODE

int Solution::solve(vector<int> &A, int B) {
    if(B==0) return 0;
    int n = A.size();
    int sz = n - B;
    int mx, j=0;
    int sum = 0, total =0;
    for(auto x :  A) total +=x;
    for(int i=0; i<sz; i++) sum += A[i];
    mx = total-sum;
    for(int i=sz; i<n; i++){
        sum += (A[i]-A[j++]);
        mx = max(mx, total - sum);
    }
    return mx;
}
