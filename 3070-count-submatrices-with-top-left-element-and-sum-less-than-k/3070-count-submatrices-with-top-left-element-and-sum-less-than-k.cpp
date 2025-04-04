class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        
        int m=grid.size();
        int n=grid[0].size();

       int colsum=0;
        for(int j=0;j<n;j++)
        {
            colsum=0;
            for(int i=1;i<m;i++)
            {
                colsum=grid[i-1][j]+grid[i][j];
                grid[i][j]=colsum;
            }
        }

        int rowsum=0;
        for(int i=0;i<m;i++)
        {
            rowsum=0;
            for(int j=1;j<n;j++)
            {
                rowsum=grid[i][j-1]+grid[i][j];
                grid[i][j]=rowsum;
            }
        }

        int count=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]<=k)
                {
                    count++;
                }
            }
        }
        return count;
    }
};