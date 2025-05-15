class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();

        reverse(s.begin(),s.end());
        
        string ans="";

        for(int i=0;i<n;i++)
        {
            string save="";
            while(i<n && s[i]!=' ')
            {
               save=save+s[i];
               i++;
            }
            reverse(save.begin(),save.end());
            if(save.length()>0)
            {
            ans+=" "+save;
            }
        }
        return ans.substr(1);

    }
};