class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {

        int m=grid.size();
        int n=grid[0].size();

        vector<vector<int>>temp(m,vector<int>(n));

        for(int r=0;r<m;r++)
        {
            for(int c=0;c<n;c++)
            {
               int dindex=((r*n+c)+k)%(m*n);
               int row=dindex/n;
               int col=dindex%n;
               temp[row][col]=grid[r][c];
            }
        }
        return temp;
    }
};