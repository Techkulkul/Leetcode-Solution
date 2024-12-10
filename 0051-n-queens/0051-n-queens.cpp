class Solution {
public:
    void findCombination(int col,vector<string>&board,vector<int> &leftRow,vector<int> &upperDiagonal,vector<int> &lowerDiagonal,vector<vector<string>>&ans)
    {
        if(col==board.size())
        {
            ans.push_back(board);
            return;
        }
        for(int i=0;i<board.size();i++)
        {
            if(leftRow[i]==0 && lowerDiagonal[i+col]==0 && upperDiagonal[board.size()-1+col-i]==0)
            {
                board[i][col]='Q';
                leftRow[i]=1;
                lowerDiagonal[i+col]=1;
                upperDiagonal[board.size()-1+col-i]=1;
                findCombination(col+1,board,leftRow,upperDiagonal,lowerDiagonal,ans);
                board[i][col]='.';
                leftRow[i]=0;
                lowerDiagonal[i+col]=0;
                upperDiagonal[(board.size()-1)+(col-i)]=0;

            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
            board[i]=s;
        vector<int> leftRow(n,0),upperDiagonal(2*n-1,0),lowerDiagonal(2*n-1,0);
        findCombination(0,board,leftRow,upperDiagonal,lowerDiagonal,ans);
        return ans;    
        
    }
};