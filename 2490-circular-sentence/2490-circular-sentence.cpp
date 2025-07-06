class Solution {
public:
    bool isCircularSentence(string sentence) {
        vector<string>result;
        stringstream ss(sentence);
        string token;
        while(ss>>token)
        {
            result.push_back(token);
        }
        int n=result.size();

        string kk=result[n-1];
        string kk1=result[0];

        if(kk1[0]!=kk[kk.size()-1])
        {
            return false;
        }

        for(int i=0;i<result.size()-1;i++)
        {
            string kk2=result[i];
            string kk3=result[i+1];
            if(kk2[kk2.size()-1]!=kk3[0])
            {
                return false;
            }
        }
        return true;
    }
};