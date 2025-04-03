class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();

        vector<int>rowindex(m);
        vector<int>colindex(n);

        int max=INT_MIN;
        int i=0;
        while(i<m)
        {
            for(int j=0;j<n;j++)
            {
                if(max<grid[i][j])
                {
                    max=grid[i][j];
                }
            }
            rowindex[i]=max;
            i++;
            max=INT_MIN;
        }
        
        max=INT_MIN;
        int j=0;
        while(j<n)
        {
            for( i=0;i<m;i++)
            {
                if(max<grid[i][j])
                {
                    max=grid[i][j];
                }
            }
            colindex[j]=max;
            j++;
            max=INT_MIN;
        }

        int sum=0;
        for(int k=0;k<m;k++)
        {
            for(int l=0;l<n;l++)
            {
                int z=grid[k][l];
                grid[k][l]=min(rowindex[k],colindex[l]);
                sum=sum+(grid[k][l]-z);
            }
        }
        return sum;
    }
};