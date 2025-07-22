class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int n=nums.size();

        unordered_map<int,int>mp;
        unordered_map<int,int>mp1;

        for(int i=0;i<n;i++)
        {
            mp1[nums[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            int k=nums[i];
            mp[k]++;
            mp1[k]--;

            int l=i+1;
            int r=n-i-1;
            if(mp[k]>l/2 && mp1[k]>r/2)
            {
                return i;
            }
        }
        return -1;
    }
};