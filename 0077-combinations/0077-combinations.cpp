class Solution {
public:
    void solve(int start,int n,int k,vector<int>&combin, vector<vector<int>>&ans)
    {
        if(k==0)
        {
            ans.push_back(combin);
            return;
        }

        if(start>n)
        {
            return;
        }
        
        combin.push_back(start);
        solve(start+1,n,k-1,combin,ans);

        combin.pop_back();
        solve(start+1,n,k,combin,ans);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>combin;

        solve(1,n,k,combin,ans);
        return ans;
    }
};