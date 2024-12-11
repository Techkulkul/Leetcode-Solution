class Solution {
public:
    void findExist(int ind,int row,int col,vector<vector<char>>& board,string word,bool &ans,vector<vector<char>> &visited)
    {
        if(ind==word.size())
        {
            ans=true;
            return;
        }
        // if(row>=0 && row<board.size() && col>=0 && col<board[0].size() && word[ind]==board[row][col] && visited[row][col]==0)   //(0,0)
        // {
        //     visited[row][col]=1;
        //     findExist(ind+1,row,col,board,word,ans,visited);
        //     visited[row][col]=0;
        // }
        if(row>=0 && row<board.size() && col+1>=0 && col+1<board[0].size() && word[ind]==board[row][col+1]&& visited[row][col+1]==0) //right
        {
            visited[row][col+1]=1;
            findExist(ind+1,row,col+1,board,word,ans,visited);
            visited[row][col+1]=0;

        }
        if(row+1>=0 && row+1<board.size() && col>=0 && col<board[0].size() && word[ind]==board[row+1][col] && visited[row+1][col]==0) //down
        {
            visited[row+1][col]=1;
            findExist(ind+1,row+1,col,board,word,ans,visited);
            visited[row+1][col]=0;
            
        }
        if(row-1>=0 && row-1<board.size() && col>=0 && col<board[0].size() && word[ind]==board[row-1][col] && visited[row-1][col]==0)  //up
        {
            visited[row-1][col]=1;
            findExist(ind+1,row-1,col,board,word,ans,visited);
            visited[row-1][col]=0;
        }
        if(row>=0 && row<board.size() && col-1>=0 && col-1<board[0].size() && word[ind]==board[row][col-1] && visited[row][col-1]==0)  //left
        {
            visited[row][col-1]=1;
            findExist(ind+1,row,col-1,board,word,ans,visited);
            visited[row][col-1]=0;
        }

    }
    bool exist(vector<vector<char>>& board, string word) {
        bool ans=false;
        vector<vector<char>> visited(board.begin(),board.end());
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[i].size();j++)
            {
                visited[i][j]=0;
            }
        }
        int row,col;
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[i].size();j++)
            {
                if(word[0]==board[i][j])
                {
                    row=i;
                    col=j;
                    visited[row][col]=1;
                    findExist(1,row,col,board,word,ans,visited);
                    if(ans==true) return ans;
                    visited[row][col]=0;
                }
            }
        }
        // findExist(0,0,0,board,word,ans,visited);
        return ans;
        
    }
};