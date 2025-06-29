class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>ans;
        unordered_map<int,int>s;
        int m=grid.size();

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<m;j++)
            {
                s[grid[i][j]]++;
            }
        }

        for(int i=1;i<=(m*m);i++)
        {
             if(s.find(i)!=s.end())
            {
                if(s[i]>1)
                {
                    ans.push_back(i);
                }
            } 
        }

        for(int i=1;i<=(m*m);i++)
        {
            if(s.find(i)==s.end())
            {
                ans.push_back(i);
            }
        }

        
        return ans;
    }
};