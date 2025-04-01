class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int m=mat.size();
        int n=mat[0].size();

        vector<vector<int>>ans(m,vector<int>(n));
         
         for(int i=0;i<m;i++)
         {
            for(int j=0;j<n;j++)
            {
                k=k%n;
                int idx=0;
                if(i%2==0)
                {
                  for(int x=k;x<n;x++)
                  {
                    ans[i][idx++]=mat[i][x];
                  }
                  for(int y=0;y<k;y++)
                  {
                    ans[i][idx++]=mat[i][y];
                  }
                }
                else
                {
                    for(int x=n-1;x>k;x--)
                    {
                        ans[i][idx++]=mat[i][x];
                    }
                    for(int y=0;y<=k;y++)
                    {
                        ans[i][idx++]=mat[i][y];
                    }
                }
            }
         }
        
        int flag=0;
         for(int i=0;i<m;i++)
         {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j]!=ans[i][j])
                {
                    flag=1;
                    break;
                }
            }
         }

         if(flag==0)
         {
            return true;
         }
         else
         {
            return false;
         }
    }
};