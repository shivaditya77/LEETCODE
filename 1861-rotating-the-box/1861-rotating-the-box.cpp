class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int m=boxGrid.size();
        int n=boxGrid[0].size();

        vector<vector<char>>ans(n,vector<char>(m));

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
               ans[j][i]=boxGrid[i][j];
            }
        }



        for(int i=0;i<n;i++)
       {
            int j=0;
            int k=m-1;
            while(j<=k)
            {
                swap(ans[i][j],ans[i][k]);
                j++;
                k--;
            }
       }

       //apply the gravity
       for(int j=0;j<m;j++)
       {
        for(int i=n-1;i>=0;i--)
        {
            if(ans[i][j]=='.')
            {
                int stone=-1;
                for(int k=i-1;k>=0;k--)
                {
                    if(ans[k][j]=='*')
                    {
                        break;
                    }
                    else if(ans[k][j]=='#')
                    {
                        stone=k;
                        break;
                    }
                }

                if(stone!=-1)
                {
                    ans[i][j]='#';
                    ans[stone][j]='.';
                }
            }
        }
       }
       return ans;


    }
};