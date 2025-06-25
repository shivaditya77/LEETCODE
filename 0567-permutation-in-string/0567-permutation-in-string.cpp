class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(),s1.end());
        int n=s2.size();
        int k=s1.size();
        for(int i=0;i<=n-k;i=i+1)
        {
            string s="";
            for(int j=i;j<=i+k-1;j++)
            {
                s+=s2[j];
            }
            sort(s.begin(),s.end());
            if(s1==s)
            {
                return true;
            }
        }
        return false;
    }
};