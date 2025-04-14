class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        
        int m=items.size();
        int n1=queries.size();
       int maxi=INT_MIN;
       vector<int>ans(0);
       int k=0;
        while(k<n1)
        {
            for(int i=0;i<m;i++)
            {
                if(items[i][0]<=queries[k])
                {
                   maxi=max(maxi,items[i][1]);
                }
            }
            if(maxi<0)
            {
                ans.push_back(0);
            }
            else
            {
            ans.push_back(maxi);
            }
            maxi=INT_MIN;
            k++;
        }


        return ans;
    }
};