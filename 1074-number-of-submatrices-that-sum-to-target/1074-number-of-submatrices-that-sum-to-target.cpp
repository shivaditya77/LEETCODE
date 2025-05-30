class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        
        //first take row wise cumulative sum
        for(int row=0;row<m;row++)
        {
            for(int col=1;col<n;col++)
            {
                matrix[row][col]+=matrix[row][col-1];
            }
        }

        //now you find the no of subarrays with sum==target
        int result=0;
        for(int startcol=0;startcol<n;startcol++)
        {
            for(int j=startcol;j<n;j++)
            {
                unordered_map<int,int>mp;
                mp[0]++;
                int currsum=0;

                for(int row=0;row<m;row++)
                {
                  currsum+=matrix[row][j]-(startcol>0 ? matrix         [row] [startcol-1]:0);

                  if(mp.find(currsum-target)!=mp.end())
                  {
                    result+=mp[currsum-target];
                  }

                  mp[currsum]++;
                }
            }
        }
        return result;

    }
};