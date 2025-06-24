class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string>s1;
        stringstream ss(s);
        string token;
        while(ss>>token)
        {
         s1.push_back(token);
        }
        
        string k=s1[s1.size()-1];
        return k.size();
    }
};