class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int count=0;
        for(int i=0;i<blocks.size();i++)
        {
            if(blocks[i]=='B')
            {
                count++;
            }
        }
        if(count>k)
        {
            return 0;
        }
            return (k-count)+1;
    }
};