class Solution {
public:
    void reverseString(vector<char>& s) {
        // stack<char>st;
        // for(int i=0;i<s.size();i++)
        // {
        //     st.push(s[i]);
        // }
        // for(int i=0;!st.empty();i++)
        // {
        //     s[i]=st.top();
        //     st.pop();
        // }
        int i=0;
        int j=s.size()-1;
        while(i<=j)
        {
            swap(s[i],s[j]);
            i++;
            j--;
        }
    }
};