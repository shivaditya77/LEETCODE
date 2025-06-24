class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n=details.size();
        int count=0;
        for(int i=0;i<details.size();i++)
        {
            string s=details[i];
            string st="";
            st += s[s.size() - 4];
            st += s[s.size() - 3];
            if(stoi(st)>60)
            {
                count++;
            }
        }
        return count;
    }
};