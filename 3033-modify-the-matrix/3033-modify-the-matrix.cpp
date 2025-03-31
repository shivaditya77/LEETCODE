class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        
        int m=matrix.size();
        int n=matrix[0].size();

        vector<vector<int>> ans(m, vector<int>(n));

        for(int i=0;i<m;i++)
        {
           int maxi=INT_MIN;
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==-1)
                {
                    for(int i=0;i<m;i++)
                    {
                        maxi=max(maxi,matrix[i][j]);

                    }
                    ans[i][j]=maxi;
                }
                else
                {
                    ans[i][j]=matrix[i][j];
                }
            }
            
        }
        return ans;
    }
};