class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       int total=0; 
      for(int i=0;i<nums.size();i++)
      {
        total+=nums[i];
      }
      if(total<target)
      {
        return 0;
      }


        int i=0;
        int j=0;
        int sum=0;
        int minlen=INT_MAX;
        while(j<nums.size())
        {
            sum+=nums[j];
            while(sum>=target)
            {
                int len=j-i+1;
                minlen=min(minlen,len);
                sum-=nums[i];
                i++;
            }
            j++;
        }
        return minlen;
    }
};