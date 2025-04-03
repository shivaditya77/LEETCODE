class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        
        int m=grid.size();
        int n=grid[0].size();

        int i=0;
        int j=0;
        while(i<m && j<n)
        {
            if(grid[i][j]==0)
            {
                return false;
            }
            i++;
            j++;
        }

        i=0;
        j=n-1;
        while(i<m && j>=0)
        {
            if(grid[i][j]==0)
            {
                return false;
            }
            i++;
            j--;
        }


        
        for(int k=1;k<=m-2;k++)
        {
            if(grid[k][0]!=0)
            {
                return false;
            }
        }

        for(int l=1;l<=n-2;l++)
        {
            if(grid[m-1][l]!=0)
            {
                return false;
            }
        }

        for(int k=m-2;k>=1;k--)
        {
            if(grid[k][n-1]!=0)
            {
                return false;
            }
        }

        for(int l=n-2;l>=1;l--)
        {
            if(grid[0][l]!=0)
            {
                return false;
            }
        }



        return true;
    }
};