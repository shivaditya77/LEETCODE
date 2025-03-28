class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1)
        {
          return 0;
        }
        
        int n=nums.size();

        int i=0;
        int j=0;
        int product=1;
        int count=0;
        while(i<n)
        {
          product*=nums[j];

          if(product<k)
          {
            count++;
          }

          if(product>=k)
          {
           i++;
           j=i-1;
           product=1;
          }
          
          j++;

          if(j==n)
          {
            i++;
            j=i;
            product=1;
          }
        } 
        return count;
    }
};