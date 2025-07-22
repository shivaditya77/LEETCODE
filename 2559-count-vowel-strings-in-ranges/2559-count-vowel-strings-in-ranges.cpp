class Solution {
public:
    bool isvowel(char k)
    {
        if(k=='a' || k=='e' || k=='i' || k=='o' ||k=='u')
        {
            return true;
        }
        return false;
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        
        vector<int>ans;
        int n=words.size();
        int count=0;
        vector<int>cum;
        for(int i=0;i<n;i++)
        {
            string k=words[i];
            if(isvowel(k[0]) && isvowel(k[k.size()-1]))
            {
                count++;
            }
                cum.push_back(count);
        }

        int m=queries.size();
        for(int i=0;i<m;i++)
        {
            if(queries[i][0]==0)
            {
                ans.push_back(cum[queries[i][1]]);
            }
            else
            {
                ans.push_back(cum[queries[i][1]]-cum[queries[i][0]-1]);
            }
        }
        return ans;
    }
};