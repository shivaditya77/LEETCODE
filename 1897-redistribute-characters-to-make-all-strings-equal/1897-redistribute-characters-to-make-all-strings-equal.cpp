class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n=words.size();
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++)
        {
            string st=words[i];
            for(int j=0;j<st.size();j++)
            {
                mp[st[j]]++;
            }
        }

        for(auto it:mp)
        {
            if(it.second%n!=0)
            {
               return false;
            }
        }
        return true;
    }
};