class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mp;
        int maxi=INT_MIN;
        int maximum=INT_MIN;
        int cntbc;
        int left=0;
        for(int right=0;right<s.size();right++)
        {
            if(mp.find(s[right])!=mp.end())
            {
                mp[s[right]]++;
                for(auto it:mp)
                {
                  if(maxi<it.second)
                  {
                    maxi=it.second;
                  }
                }
                 cntbc=(right-left+1)-maxi;
                 if(cntbc>k)
                 {
                    mp[s[left]]--;
                    left++;
                 }
                 else
                 {
                    int sum=0;
                    for(auto it:mp)
                      {
                        sum+=it.second;
                      }
                    maximum=max(maximum,sum);
                 }

            }
            else
            {
            mp[s[right]]++;
            for(auto it:mp)
            {
                if(maxi<it.second)
                {
                    maxi=it.second;
                }
            }
             cntbc=(right-left+1)-maxi;
             if(cntbc>k)
                 {
                    mp[s[left]]--;
                    left++;
                 }
                 else
                 {
                    int sum=0;
                    for(auto it:mp)
                      {
                        sum+=it.second;
                      }
                    maximum=max(maximum,sum);
                 }
            }

        }
        return maximum;
    }
};