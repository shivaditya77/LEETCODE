class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++)
        {
            string k=words[i];
            string m=k;
            reverse(m.begin(),m.end());
            if(k==m)
            {
                return k;
            }
        }
        return "";
    }
};