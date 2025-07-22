// class Solution {
// public:
//     int waysToSplitArray(vector<int>& nums) {
//         int n=nums.size();
//          unordered_map<int,int>mp;
//          unordered_map<int,int>mp1;
//         for(int i=0;i<n;i++)
//         {
//           mp1[nums[i]]++;
//         }
        
//         int count=0;
//         for(int i=0;i<n-1;i++)
//         {
//             int n=nums[i];
//             mp[n]++;
//             mp1[n]--;
//             if(mp1[n]==0)
//             {
//                 mp1.erase(n);
//             }
//             int sum=0;
//             int sum1=0;
//             for(auto it:mp)
//             {
//                 sum+=it.first*it.second;
//             }
//             for(auto it:mp1)
//             {
//                 sum1+=it.first*it.second;
//             }
//             if(sum>=sum1)
//             {
//                 count++;
//             }
//         }
//         return count;
//     }
// };


class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n=nums.size();
        long long totalsum=0;
        for(int i=0;i<n;i++)
        {
            totalsum+=nums[i];
        }

        long long leftsum=0;
        int count=0;
        for(int i=0;i<n-1;i++)
        {
            leftsum+=nums[i];
            long long rightsum=totalsum-leftsum;

            if(leftsum>=rightsum)
            {
                count++;
            }
        }
        return count;
    }
};