class Solution:
    def solveSudoku(self, board: List[List[str]]) -> None:
        """
        Do not return anything, modify board in-place instead.
        """
        self.sudokuSolver(board, 0, 0)
        return 
    
    def sudokuSolver(self, board, currentRow, currentCol):
        
        if currentRow == 9:
            return True
        
        if currentCol == 8:
            nextRowPos = currentRow+1
            nextColPos = 0
            
        else:
            nextRowPos = currentRow
            nextColPos = currentCol+1
            
        if board[currentRow][currentCol] != '.':
            return self.sudokuSolver(board, nextRowPos, nextColPos)
        
        #for(int i = 1; i < 10 ; i++)
        for currentVal in range(1, 10):
            
            if self.isValidCell(board, currentRow, currentCol, currentVal):
                board[currentRow][currentCol] = str(currentVal)
                if self.sudokuSolver(board, nextRowPos, nextColPos) is True:
                    return True
                board[currentRow][currentCol] = '.'
                
        return False
    
    def isValidCell(self, board, currentRow, currentCol, currentVal):
        return self.isRowValid(board, currentRow, currentVal) and self.isColValid(board, currentCol, currentVal) and self.isSubGridValid(board, currentRow, currentCol, currentVal)
    
    def isRowValid(self, board, currentRow, currentVal):
        
        for currentCol in range(9):
            
            if board[currentRow][currentCol] == str(currentVal):
                return False
            
        return True
    
    def isColValid(self, board, currentCol, currentVal):
        
        for currentRow in range(9):
            
            if board[currentRow][currentCol] == str(currentVal):
                return False
            
        return True
    
    def isSubGridValid(self, board, currentRow, currentCol, currentVal):
        x = 3 * (currentRow//3)
        y = 3 * (currentCol//3)
        
        for i in range(3):
            for j in range(3):
                
                if board[x+i][y+j] == str(currentVal):
                    return False
                
        return True
            