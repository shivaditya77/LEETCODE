class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
         if(nums[0]<nums[n-1])
         {
            return nums[0];
         }

         int start=0;
         int end=nums.size()-1;
         while(start<end)
         {
            int mid=start+(end-start)/2;
            if(nums[mid]>=nums[0])
            {
                start=mid+1;
            }
            else if(nums[mid]<nums[end])
            {
                end=mid;
            }
         }
      return nums[start];

    }
};