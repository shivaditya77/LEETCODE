class Solution {
public:
    void getAll(vector<int>&candidates,int idx,int target,vector<vector<int>>&ans,vector<int>&combin)
    {
        if( target<0)
        {
            return;
        }

        if(target==0)
        {
            ans.push_back(combin);
            return ;
        }
        
        for(int i=idx;i<candidates.size();i++)
        {
            if(i>idx && candidates[i]==candidates[i-1])
            {
                continue;
            }
            combin.push_back(candidates[i]);
            getAll(candidates,i+1,target-candidates[i],ans,combin);
            combin.pop_back();
        }

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target)  {

        vector<vector<int>>ans;
        vector<int>combin;
          sort(candidates.begin(),candidates.end());

        getAll(candidates,0,target,ans,combin);
        return ans;    
    }
};