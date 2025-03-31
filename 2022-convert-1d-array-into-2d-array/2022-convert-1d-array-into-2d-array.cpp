class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ans(m, vector<int>(n));
         int idx=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                 if(original.size()>m*n)
                 {
                    return {};
                }
                

                if(idx<original.size())
                {
                    ans[i][j] = original[idx++];
                }
                else
                {
                    return {};
                }
            }
        }
        return ans;
    }
};