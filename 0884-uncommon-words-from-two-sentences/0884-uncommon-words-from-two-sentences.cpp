class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string>ans;
        stringstream ss(s1);
        string token;
        while(ss>>token)
        {
            ans.push_back(token);
        }

        stringstream ss1(s2);
        while(ss1>>token)
        {
            ans.push_back(token);
        }

        unordered_map<string,int>mp;
        for(int i=0;i<ans.size();i++)
        {
            mp[ans[i]]++;
        }
        vector<string>final;
        for(auto it:mp)
        {
            if(it.second==1)
            {
                final.push_back(it.first);
            }
        }
        return final;
    }
};