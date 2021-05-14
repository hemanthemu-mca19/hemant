/** https://www.interviewbit.com/problems/balance-array/ **/

int Solution::solve(vector<int> &A) {
    int n = A.size();
    int SE = 0, SO = 0;
    for(int i=0; i<n-1; i += 2){
        SO += A[i], SE += A[i+1];
    }
    if(n%2 == 1) SO += A[n-1];
    
    int e=0,  o=0, even, odd, cnt = 0;
    for(int i=0 ; i<n; i++) {
        if(i%2 == 0){
           even = o + (SO - e - A[i]);
           odd = e + (SE - o);
           if(even==odd) cnt++;
           e +=  A[i];
        }
        else {
          even = o + (SO - e);
          odd = e + (SE - o -A[i]);
          if(even == odd) cnt++;
          o += A[i];
        }
    }
    return cnt;
}


/**
Problem Description

Given an integer array A of size N. You need to count the number of special elements in the given array.

A element is special if removal of that element make the array balanced.

Array will be balanced if sum of even index element equal to sum of odd index element.



Problem Constraints
1 <= N <= 105

1 <= A[i] <= 109



Input Format
First and only argument is an integer array A of size N.



Output Format
Return an integer denoting the count of special elements.

**/
