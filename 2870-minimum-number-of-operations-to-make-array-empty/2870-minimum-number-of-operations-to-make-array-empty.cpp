class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }

        int count=0;

        for(auto it:mp)
        {
            if(it.second%2==0)
            { 
               while(it.second>0)
               {
                if(it.second%2==0 && it.second%3==0 ||it.second%3==0)
                {
                    it.second-=3;
                    count++;
                }
                else
                {
                 it.second-=2;
                 count++;
                }
               }
            }
            else if(it.second%3==0)
            {
                while(it.second%3==0 && it.second>0)
               {
                 it.second-=3;
                 count++;
               }
            }
            else
            {
                return -1;
            }
        }
        return count;
    }
};