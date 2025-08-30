class Solution {
public: 
     unordered_set<int>st;
    void solve(vector<int>&temp,vector<int>& nums,vector<vector<int>>&ans)
    {
        if(temp.size()==nums.size())
        {
            ans.push_back(temp);
            return ;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(st.find(nums[i])==st.end())
            {
                temp.push_back(nums[i]);
                st.insert(nums[i]);

                solve(temp,nums,ans);

                temp.pop_back();
                st.erase(nums[i]);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;

        solve(temp,nums,ans);

        return ans;
    }
};