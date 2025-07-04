class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }

        string ss="";
        while(ss.size()!=s.size())
        {
            int maxi=INT_MIN;
            char pahla='\0';
            for(auto it:mp)
            {
                if(maxi<it.second)
                {
                    maxi=it.second;
                    pahla=it.first;
                }
            }
            while(maxi)
            {
            ss+=pahla;
            maxi--;
            }
            mp.erase(pahla);
        }
        return ss;
    }
};