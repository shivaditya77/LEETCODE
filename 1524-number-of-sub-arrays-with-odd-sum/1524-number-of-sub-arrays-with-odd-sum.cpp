class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int MOD = 1e9 + 7;
        vector<int>ans;
        int sum=0;
        for(int i=0;i<arr.size();i++)
        { 
            sum=0;
            for(int j=i;j<arr.size();j++)
            {
               sum+=arr[j];
               ans.push_back(sum);
            }
        }
        
        int count=0;
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]%2!=0)
            {
               count++;
            }
        }
        return count%MOD;
    }
};