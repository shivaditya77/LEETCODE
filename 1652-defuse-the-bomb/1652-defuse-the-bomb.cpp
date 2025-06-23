class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int>result(code.size(),0);
        if(k==0)
        {
            return result;
        }
        int i=-1,j=-1;
        if(k>0)
        {
            i=1;
            j=k;
        }
        else if(k<0)
        {
            i=code.size()-abs(k);
            j=code.size()-1;
        }

        int windowsize=0;
        for(int point=i;point<=j;point++)
        {
            windowsize+=code[point];
        }

        for(int k=0;k<code.size();k++)
        {
            result[k]=windowsize;

            windowsize-=code[i%code.size()];
            i++;

            windowsize+=code[(j+1)%code.size()];
            j++;
        }
        return result;
    }
};