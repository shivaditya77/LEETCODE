class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>result;
        if(p.size()>s.size())
        {
            return result;
        }

        vector<int>scount(26,0);
        vector<int>pcount(26,0);

        for(int i=0;i<p.size();i++)
        {
            pcount[p[i]-'a']++;
        }

        int windowsize=p.size();
        for(int i=0;i<s.size();i++)
        {
            scount[s[i]-'a']++;

            if(i>=windowsize)
            {
              scount[s[i-windowsize]-'a']--;
            }
            //compare both array
            if (scount == pcount) 
            {
                result.push_back(i - windowsize + 1);
            }
        }
        return result;
    }
};