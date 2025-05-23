class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>words;
        stringstream ss(s);

        string token;
        int countwords=0;

        while(getline(ss,token,' '))
        {
            words.push_back(token);
            countwords++;
        }

        if(pattern.size()!=countwords)
        {
            return false;
        }

        unordered_map<string,char>mp;
        set<char>used;

        for(int i=0;i<pattern.size();i++)
        {
            string word=words[i];
            char ch=pattern[i];

            if(mp.find(word)==mp.end() && used.find(ch)==used.end())
            {
                used.insert(ch);
                mp[word]=ch;
            }
            else if(mp[word] != pattern[i])
            {
                return false;
            }
        }

        return true;
    }
};