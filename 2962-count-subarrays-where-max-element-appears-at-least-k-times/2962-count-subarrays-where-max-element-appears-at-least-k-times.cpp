class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxi=*max_element(nums.begin(), nums.end());
        long long result=0;
        int i=0;
        int j=0;
        int maxcount=0;
        while(j<nums.size())
        {
            if(nums[j]==maxi)
            {
                maxcount++;
            }
            while(maxcount>=k)
            {
                result+=nums.size()-j;
                if(nums[i]==maxi)
                {
                    maxcount--;
                }
                i++;
            }
            j++;
        }
     return result; 
    }
};