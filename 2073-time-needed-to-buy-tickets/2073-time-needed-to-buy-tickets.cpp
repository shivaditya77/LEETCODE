class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int count=0;
        int m=tickets[k];
        for(int i=0;i<tickets.size();i++)
        {
               if(i==k)
               {
                 count+=m;
                 for(int j=i+1;j<tickets.size();j++)
                 {
                    if(m<tickets[j])
                    {
                        count--;
                    }
                 }
                 continue;
               }

               if(m>tickets[i])
               {
                 count+=tickets[i];
               }
               else if(m<=tickets[i])
               {
                 count+=min(m,tickets[i]);
               }
        }
        return count;
    }
};