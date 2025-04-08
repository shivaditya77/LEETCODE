// class Solution {
// public:
//     vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        
//         int n=queries.size();
//         int m=nums.size();
//         sort(nums.begin(),nums.end());
//         vector<int>answer;

//         int i=0;
//         int sum=0;
//         int count=0;
//         while(i<n)
//         {
//             for(int j=0;j<m;j++)
//             {
//                sum+=nums[j];
//               if(sum<=queries[i])
//               {
//                 count++;
//               } 
//             }
//             answer.push_back(count);
//             count=0;
//             sum=0;
//             i++;

//         }
//         return answer;
//     }
// };



class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
             sort(nums.begin(),nums.end());
             for(int i=1;i<nums.size();i++)
             {
                nums[i]=nums[i]+nums[i-1];
             }   
             int start=0;
             int end=nums.size()-1;
             int i=0;
             int ans;
             vector<int>answer;
             while(i<queries.size())
             {
                 while(start<=end)
                 {
                    int mid=start+(end-start)/2;
                    if(nums[mid]<=queries[i])
                    {
                        start=mid+1;
                    }
                    else if(nums[mid]>queries[i])
                    {
                            ans=mid;
                            end=mid-1;
                    }
                 }
                 answer.push_back(start);
                 start=0;
                 end=nums.size()-1;
                 i++;
             }
             return answer;
    }
};