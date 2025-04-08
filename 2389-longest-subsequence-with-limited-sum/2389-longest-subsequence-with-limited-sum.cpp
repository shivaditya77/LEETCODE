class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        
        int n=queries.size();
        int m=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>answer;

        int i=0;
        int sum=0;
        int count=0;
        while(i<n)
        {
            for(int j=0;j<m;j++)
            {
               sum+=nums[j];
              if(sum<=queries[i])
              {
                count++;
              } 
            }
            answer.push_back(count);
            count=0;
            sum=0;
            i++;

        }
        return answer;
    }
};