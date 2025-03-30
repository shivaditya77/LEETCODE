class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int n=nums.size();
        int start=0;
        int end=n-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]==target)
            {
                return true;

            }
            else if(nums[start]<=nums[mid])
            {
                if(target>=nums[start] && target<=nums[mid])
                {
                    end=mid-1;
                }
                else
                {
                    start=mid+1;
                }
            }
             else if(nums[mid]<=nums[end])
            {
                if(target<=nums[end] && target>=nums[mid])
                {
                    start=mid+1;
                }
                else
                {
                 end=mid-1;
                }
            }
        }
        return false;
    }
};