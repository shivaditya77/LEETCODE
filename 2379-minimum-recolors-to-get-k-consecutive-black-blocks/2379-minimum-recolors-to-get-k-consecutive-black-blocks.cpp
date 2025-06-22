class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int count=0;
        int mini=INT_MAX;
        for(int i=0;i<k;i++)
        {
            if(blocks[i]=='W')
            {
                count++;
            }
        }
        mini=min(mini,count);

        for(int i=1;i<=blocks.size()-k;i++)
        {
            count=0;
            for(int j=i;j<=(i+k-1);j++)
            {
               if(blocks[j]=='W')
               {
                count++;
               }
            }
            mini=min(mini,count);
        }
        return mini;
    }
};