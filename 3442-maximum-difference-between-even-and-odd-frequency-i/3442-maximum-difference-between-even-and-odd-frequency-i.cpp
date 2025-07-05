class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
         
        int odd=0;
        int even=0; 
        for(auto it:mp)
        {
            if(it.second%2==0)
            {
                even=max(even,it.second);
            }

            if(it.second%2!=0)
            {
                odd=max(odd,it.second);
            }
        }

        if(odd-even<0)
        {
            return -1;
        }

        return odd-even;
    }
};