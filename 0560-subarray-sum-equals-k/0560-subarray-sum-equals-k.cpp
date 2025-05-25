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
        for(int i=0;i<n;i++)
        {
            mp[ps[i]]++;
        }
        
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

            // if(mp.find(ps[j])==mp.end())
            // {
            //     mp[ps[j]]=0;
            // }
            // mp[ps[j]]++;
        }
        return count;
    }
};