class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        if(nums.size()==1 || nums[n-1]==0)
        {
                return true;
        }
        for(int i=0;i<n-1;i++)
        {
            if(i+nums[i]>n-1)
            {
                return true;
            }

            if(i+nums[i]==n-1)
            {
                return true;
            }
        }
        return false;
    }
};