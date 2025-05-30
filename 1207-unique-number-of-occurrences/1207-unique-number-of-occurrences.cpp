class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>uno;

        for(int i=0;i<arr.size();i++)
        {
            uno[arr[i]]++;
        }

        unordered_set<int>st;

        for(auto &it:uno)
        {
            int freq=it.second;
            if(st.find(freq)!=st.end())
            {
                return false;
            }
            st.insert(freq);
        }
        return true;
    }
};