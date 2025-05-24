// class Solution {
// public:
//     int numIdenticalPairs(vector<int>& nums) {
        
//     //    brute force
//     int count=0;
//     for(int i=0;i<nums.size();i++)
//     {
//         for(int j=i+1;j<nums.size();j++)
//         {
//             if(nums[i]==nums[j])
//             {
//                 count++;
//             }
//         }
//     }
// return count;
//     }
// };


class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
         int total=0;
        for(auto it:mp)
        {
          int save=it.second;
          total=total+((save)*(save-1))/2;
        }
        return total;
    }
};