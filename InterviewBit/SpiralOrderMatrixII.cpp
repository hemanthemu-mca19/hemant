// https://www.interviewbit.com/problems/spiral-order-matrix-ii/

vector<vector<int> > Solution::generateMatrix(int A) {
    vector<vector<int> > mat(A, vector<int> (A));
    
    int L = 0, R = A-1, T = 0, B = A-1;
    int dir = 0;
    int cnt = 1;
    while(L <= R and T <= B) {
        if(dir == 0) {
            for(int i = L; i <= R; i++) mat[T][i] = cnt++;
            T++;
        }
        else if (dir == 1){
            for(int i = T; i <= B; i++) mat[i][R] = cnt++;
            R--;
        }
        else if(dir == 2) {
            for( int i = R; i >= L; i--) mat[B][i] = cnt++;
            B--;
        }
        else {
            for(int i = B; i >= T; i--) mat[i][L] = cnt++;
            L++;
        }
        dir = (dir+1)%4;
    }
    return mat;
}

/**

Asked in:  
Microsoft
JP Morgan
Amazon
Given an integer A, generate a square matrix filled with elements from 1 to A2 in spiral order.



Input Format:

The first and the only argument contains an integer, A.
Output Format:

Return a 2-d matrix of size A x A satisfying the spiral order.
Constraints:

1 <= A <= 1000
Examples:

Input 1:
    A = 3

Output 1:
    [   [ 1, 2, 3 ],
        [ 8, 9, 4 ],
        [ 7, 6, 5 ]   ]

Input 2:
    4

Output 2:
    [   [1, 2, 3, 4],
        [12, 13, 14, 5],
        [11, 16, 15, 6],
        [10, 9, 8, 7]   ]

**/
