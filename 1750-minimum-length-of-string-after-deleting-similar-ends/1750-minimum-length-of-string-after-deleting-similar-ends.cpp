class Solution {
public:
    int minimumLength(string s) {
        int n=s.size();
        int j=0;
        int k=s.size()-1;
        for(int i=0;i<k;i=j)
        {
            char ch=s[i];
            if(s[j]==s[k])
            {
                while(j<=k &&s[j]==ch)
                {
                    j++;
                }
                while(k>=j && s[k]==ch)
                {
                    k--;
                }
            }
            else
            {
                break;
            }
        }
        return (k-j+1);
    }
};