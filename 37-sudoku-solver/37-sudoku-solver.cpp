class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
    
    bool solve(vector<vector<char>>& board){
        
        for(int i=0 ; i<board.size() ; i++){
            for(int j=0; j<board[0].size() ; j++){
                if(board[i][j]=='.'){
                    for(int p='1' ; p<='9' ; p++){
                        if(ispossible(board,i,j,p))
                        {
                           board[i][j]=p;
                        
                        if(solve(board)==true)
                            return true;
                        else
                            board[i][j]='.';
                        }
                    }
                  return false;  
                }
            }
        }
        return true;
    }
    
    bool ispossible(vector<vector<char>>& board, int row, int col , int p){
        
        for(int i=0 ; i<9 ; i++){
            if(board[row][i]==p)
                return false;
            if(board[i][col]==p)
                return false;
            if(board[3* (row/3) + i / 3][3 * (col/3) + i % 3]==p)
                return false;
        }
        return true;
    }
};