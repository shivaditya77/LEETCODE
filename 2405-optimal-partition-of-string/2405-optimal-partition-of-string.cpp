class Solution {
public:
    int partitionString(string s) {
        int j=0;
        int count=0;
        set<char>st;
        while(j<s.size())
        {
            if(st.find(s[j])==st.end())
            {
                st.insert(s[j]);
            }
            else if(st.find(s[j])!=st.end())
            {
                st.clear();
                count++;
                st.insert(s[j]);
            }
            j++;
        }
        if(st.size()==1 || st.size()==s.size())
        {
            count++;
        }
        return count;
    }
};