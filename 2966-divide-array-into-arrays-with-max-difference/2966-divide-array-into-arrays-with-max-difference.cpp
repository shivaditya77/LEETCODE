class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>>result;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i=i+3)
        {
            vector<int>ans;
            if(i+2<nums.size() && nums[i+2]-nums[i]<=k)
            {
              ans.push_back(nums[i]);
              ans.push_back(nums[i+1]);
              ans.push_back(nums[i+2]);
            }
            else
            {
                return {};
            }
            result.push_back(ans);
        }
        return result;
    }
};