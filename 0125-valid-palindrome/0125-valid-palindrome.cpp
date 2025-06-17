class Solution {
public:
    bool isPalindrome(string s) {
    string c="";
    string p="";
    for(int i=0;i<s.size();i++)
    {
        if(isalpha(s[i]))
        {
            c+=tolower(s[i]);
        }
    }

    for(int i=s.size()-1;i>=0;i--)
    {
        if(isalpha(s[i]))
        {
            p+=tolower(s[i]);
        }
    }
    if(p==c)
    {
        return true;
    }
    return false;
    }
};