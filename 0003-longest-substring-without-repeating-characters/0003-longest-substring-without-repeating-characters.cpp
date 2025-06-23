class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0)
        {
            return 0;
        }
       unordered_map<char,int>mp;
       int maxi=INT_MIN;
       for(int i=0;i<s.size();i++)
       {
        if(mp.find(s[i])!=mp.end())
        {
            int index=i-mp[s[i]];
            maxi=max(maxi,index);
            mp[s[i]]=i;
        }
        mp[s[i]]=i;
       }
       return maxi;

    }
};