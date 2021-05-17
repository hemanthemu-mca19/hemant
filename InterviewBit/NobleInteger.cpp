// https://www.interviewbit.com/problems/noble-integer/

/**
Problem Description

Given an integer array A, find if an integer p exists in the array such that the number of integers greater than p in the array equals to p.



Input Format
First and only argument is an integer array A.



Output Format
Return 1 if any such integer p is found else return -1.

**/

// CODE

int Solution::solve(vector<int> &A) {
    sort(A.begin(), A.end());
    int n = A.size()-1;
    // for( auto x : mp ) mp[x]++;
    if(A[n] == 0) return 1;
    for (int i=0; i<n; i++) {
        if(A[i] != A[i+1] && A[i] == n-i)
            return 1;
    }
    return -1;
}
