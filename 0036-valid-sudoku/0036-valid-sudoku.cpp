class Solution {
public:
    bool validate(vector<vector<char>>& board,int sr,int er,int sc,int ec)
    {
        for(int sr=0;sr<=er;sr++)
        {
             unordered_set<char>st;
            for(int sc=0;sc<=ec;sc++)
         {
            if(board[sr][sc]=='.')
                {
                    continue;
                }

                if(st.find(board[sr][sc])!=st.end())
                {
                    return false;
                }
                st.insert(board[sr][sc]);
         }
        }

        return true;
    }


    bool isValidSudoku(vector<vector<char>>& board) {
        //validate row
        for(int row=0;row<9;row++)
        {
            unordered_set<char>st;
            for(int col=0;col<9;col++)
            {
                if(board[row][col]=='.')
                {
                    continue;
                }

                if(st.find(board[row][col])!=st.end())
                {
                    return false;
                }
                st.insert(board[row][col]);
            }
        }

        //validate column
        for(int col=0;col<9;col++)
        {
            unordered_set<char>st;
            for(int row=0;row<9;row++)
            {
                if(board[row][col]=='.')
                {
                    continue;
                }

                if(st.find(board[row][col])!=st.end())
                {
                    return false;
                }
                st.insert(board[row][col]);
            }
        }

        //validate 3*3 board
        for(int sr=0;sr<9;sr+=3)
        {
            int er=sr+2;

            for(int sc=0;sc<9;sc+=3)
            {
                int ec=sc+2;

                if(!validate(board,sr,er,sc,ec))
                {
                    return false;
                }
            }
        }
        return true;
    }
};