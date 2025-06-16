class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ps(n);
        ps[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
          ps[i]=nums[i]+ps[i-1];
        }

        unordered_map<int,int>mp;
        
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(ps[j]==k)
            {
                count++;
            }
            int value=ps[j]-k;
            if(mp.find(value)!=mp.end())
            {
               count+=mp[value];
            }

             mp[ps[j]]++;
        }
        return count;
    }
};