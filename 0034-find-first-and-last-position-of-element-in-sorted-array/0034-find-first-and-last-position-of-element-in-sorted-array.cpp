class Solution {
public:
    int leftmost(vector<int> &nums,int target)
    {
        int start=0;
        int end=nums.size()-1;
        int leftmos=-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(target==nums[mid])
            {
               leftmos=mid;
               end=mid-1;
            }
            else if(nums[mid]>target)
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }

        }
        return leftmos;
    }

    int rightmost(vector<int> &nums,int target)
    {
        int start=0;
        int end=nums.size()-1;
        int rightmos=-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(target==nums[mid])
            {
               rightmos=mid;
               start=mid+1;
            }
            else if(nums[mid]>target)
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }

        }
        return rightmos;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int left=leftmost(nums,target);
        int right=rightmost(nums,target);
        return {left,right};
    }
};