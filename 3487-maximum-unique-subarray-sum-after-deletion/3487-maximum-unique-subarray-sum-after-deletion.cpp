class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                mp[nums[i]]++;
            }
        }
        int sum=0;
        for(auto it:mp)
        {
            sum+=it.first;
        }
        return sum;
    }
};