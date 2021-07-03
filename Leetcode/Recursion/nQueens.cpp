// https://leetcode.com/problems/n-queens/submissions/

/**

 N-Queens
Hard

3534

115

Add to List

Share
The n-queens puzzle is the problem of placing n queens on an n x n chessboard such that no two queens attack each other.

Given an integer n, return all distinct solutions to the n-queens puzzle. You may return the answer in any order.

Each solution contains a distinct board configuration of the n-queens' placement, where 'Q' and '.' both indicate a queen and an empty space, respectively.

 

Example 1:


Input: n = 4
Output: [[".Q..","...Q","Q...","..Q."],["..Q.","Q...","...Q",".Q.."]]
Explanation: There exist two distinct solutions to the 4-queens puzzle as shown above
Example 2:

Input: n = 1
Output: [["Q"]]
 

Constraints:

1 <= n <= 9
**/

// CODE
class Solution {
public:
    vector<vector<string> > ans;
    bool isValid(vector<string> &board, int row, int col) {
         for (int i = 0; i != row; ++i)
            if (board[i][col] == 'Q')
                return false;
        //check diagonal
        int i = row, j = col;
        while(i>=0 and j>=0) {
            if(board[i][j]=='Q') return false;
            i--;
            j--;
        }
        i= row, j= col;
        while(i>=0 and j<board.size()){
            if(board[i][j]=='Q') return false;
            i--;
            j++;
        }
        return true;
    }
    void helper(int n, vector<string> &board, int row) {
        //base case
        if(row == n) return ans.push_back(board);
        
        for(int col=0; col!=n; ++col) {
            if(isValid(board, row, col)) {
                board[row][col] = 'Q';
                //check for next queen to be placed
                helper(n, board, row+1);
                //backtrack
                board[row][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board;
        string temp = "";
        for(int i=0; i<n; i++) temp += '.';
        for(int i=0; i<n; i++) board.push_back(temp);
        
        helper(n, board, 0);
        
        return ans;
    }
};
