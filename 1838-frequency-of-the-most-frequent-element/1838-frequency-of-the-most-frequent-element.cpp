class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0,r=0;
        sort(nums.begin(),nums.end());
        int total=0,res=0;
        while(r<n)
        {
           total+=nums[r];
           while(nums[r]*(r-l+1)>(total+k))
           {
            total-=nums[l];
            l++;
           }
           res=max(res,r-l+1);
           r++;
        }
        return res;
    }
};