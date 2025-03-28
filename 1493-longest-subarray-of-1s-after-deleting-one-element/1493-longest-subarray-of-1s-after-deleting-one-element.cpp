class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        
        int l=0;
        int r=0;
        int flip=0;
        int maxlen=INT_MIN;
        while(r<nums.size())
        {
            if(nums[r]==0)
            {
                flip++;
            }
            while(flip>1)
            {
                if(nums[l]==0)
                {
                    flip--;
                }
                l++;
            }
            if(flip<=1)
            {
                int len=r-l+1;
                maxlen=max(maxlen,len);
            }
            r++;
        }

        return maxlen-1;
    }
};