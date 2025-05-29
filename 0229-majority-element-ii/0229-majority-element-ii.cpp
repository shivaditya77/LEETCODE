class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>major;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int majority = nums[0];
        for (auto it : mp) {
            if (it.second > nums.size() / 3) {
                majority = it.first;
                major.push_back(majority);
            }
        }

        return major;
    }
};