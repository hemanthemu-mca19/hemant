// https://www.interviewbit.com/problems/implement-strstr/

/**
int Solution::strStr(const string A, const string B) {
    int m = A.size(), n = B.size();
    if(m==0 || n==0) return -1;
    if(m < n) return -1;
    if(A==B) return 0;
    for(int i = 0; i < m-n; i++) {
        int j;
        for(j=0; j<n; j++){
            if(A[i+j] != B[j]) break;
        }
        if(j == n) return i;
    }
    return -1;
}

**/

// CODE

int Solution::strStr(const string A, const string B) {
    int m = A.size(), n = B.size();
    if(m==0 || n==0) return -1;
    if(m < n) return -1;
    if(A==B) return 0;
    for(int i = 0; i < m-n; i++) {
        int j;
        for(j=0; j<n; j++){
            if(A[i+j] != B[j]) break;
        }
        if(j == n) return i;
    }
    return -1;
}
