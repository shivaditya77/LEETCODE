class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>result;
        unordered_set<int>s;
        for(int i=0;i<nums2.size();i++)
        {
            s.insert(nums2[i]);
        }
        vector<int>ans1;
        for(int i=0;i<nums1.size();i++)
        {
            if(s.find(nums1[i])==s.end())
            {
                ans1.push_back(nums1[i]);
                s.insert(nums1[i]);
            }
        }

        unordered_set<int>s1;
        for(int i=0;i<nums1.size();i++)
        {
            s1.insert(nums1[i]);
        }
        vector<int>ans2;
        for(int i=0;i<nums2.size();i++)
        {
            if(s1.find(nums2[i])==s1.end())
            {
                ans2.push_back(nums2[i]);
                s1.insert(nums2[i]);
            }
        }
        return {ans1,ans2};
    }
};