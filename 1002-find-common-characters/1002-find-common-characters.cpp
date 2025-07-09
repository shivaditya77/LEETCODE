class Solution {
public:
    void fillcount(string &words,int count[26])
    {
        for(int i=0;i<words.size();i++)
        {
            count[words[i]-'a']++;
        }
    }
    vector<string> commonChars(vector<string>& words) {
        vector<string>result;
        int n=words.size();
        int count[26]={0};

        fillcount(words[0],count);

        for(int i=1;i<words.size();i++)
        {
            int temp[26]={0};
            fillcount(words[i],temp);
            for(int i=0;i<26;i++)
            {
                if(count[i]!=temp[i])
                {
                    count[i]=min(count[i],temp[i]);
                }
            }
        }

        for(int i = 0; i<26; i++) 
        {
            if(count[i] != 0) 
            {
                int c = count[i];
                while(c--) 
                {
                    result.push_back(string(1, i+'a'));
                }
            }
        }
        return result;
    }
};