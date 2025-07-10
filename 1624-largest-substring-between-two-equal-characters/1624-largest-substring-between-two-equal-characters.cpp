class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int maxi=0;
        int count1=0;
        unordered_set<char>st;
        for(int i=0;i<s.size();i++)
        {
            st.insert(s[i]);
        }

        for(char ss:st)
        {
           int leftindex=-1;
           int rightindex=-1;
           for(int i=0;i<s.size();i++)
           {
            if(ss==s[i])
            {
            if(leftindex==-1)
            {
                leftindex=i;
            }
            rightindex=i;
            }
           }
           int count=0;
            if(leftindex==rightindex)
           {
                count1++;
           }
           else
           {
             for(int m=leftindex+1;m<=rightindex-1;m++)
            {
                count++;
            }
           }
           maxi=max(maxi,count);
        }
        if(count1==s.size())
        {
            return -1;
        }
        return maxi;
    }
};