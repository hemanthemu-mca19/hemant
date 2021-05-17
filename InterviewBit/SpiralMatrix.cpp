// https://www.interviewbit.com/problems/spiral-order-matrix-i/

/**

Given a matrix of m * n elements (m rows, n columns), return all elements of the matrix in spiral order.

Example:

Given the following matrix:

[
    [ 1, 2, 3 ],
    [ 4, 5, 6 ],
    [ 7, 8, 9 ]
]
You should return

[1, 2, 3, 6, 9, 8, 7, 4, 5]

**/

// CODE

vector<int> Solution::spiralOrder(const vector<vector<int> > &matrix) {
    int m = matrix.size(), n = matrix[0].size();
        int L = 0, T = 0, R = n-1, B = m-1;
        int dir = 0;
        vector<int> spiral;
        while(L <= R and T <= B) {
            if(dir == 0) { 
                for(int k = L; k <= R; k++) 
                    spiral.push_back(matrix[T][k]);
            T++;
            }
            else if(dir == 1) {
                for(int k = T; k <= B; k++) 
                    spiral.push_back(matrix[k][R]);
            R--;
            }
            else if ( dir == 2) {
                for(int k = R; k >= L; k--) 
                    spiral.push_back(matrix[B][k]);
            B--;
            }
            else {
                for(int k = B; k >= T; k--) 
                    spiral.push_back(matrix[k][L]);
            L++;
            }
            dir = (dir + 1) % 4;
        }
        return spiral;
}
