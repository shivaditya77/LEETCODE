class Solution {
public:
    void solve(int i,vector<int>& nums,vector<int>& currsubset,vector<vector<int>>& subsets) 
    {
        if(i==nums.size())
        {
            subsets.push_back(currsubset);
            return ;
        }

        currsubset.push_back(nums[i]);
        solve(i+1,nums,currsubset,subsets);
        currsubset.pop_back();
        solve(i+1,nums,currsubset,subsets);
    }
    int subsetXORSum(vector<int>& nums) {
        vector<vector<int>>subsets;
        vector<int>currsubset;

        solve(0,nums,currsubset,subsets);

        int result=0;
        for(vector<int>&subset:subsets)
        {
            int Xor=0;
            for(int &num:subset)
            {
                Xor^=num;
            }
            result+=Xor;
        }
        return result;
    }
};