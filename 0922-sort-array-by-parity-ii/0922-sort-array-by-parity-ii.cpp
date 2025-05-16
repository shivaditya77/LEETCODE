class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        int even=0;
        int odd=1;

        while(odd<n && even<n)
        {
            while(odd<n && nums[odd]%2!=0)
            {
               odd+=2;
            }

            while(even<n && nums[even]%2==0)
            {
               even+=2;
            }

            if(odd<n && even<n)
            {
              swap(nums[odd],nums[even]);
            }
        }
        return nums;
    }
};