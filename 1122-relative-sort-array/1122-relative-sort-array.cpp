class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>mp;
        for(int i=0;i<arr1.size();i++)
        {
            mp[arr1[i]]++;
        }

        set<int>s;
        for(int i=0;i<arr2.size();i++)
        {
            s.insert(arr2[i]);
        }

        vector<int>hain;
        vector<int>not1;

        for(int i=0;i<arr2.size();i++)
        {
            if(mp.find(arr2[i])!=mp.end())
            {
                while(mp[arr2[i]]!=0)
                {
                   hain.push_back(arr2[i]);
                   mp[arr2[i]]--;
                }
            }
        }
        for(int i=0;i<arr1.size();i++)
        {
            if(s.find(arr1[i])==s.end())
            {
                not1.push_back(arr1[i]);
            }
        }
        sort(not1.begin(),not1.end());
        for(int i=0;i<not1.size();i++)
        {
            hain.push_back(not1[i]);
        }
        return hain;
    }
};