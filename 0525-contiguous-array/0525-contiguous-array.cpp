class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mp;
        mp[0]=-1;
        int currsum=0;
        int maxi=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                currsum+=-1;
            }
            else
            {
                currsum+=1;
            }

            if(mp.find(currsum) != mp.end())
            {
                maxi=max(maxi,i-mp[currsum]);
            }
            else
            {
                mp[currsum]=i;
            }
        }
      return maxi;
    }
};