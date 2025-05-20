class Solution {
public:
    bool canput(vector<string> &board, int r, int c, int n) {
        // Check column
        for (int i = 0; i < r; i++) {
            if (board[i][c] == 'Q') return false;
        }

        // Check top-left diagonal
        int i = r - 1, j = c - 1;
        while (i >= 0 && j >= 0) {
            if (board[i--][j--] == 'Q') return false;
        }

        // Check top-right diagonal
        i = r - 1, j = c + 1;
        while (i >= 0 && j < n) {
            if (board[i--][j++] == 'Q') return false;
        }

        return true;
    }

    void f(vector<vector<string>> &ans, vector<string> &board, int r, int n) {
        if (r == n) {
            ans.push_back(board);
            return;
        }

        for (int i = 0; i < n; i++) {
            if (canput(board, r, i, n)) {
                board[r][i] = 'Q';
                f(ans, board, r + 1, n); // Continue searching for all possible configurations
                board[r][i] = '.';       // Backtrack
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n, string(n, '.'));
        f(ans, board, 0, n);
        return ans;
    }
};
