class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n=s.size();

        vector<int>result(n+1);
        int lp=0;
        int rp=n;

        for(int i=0;i<n;i++)
        {

         if(s[i]=='I')
         {
            result[i]=lp;
            lp++;
         }
         else if(s[i]=='D')
         {
            result[i]=rp;
            rp--;
         }

        }

        if(s[n-1]=='I')
        {
            result[n]=lp;
        }
        else if(s[n-1]=='D')
        {
            result[n]=rp;
        }

        return result;
    }
};