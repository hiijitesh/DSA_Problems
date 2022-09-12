class Solution {
public:
        bool dfs(vector<vector<char>>& board, string word, int row, int col, int m, int n, int idxWord){
        
        if(idxWord == word.size()) 
            return true;
        
        if(row <0 || row >= m || col < 0 || col >= n || board[row][col] != word[idxWord])
            return false;
            
        board[row][col] = '0';
        
        bool found = (dfs(board, word, row -1, col, m, n, idxWord+1) || 
        dfs(board, word, row +1, col, m, n, idxWord+1) || 
        dfs(board, word, row , col -1, m, n, idxWord+1 )|| 
        dfs(board, word, row, col +1, m, n, idxWord+1));
        
        
        board[row][col] = word[idxWord];
        return found;
        
    }
    bool exist(vector<vector<char>>& board, string word) {
        // Code here
        
        if(word == "")
            return false;
        
        int m = board.size();
        int n = board[0].size();
        
        for(int currRow = 0; currRow < m; currRow++)
        {
            for(int currCol = 0; currCol < n; currCol++)
            {
                if(board[currRow][currCol] == word[0] && dfs(board, word, currRow, currCol, m, n, 0))
                    return true;
            }
        }
        
        return false;
    }
};