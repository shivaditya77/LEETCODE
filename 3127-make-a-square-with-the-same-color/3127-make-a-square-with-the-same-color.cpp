class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int black=0;
                int white=0;
                if(j==n-1 || i==m-1)
                {
                    continue;
                }
                else
                {
                    if(grid[i][j]=='B')
                    {
                        black++;
                    }
                    else
                    {
                        white++;
                    }
                    if(grid[i][j+1]=='B')
                    {
                        black++;
                    }
                    else
                    {
                        white++;
                    }
                    if(grid[i+1][j]=='B')
                    {
                        black++;
                    }
                    else
                    {
                        white++;
                    }
                    if(grid[i+1][j+1]=='B')
                    {
                        black++;
                    }
                    else
                    {
                        white++;
                    }

                    if(black==3 || white==3)
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};