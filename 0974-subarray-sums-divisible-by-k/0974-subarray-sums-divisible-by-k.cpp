class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
       unordered_map<int,int>mp;
       int n=nums.size();
       int ps[n];
       ps[0]=nums[0];
       for(int i=1;i<n;i++)
       {
        ps[i]=nums[i]+ps[i-1];
       }    
        mp[0]++;

        int result=0;

       for(int i=0;i<n;i++)
       {
        if(ps[i]<0)
        {
            ps[i]=ps[i]+k;
        }
        else
        {
            ps[i]=ps[i]%k;
        }

        if(mp.find(ps[i])==mp.end())
        {
            mp[ps[i]]++;
        }
        else if(mp.find(ps[i])!=mp.end())
        {
            int value=mp[ps[i]];
            result+=value;
            mp[ps[i]]++;
        }
       }
       return result;
    }
};