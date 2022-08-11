class Solution {
public:
    bool isSafe(vector<vector<char>>& board, int row, int col, int val)
    {
       
         for(int i = 0; i < 9; i++) 
		    if(board[i][col] == val) 
			    return false;
	
        for(int i = 0; i < 9; i++) 
		    if(board[row][i] == val) 
			    return false;
    
        int x = (row/3) * 3, y = (col/3) * 3;
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                if(board[x + i][y + j] == val) return false;
        }
    }
    return true;
    }
    
    bool solve(vector<vector<char>>& board,int row, int col)
    {
    
        if(row == 9) 
		    return true;
        if(col == 9) 
		    return solve(board, row + 1, 0);
           
        if(board[row][col] != '.') 
		    return solve(board, row, col + 1);

        for(char c = '1'; c <= '9'; c++) 
        {
            if(isSafe(board, row, col, c)) 
            {
                board[row][col] = c;
                   
                if(solve(board, row, col + 1))
				    return true;
                board[row][col] = '.';
            }
        }
    return false;
}
   
    void solveSudoku(vector<vector<char>>& board) 
    {
      solve(board,0,0);  
    }

};