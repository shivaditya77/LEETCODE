class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>mp;
        for(int i=0;i<text.size();i++)
        {
            if(text[i]=='b' || text[i]=='a' || text[i]=='l' || text[i]=='o' || text[i]=='n' )
            {
               mp[text[i]]++;
            }
        }

        string balloon="balloon";
         for(int i=0;i<balloon.size();i++)
         {
            if(mp.find(balloon[i])==mp.end())
            {
                return 0;
            }
         }

         for(auto it:mp)
         {
            if(it.first=='l' || it.first=='o')
            {
                mp[it.first]=mp[it.first]/2;
            }
         }
        
         int mini=INT_MAX;
         for(auto it:mp)
         {
            mini=min(mini,it.second);
         }
         return mini;
    }
};