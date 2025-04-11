// class Solution {
// public:
//     vector<int> targetIndices(vector<int>& nums, int target) {
//         sort(nums.begin(),nums.end());

//         vector<int>ans;

//         for(int i=0;i<nums.size();i++)
//         {
//            if(target==nums[i])
//            {
//             ans.push_back(i);
//            }
//         }

//         return ans;
//     }
// };




class Solution {
public:
    int leftmost(vector<int>& nums, int target)
    {
        int start=0;
        int end=nums.size()-1;
        int lefty;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]==target)
            {
                lefty=mid;
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

        return lefty;
    }

    int rightmost(vector<int>& nums, int target)
    {
        int start=0;
        int end=nums.size()-1;
        int righty;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]==target)
            {
                righty=mid;
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
        return righty;
         
    }
    vector<int> targetIndices(vector<int>& nums, int target) {

          sort(nums.begin(),nums.end());
          int flag=0;
          for(int i=0;i<nums.size();i++)
          {
            if(nums[i]==target)
            {
                flag=1;
            }
          }
          if(flag==0)
          {
            return {};
          }

           int left=leftmost(nums,target);
           int right=rightmost(nums,target);

           vector<int>ans;

           while(left<=right)
           {
            ans.push_back(left);
            left++;
           }

           return ans;
    }
};