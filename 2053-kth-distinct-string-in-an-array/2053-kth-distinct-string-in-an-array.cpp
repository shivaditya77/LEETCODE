class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        if(k==arr.size())
        {
            return "";
        }

        int m=0;
        string kth;
        unordered_map<string,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }

        for(auto it:arr)
        {
            if(mp[it]==1)
            {
                if(m==k)
                {
                    return kth;
                }
                kth=it;;
                m++;
            }
        }
        return kth;
    }
};