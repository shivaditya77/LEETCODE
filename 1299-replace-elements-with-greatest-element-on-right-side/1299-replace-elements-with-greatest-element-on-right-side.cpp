class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans(n);
        int maxi=-1;
        ans[arr.size()-1]=-1;
        for(int i=n-2;i>=0;i--)
        { 
            maxi=max(maxi,arr[i+1]);
            ans[i]=maxi;
        }
        return ans;
    }
};