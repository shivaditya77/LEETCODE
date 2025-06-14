class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
        int m=k;
        int first1;
        while(m!=0)
        {
            int max=INT_MIN;
            for(auto it:mp)
            {
              int save=it.second;
              if(save>max)
              {
                max=save;
                first1=it.first;
              }
            }
            ans.push_back(first1);
            mp[first1]=0;
            m--;
        }
        return ans;
    }
};