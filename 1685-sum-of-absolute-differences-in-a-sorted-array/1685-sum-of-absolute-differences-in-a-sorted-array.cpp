class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size();
        vector<int>result(n);
        
        int totalsum=0;
        for(int i=0;i<nums.size();i++)
        {
            totalsum+=nums[i];
        }
        
        int prefixsum=0;
        for(int i=0;i<nums.size();i++)
        {
            int leftsum=prefixsum;
            int rightsum=totalsum-prefixsum-nums[i];
            result[i]=(nums[i]*i)-leftsum+rightsum-(nums[i]*(n-i-1));
            prefixsum+=nums[i];
        }
        return result;
    }
};