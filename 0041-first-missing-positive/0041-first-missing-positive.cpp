class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int n=nums.size();

        //checking 1 in the array
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                flag=true;
            }
        }
        if(!flag)
        {
            return 1;
        }
         
         //replacing the value of less than zero or greater than n with 1
         for(int i = 0; i < n; i++)
        {
            if(nums[i] <= 0 || nums[i] > n) 
            {
            nums[i] = 1;
            }
        }


         int idx;
        for(int i=0;i<n;i++)
        {
               idx=abs(nums[i])-1;
               nums[idx]=-abs(nums[idx]);
        }

        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                return i+1;
            }
        }

        return n+1;;
    }
};