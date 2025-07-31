class Solution {
public:
    int longestPalindrome(string s) {
        set<char>ss;
        int result=0;
        for(int i=0;i<s.size();i++)
        {
            if(ss.find(s[i])!=ss.end())
            {
               result+=2;
               ss.erase(s[i]);
            }
            else
            {
                ss.insert(s[i]);
            }
        }
        if(!ss.empty())
        {
            result+=1;
        }
        return result;
    }
};