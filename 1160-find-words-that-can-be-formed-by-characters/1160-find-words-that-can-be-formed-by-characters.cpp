class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        
        
        int sum=0;
        for(int i=0;i<words.size();i++)
        { 
           unordered_map<char,int>mp;
           for(int i=0;i<chars.size();i++)
            {
            mp[chars[i]]++;
            }
           int j=0; 
           string st=words[i];
           for(char c:st)
           {
              if(mp.find(c)==mp.end())
              {
                  break;
              }
              else if(mp.find(c)!=mp.end())
              {

                mp[c]--;

                j++;
                if(j==st.size())
                {
                    sum+=st.size();
                }
              }
           }

        }
        return sum;
    }
};