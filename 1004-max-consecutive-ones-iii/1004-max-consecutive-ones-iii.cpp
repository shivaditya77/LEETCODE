class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0;
        int r=0;
        int zero=0;

        int maxlen=INT_MIN;
        while(r<nums.size())
        {
            if(nums[r]==0)
            {
                zero++;
            }

            while(zero>k)
            {
              if(nums[l]==0)
              {
                zero--;
              }
              l++;
            }

            if(zero<=k)
            {
              int len=r-l+1;
              maxlen=max(maxlen,len);
            }

            r++;
        }
        return maxlen;
    }
};