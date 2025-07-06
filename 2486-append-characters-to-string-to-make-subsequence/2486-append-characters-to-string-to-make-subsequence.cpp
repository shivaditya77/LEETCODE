class Solution {
public:
    int appendCharacters(string s, string t) {
        set<char>st1;
        for(int i=0;i<s.size();i++)
        {
            st1.insert(s[i]);
        }

        for(int i=0;i<t.size();i++)
        {
            if(st1.find(t[i])!=st1.end())
            {
                continue;
            }
            else
            {
                string st=t.substr(i,t.size());
                return st.size();
            }
        }
        return 0;
    }
};