class Solution {
public:

    bool dfs(vector<vector<char>>& board, vector<vector<bool>>& visited,
             string& word, int i, int j, int index) {

        if (index == word.size())
            return true;

        int m = board.size();
        int n = board[0].size();

        if (i < 0 || i >= m || j < 0 || j >= n)
            return false;

        if (visited[i][j])
            return false;

        if (board[i][j] != word[index])
            return false;

        visited[i][j] = true;

        bool found =
            dfs(board, visited, word, i + 1, j, index + 1) ||
            dfs(board, visited, word, i - 1, j, index + 1) ||
            dfs(board, visited, word, i, j + 1, index + 1) ||
            dfs(board, visited, word, i, j - 1, index + 1);

        visited[i][j] = false;   // Backtrack

        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {

        int m = board.size();
        int n = board[0].size();

        vector<vector<bool>> visited(m, vector<bool>(n, false));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                if (dfs(board, visited, word, i, j, 0))
                    return true;
            }
        }

        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna