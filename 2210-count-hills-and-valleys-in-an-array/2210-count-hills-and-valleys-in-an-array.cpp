class Solution {
public:
    int countHillValley(vector<int>& nums) {
        vector<int>result;
        result.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-1])
            {
                result.push_back(nums[i]);
            }
        }

        int count=0;
        for(int i=1;i<result.size()-1;i++)
        {
            if((result[i]>result[i-1] && result[i]>result[i+1]) || (result[i]<result[i-1] && result[i]<result[i+1]) )
            {
                count++;
            }
        }
        return count;
    }
};