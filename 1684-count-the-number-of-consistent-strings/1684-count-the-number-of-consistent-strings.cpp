class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<char>s;
        for(int i=0;i<allowed.size();i++)
        {
            s.insert(allowed[i]);
        }
        
        int count=0;
        for(int i=0;i<words.size();i++)
        { 
           int j=0; 
           string st=words[i];
           for(char c:st)
           {
              if(s.find(c)==s.end())
              {
                  break;
              }
              else if(s.find(c)!=s.end())
              {
                j++;
                if(j==st.size())
                {
                    count++;
                }
              }
           }

        }
        return count;
    }
};