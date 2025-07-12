class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size();
        if(t.size()>s.size())
        {
            return "";
        }

        unordered_map<char,int>mp;
        for(char ch:t)
        {
            mp[ch]++;
        }

        int reqcount=t.size();
        int i=0;
        int j=0;
        int minwsize=INT_MAX;
        int start_i=0;

        while(j<n)
        {
            char ch=s[j];
            if(mp[ch]>0)
            {
                reqcount--;
            }

            mp[ch]--;

            while(reqcount==0)
            {
                int currwsize=j-i+1;
                if(currwsize<minwsize)
                {
                    minwsize=currwsize;
                    start_i=i;
                }
                mp[s[i]]++;
                if(mp[s[i]]>0)
                {
                    reqcount++;
                }
                i++;
            }
            j++;
        }
        return (minwsize==INT_MAX)?"":s.substr(start_i,minwsize);
    }
};